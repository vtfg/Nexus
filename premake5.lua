workspace "Nexus"
	architecture "x86_64"

	configurations {
		"Debug",
		"Release"
	}

proj_targetdir = "bin/%{cfg.buildcfg}-%{cfg.architecture}/%{prj.name}"
proj_objdir = "bin-int/%{cfg.buildcfg}-%{cfg.architecture}/%{prj.name}"

include_dir = {}
include_dir["spdlog"] = "%{wks.location}/Nexus/vendor/spdlog/include"
include_dir["SDL2"] = "%{wks.location}/Nexus/vendor/SDL2/include"

project "Nexus"
	location "Nexus"
	kind "StaticLib"
	language "C++"

	targetdir(proj_targetdir)
	objdir(proj_objdir)

	files {
		"%{prj.name}/include/**.h",
		"%{prj.name}/src/**.cpp"
	}

	excludes {
		"%{prj.name}/vendor"
	}

	includedirs {
		"%{prj.name}/include",
		"%{include_dir.spdlog}",
		"%{include_dir.SDL2}"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

		libdirs {
			"%{prj.name}/vendor/SDL2/lib/%{cfg.architecture}"
		}

		links {
			"SDL2",
			"SDL2main"
		}


project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"

	targetdir(proj_targetdir)
	objdir(proj_objdir)

	files {
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}

	includedirs {
		"%{wks.location}/Nexus/include",
		"%{include_dir.spdlog}",
		"%{include_dir.SDL2}"
	}

	links {
		"Nexus"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"
