<h1 align="center">
    Nexus

  <p align="center">
   <a href="https://app.codacy.com/gh/vitogd/Nexus?utm_source=github.com&utm_medium=referral&utm_content=vitogd/Nexus&utm_campaign=Badge_Grade" >
     <img alt="Code Quality" src="https://img.shields.io/codacy/grade/06c9f01ad7214c80a28043c4ee32521c?style=for-the-badge">
   </a>
    
   <a href="https://github.com/vitogd/Nexus/actions?query=workflow%3AMSBuild">
     <img alt="Build status" src="https://img.shields.io/github/workflow/status/vitogd/Nexus/MSBuild?style=for-the-badge">
   </a>
    
   <a href="https://github.com/vitogd/Nexus/issues">
     <img alt="Repository issues" src="https://img.shields.io/github/issues-raw/vitogd/Nexus?style=for-the-badge">
   </a>
  </p>
</h1>

An user-friendly game framework with focus on 2D games.

## Getting started

### Windows:

```console
:: Clone the repository with submodules
$ git clone https://github.com/vitogd/Nexus --recursive 

:: Enter on project directory
$ cd Nexus/

:: Execute premake script
$ cd scripts/
$ GenerateProjects.bat

:: You're ready! Now open Nexus.sln with Visual Studio 2019 and build the project
```

### Linux/MacOS:

```bash
# Clone the repository
$ git clone https://github.com/vitogd/Nexus

# Enter on project directory
$ cd Nexus/

# Build with CMake, creating a build folder and executing build scripts
$ mkdir build/ && cd build/
$ cmake .. # To build inside the current folder
$ make
```

## License

This project is under the Apache 2.0 license. See the [LICENSE](https://github.com/vitogd/Nexus/blob/master/LICENSE) file for more information.

---
