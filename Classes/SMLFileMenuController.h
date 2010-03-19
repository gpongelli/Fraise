/*
Smultron version 3.7
Written by Jean-François Moy - jeanfrancois.moy@gmail.com
Find the latest version at http://github.com/jfmoy/Smultron

Copyright 2004-2009 Peter Borg - 2010 Jean-François Moy
 
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 
http://www.apache.org/licenses/LICENSE-2.0
 
Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/


#import <Cocoa/Cocoa.h>

@interface SMLFileMenuController : NSObject
{
	NSOpenPanel *openPanel;
}

+ (SMLFileMenuController *)sharedInstance;

- (IBAction)newAction:(id)sender;
- (IBAction)newProjectAction:(id)sender;
- (IBAction)openAction:(id)sender;

- (IBAction)saveAction:(id)sender;
- (IBAction)saveAsAction:(id)sender;
- (IBAction)saveACopyAsAction:(id)sender;
- (IBAction)revertAction:(id)sender;
- (void)performRevertOfDocument:(id)document;

- (IBAction)closeAction:(id)sender;

- (IBAction)saveAllAction:(id)sender;
- (void)saveAsInSaveAllForDocument:(id)document;

- (void)printAction:(id)sender;

- (IBAction)revealInFinderAction:(id)sender;

- (IBAction)saveDocumentsAsProjectAction:(id)sender;

@end