
1 stdcall libusb_init(ptr) Libusb_init
2 stdcall libusb_get_device_list(ptr ptr) Libusb_get_device_list
3 stdcall libusb_get_device_descriptor(ptr ptr) Libusb_get_device_descriptor
4 stdcall libusb_open(ptr ptr) Libusb_open
5 stdcall libusb_bulk_transfer(ptr ptr ptr long ptr long) Libusb_bulk_transfer
6 stdcall libusb_close(ptr) Libusb_close
7 stdcall libusb_claim_interface(ptr long) Libusb_claim_interface
#8 stdcall libusb_alloc_streams(ptr long ptr long) Libusb_alloc_streams
#9 stdcall libusb_alloc_transfer(long) Libusb_alloc_transfer
10 stdcall libusb_cancel_transfer(ptr) Libusb_cancel_transfer
11 stdcall libusb_control_transfer(ptr long long long long ptr long ptr) Libusb_control_transfer
12 stdcall libusb_release_interface(ptr long) Libusb_release_interface
13 stdcall libusb_set_interface_alt_setting(ptr long long) Libusb_set_interface_alt_setting
