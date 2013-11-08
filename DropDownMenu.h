//  DayDropDownMenu.h
//
//  Copyright (c) 2013 Kevin Randrup. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^SelectionBlock)(NSString *selectedItem);

@protocol DropDownMenuDelegate;


@interface DropDownMenu : UIButton

@property (nonatomic) NSArray *items; //Array of strings to be displayed in the menu.

@property (nonatomic, strong) SelectionBlock selectionBlock; //Called when an item is selected

@property (nonatomic, weak) id<DropDownMenuDelegate> delegate;

@end


@protocol DropDownMenuDelegate <NSObject>
- (void)dropDownMenu:(DropDownMenu *)menu didSelectItem:(NSString *)selectedItem; //Called when an item is selected
@end