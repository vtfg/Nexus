pushd %~dp0..\
powershell -file scripts/DownloadSDL.ps1
call vendor\premake\premake5.exe vs2019
popd
PAUSE
