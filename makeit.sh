#!/bin/bash
winegcc -c -m32 -lusb-1.0 -lkernel -mno-cygwin -o libusb-1.0_main.o -D__WINESRC__ -D__WINE_WINSOCK2__ libusb-1.0_main.c
winegcc -m32 -lkernel -lusb-1.0 -shared libusb-1.0.spec libusb-1.0_main.o -o libusb-1.0.dll
