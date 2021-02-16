powershell -file DownloadSDL.ps1
pushd %~dp0..\
call vendor\premake\premake5.exe vs2019
popd
PAUSE