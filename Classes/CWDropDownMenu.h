//  CWDropDownMenu.h
//
//  Copyright (c) 2014 Kevin Randrup. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol CWDropDownMenuDelegate;

@interface CWDropDownMenu : UIButton

@property (nonatomic) NSArray *items; //Array of strings to be displayed in the menu.

@property (nonatomic, copy) void(^selectionBlock)(NSString *selectedItem); //Called when an item is selected
- (void)setSelectionBlock:(void (^)(NSString *selectedItem))SelectionBlock;//Nescessary for proper code completion

@property (nonatomic, weak) id<CWDropDownMenuDelegate> delegate;

@end


@protocol CWDropDownMenuDelegate <NSObject>
- (void)dropDownMenu:(CWDropDownMenu *)menu didSelectItem:(NSString *)selectedItem; //Called when an item is selected
@end