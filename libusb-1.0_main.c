

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

//-----------------------------------------------------------------------------------------------------------------

//int     __stdcall Libusb_alloc_streams(libusb_device_handle *a,uint32_t b, unsigned char *c, int d){return libusb_alloc_streams(a,b,c,d);}
//struct Libusb_transfer * __stdcall Libusb_alloc_transfer(int a){return libusb_alloc_transfer(a);}
int     __stdcall Libusb_cancel_transfer(struct libusb_transfer *a){return libusb_cancel_transfer(a);}
int     __stdcall Libusb_control_transfer(libusb_device_handle *a,uint8_t b, uint8_t c, uint16_t d, uint16_t e,unsigned char *f, uint16_t g, unsigned int h){return libusb_control_transfer(a,b,c, d,e,f,g,h);}
int     __stdcall Libusb_release_interface(libusb_device_handle *a,int b){return libusb_release_interface(a,b);}
int     __stdcall Libusb_set_interface_alt_setting(libusb_device_handle *a , int b, int c){return libusb_set_interface_alt_setting(a,b,c);}
void    __stdcall Libusb_exit(libusb_context *a){}
int     __stdcall Libusb_set_configuration(libusb_device_handle *a,int b){return libusb_set_configuration(a,b);}
void    __stdcall Libusb_set_debug(libusb_context *a, int b){libusb_set_debug(a,b);}
void    __stdcall Libusb_free_device_list(libusb_device **a, int b){libusb_free_device_list(a, b);}


int main(void){return 0;}//end main














