/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that app can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_kmdfUSBDriver2,
    0x7bb65fd1,0x9f76,0x4130,0xb1,0xe6,0x86,0xf8,0x68,0x1e,0x18,0xeb);
// {7bb65fd1-9f76-4130-b1e6-86f8681e18eb}
