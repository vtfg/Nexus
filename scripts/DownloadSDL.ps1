cd Nexus\vendor

wget https://libsdl.org/release/SDL2-devel-2.0.14-VC.zip -O SDL2.zip
Expand-Archive .\SDL2.zip .

mv .\SDL2-2.0.14\ SDL2
mv .\SDL2/lib/x64 .\SDL2/lib/x86_64
rm SDL2.zip
