//
// Copyright © 2021 osy. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import "UTMVirtualMachine.h"

@class UTMDrive;

NS_ASSUME_NONNULL_BEGIN

@interface UTMVirtualMachine (IO)

@property (nonatomic, readonly) NSArray<UTMDrive *> *drives;
@property (nonatomic, readonly) BOOL hasShareDirectoryEnabled;
@property (nonatomic, readonly) BOOL hasUsbRedirection;

- (BOOL)ejectDrive:(UTMDrive *)drive force:(BOOL)force error:(NSError * _Nullable *)error;
- (BOOL)changeMediumForDrive:(UTMDrive *)drive url:(NSURL *)url error:(NSError * _Nullable *)error;
- (BOOL)restoreRemovableDrivesFromBookmarksWithError:(NSError * _Nullable __autoreleasing *)error;

- (BOOL)changeSharedDirectory:(NSURL *)url error:(NSError * _Nullable *)error;
- (void)clearSharedDirectory;

@end

NS_ASSUME_NONNULL_END
