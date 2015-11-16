

//#include <config.h>
//#include <debug.h>
#include <libusb-1.0/libusb.h>
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"

#include "wine/debug.h"
#include "winnt.h"
#define WIN32_LEAN_AND_MEAN _
//WINE_DEFAULT_DEBUG_CHANNEL(libusb-1.0);

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, LPVOID reserved)
{
    //TRACE("(%p, %u, %p)\n", instance, reason, reserved);

    switch (reason)
    {
        case DLL_WINE_PREATTACH:
            return FALSE;    /* prefer native version */
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(instance);
            break;
    }

    return TRUE;
}


int     __stdcall Libusb_init(libusb_context ** a){return libusb_init(a);}//
ssize_t __stdcall Libusb_get_device_list(libusb_context *a,libusb_device ***b){return libusb_get_device_list(a,b);}//
int     __stdcall Libusb_get_device_descriptor(libusb_device *a, struct libusb_device_descriptor *b){return libusb_get_device_descriptor(a,b);}//
int     __stdcall Libusb_open(libusb_device *a, libusb_device_handle **b){return libusb_open(a,b);}//
int     __stdcall Libusb_bulk_transfer(libusb_device_handle *a, unsigned char b, unsigned char *c, int d, int *e, unsigned int f){return libusb_bulk_transfer(a,b,c,d,e, f);}//
void    __stdcall Libusb_close(libusb_device_handle *a){libusb_close(a);}
int     __stdcall Libusb_claim_interface(libusb_device_handle *a,int b){return libusb_claim_interface(a,b);}//






















