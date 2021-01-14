workspace "Nexus"
	architecture "x86_64"

	configurations {
		"Debug",
		"Release"
	}

proj_targetdir = "bin/%{cfg.buildcfg}-%{cfg.architecture}/%{prj.name}"
proj_objdir = "bin-int/%{cfg.buildcfg}-%{cfg.architecture}/%{prj.name}"

project "Nexus"
	location "Nexus"
	kind "StaticLib"
	language "C++"

	targetdir(proj_targetdir)
	objdir(proj_objdir)

	files {
		"%{prj.name}/Nexus.h",
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
	}

	excludes {
		"%{prj.name}/vendor"
	}

	includedirs {
		"%{prj.name}/vendor/spdlog/include"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"

project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"

	targetdir(proj_targetdir)
	objdir(proj_objdir)

	files {
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp",
	}

	includedirs {
		"Nexus/vendor/spdlog/include",
		"Nexus"
	}

	links {
		"Nexus"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"
