/************************************************************************************

Filename    :   OVR_OSX_FocusReader.h
Content     :   Reader for current app with focus on OSX
Created     :   August 5, 2014
Authors     :   Jordan Tritell

Copyright   :   Copyright 2014 Oculus VR, LLC All Rights reserved.

Licensed under the Oculus VR Rift SDK License Version 3.2 (the "License");
you may not use the Oculus VR Rift SDK except in compliance with the License,
which is provided at the time of installation or download, or which
otherwise accompanies this software in either electronic or hard copy form.

You may obtain a copy of the License at

http://www.oculusvr.com/licenses/LICENSE-3.2

Unless required by applicable law or agreed to in writing, the Oculus VR SDK
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

*************************************************************************************/

OVR_PRIVATE_FILE

#ifndef OVR_OSX_FocusReader_h
#define OVR_OSX_FocusReader_h

#import <Cocoa/Cocoa.h>

@interface FocusReader : NSObject <NSApplicationDelegate>{
    NSWindow *window;
}

- (void)start;

@property (assign) IBOutlet NSWindow *window;

@end

#endif /* OVR_OSX_FocusReader_h */

