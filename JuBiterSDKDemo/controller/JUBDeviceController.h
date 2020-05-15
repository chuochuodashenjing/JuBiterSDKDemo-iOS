//
//  JUBDeviceController.h
//  JuBiterSDKDemo
//
//  Created by panmin on 2020/5/6.
//  Copyright © 2020 JuBiter. All rights reserved.
//

#import "JUBDetailBaseController.h"

NS_ASSUME_NONNULL_BEGIN


#define BUTTON_TITLE_QUERYBATTERY       @"QUERY_BATTERY"
#define BUTTON_TITLE_DEVICEINFO         @"DEVICE_INFO"
#define BUTTON_TITLE_DEVICEAPPLETS      @"DEVICE_APPLETS"
#define BUTTON_TITLE_DEVICECERT         @"DEVICE_CERT"
#define BUTTON_TITLE_SENDONEAPDU        @"SEND_ONE_APDU"
#define BUTTON_TITLE_GENERATESEED       @"GENERATE_SEED"
#define BUTTON_TITLE_IMPORTMNEMONIC12   @"IMPORT_MNEMONIC_12"
#define BUTTON_TITLE_IMPORTMNEMONIC24   @"IMPORT_MNEMONIC_24"
#define BUTTON_TITLE_IMPORTSEED         @"  import_seed"
#define BUTTON_TITLE_EXPORTSEED         @"  export_seed"


typedef NS_ENUM(NSInteger, JUB_NS_ENUM_DEV_OPT) {
    QUERY_BATTERY,
    DEVICE_INFO,
    DEVICE_APPLETS,
    DEVICE_CERT,
    SEND_ONE_APDU,
    GENERATE_SEED,
    IMPORT_MNEMONIC12,
    IMPORT_MNEMONIC24,
//      IMPORT_SEED,
//      EXPORT_SEED,
};


@interface JUBDeviceController : JUBDetailBaseController
@end

NS_ASSUME_NONNULL_END
