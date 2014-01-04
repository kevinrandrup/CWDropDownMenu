//  DropDownMenu.h
//
//  Copyright (c) 2013 Kevin Randrup. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol DropDownMenuDelegate;

@interface DropDownMenu : UIButton

@property (nonatomic) NSArray *items; //Array of strings to be displayed in the menu.

@property (nonatomic, strong) void(^selectionBlock)(NSString *selectedItem); //Called when an item is selected
- (void)setSelectionBlock:(void (^)(NSString *selectedItem))SelectionBlock;//Nescessary for proper code completion

@property (nonatomic, weak) id<DropDownMenuDelegate> delegate;

@end


@protocol DropDownMenuDelegate <NSObject>
- (void)dropDownMenu:(DropDownMenu *)menu didSelectItem:(NSString *)selectedItem; //Called when an item is selected
@end