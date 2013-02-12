/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSIndexPath, SUTableDataSource, SUTableView;

@interface SUTableViewController : SUViewController <UITableViewDataSource, UITableViewDelegate> {
    SUTableDataSource *_dataSource;
    NSInteger _disappearOrientation;
    NSIndexPath *_firstTapIndexPath;
    NSInteger _placeholderRowCount;
    BOOL _preferUserInteractionWhileScrolling;
    SUTableView *_tableView;
    NSInteger _tableViewStyle;
}

@property(retain) SUTableDataSource *dataSource;
@property(readonly) UITableView *tableView;
@property(readonly) NSUInteger numberOfRows;
@property NSInteger tableViewStyle;

- (void)_deliverTapCount:(NSInteger)arg1 forIndexPath:(id)arg2;
- (void)_doubleTapTimeout;
- (void)_reloadPlaceholderCells;
- (void)_resetTableView;
- (BOOL)canSelectRowAtIndexPath:(id)arg1;
- (NSInteger)clippedCornersForIndexPath:(id)arg1;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (id)copyScriptProperties;
- (id)dataSource;
- (void)dealloc;
- (BOOL)deleteRowAtIndexPath:(id)arg1;
- (BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(NSInteger)arg2;
- (BOOL)indexPathIsPlaceholder:(id)arg1;
- (id)init;
- (void)loadView;
- (NSUInteger)numberOfRows;
- (NSInteger)numberOfSectionsInTableView:(id)arg1;
- (void)purgeMemoryForReason:(NSInteger)arg1;
- (void)reloadData;
- (void)reloadForChangedRowCount:(NSInteger)arg1;
- (void)scrollToRowAtIndexPath:(id)arg1 atScrollPosition:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)setTableViewStyle:(NSInteger)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(NSInteger)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (NSInteger)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(NSInteger)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView;
- (NSInteger)tableViewStyle;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;

@end
