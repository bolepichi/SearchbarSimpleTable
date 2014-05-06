//
//  ViewController.h
//  SearchbarSimpleTable
//
//  Created by Taagoo'iMac on 14-5-6.
//  Copyright (c) 2014年 Taagoo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UITableViewController<UISearchBarDelegate,UISearchDisplayDelegate>
@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;

@property (nonatomic, strong) NSArray *listTeams;
@property (nonatomic, strong) NSMutableArray *listFilterTeams;
-(void)filterContentForSearchText:(NSString *)searchText scope:(NSUInteger)scope;

@end
