This is a libusb-1.0.dll fakedll so that windows programs running under wine 
that use libusb can make calls natively to libusb.



--files included are--

libusb-1.0_main.c    -contains wrapper functions around native libusb calls
libusb-1.0.spec      -spec file that describes the interface as if it were a DLL
makeit.sh            -script to compile the source files
README.txt           -this file


--files that will be created--

libusb-1.0.dll.so    -the fakedll
libusb-1.0_main.o    -the object file



To compile you will need wine, the wine development files , libc6 development
files, libusb development files  and the corresponding 32 bit development files.

This first line below creates a 32 bit object file, adjust it for 64 bit if you 
need to. The second line below creates the fakedll.

"winegcc -c -m32 -lusb-1.0 -lkernel -mno-cygwin -D__WINESRC__ -D__WINE_WINSOCK2__ libusb-1.0_main.c"
"winegcc -m32 -lkernel -lusb-1.0 -shared libusb-1.0.spec libusb-1.0_main.o -o libusb-1.0.dll"

To use the fakedll rename it to libusb-1.0.dll(or to whatever name your program needs to open it)
and place it in the folder with the executable you are going to run with wine.
Some programs may need to have the fakedll in $HOME/.wine/drive_c/windows/system32

Run winecfg and configure so that when the dll is used natively
  
