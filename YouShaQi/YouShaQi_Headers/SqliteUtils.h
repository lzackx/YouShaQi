//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FMDatabaseQueue;

@interface SqliteUtils : NSObject
{
    FMDatabaseQueue *dbQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)resetAllAdStatusLog;
- (void)updateAdStatusWithResourceTag:(int)arg1 positionTag:(int)arg2 switchOn:(_Bool)arg3;
- (_Bool)isAdStatusOnWithResourceTag:(int)arg1 positionTag:(int)arg2;
- (id)allAdStatusLogs;
- (void)deleteMyLocalGameWithGameIds:(id)arg1;
- (void)updateMyLocalGameListWithItem:(id)arg1;
- (id)myLocalGameList;
- (id)getLocalRewardItem;
- (void)setLocalRewardItem:(id)arg1;
- (void)removeLocalNativeAdWithPlacement:(id)arg1;
- (id)getLocalNativeAd;
- (void)setLocalNativeAd:(id)arg1 withPlacement:(id)arg2;
- (void)deleteRecommendBookByBookId:(id)arg1;
- (id)getRecommendBookLog;
- (void)addRecommendBookLogWithBookIds:(id)arg1;
- (id)getBookRenovateLog;
- (void)addBookRenovateLogWithBookIds:(id)arg1 status:(int)arg2;
- (void)updateReciptLogWithTransactionId:(id)arg1 status:(long long)arg2;
- (id)getUnSendReciptLog;
- (void)insertReciptLogWithUserId:(id)arg1 transactionId:(id)arg2 receipt:(id)arg3 productId:(id)arg4 status:(long long)arg5;
- (_Bool)bookResourceHasBeenUpdated:(id)arg1;
- (void)updateBookResourceTag:(id)arg1;
- (void)insertForwardLikeLog:(id)arg1 withUid:(id)arg2;
- (_Bool)userForwardLogExist:(id)arg1 withUid:(id)arg2;
- (void)deleteFollowedLogWithUserId:(id)arg1;
- (_Bool)detectUserHasFollowedWithUserId:(id)arg1;
- (void)insertFollowedLogWithUserId:(id)arg1;
- (void)deleteSplashWithItems:(id)arg1;
- (void)deleteAllSplashes;
- (void)updateSplashDisplayCountWithItem:(id)arg1;
- (void)updateSplashDataWithItems:(id)arg1;
- (id)getSplashItemWithId:(id)arg1;
- (id)getAllSplashes;
- (void)updateBookDownloadStatusWithBookId:(id)arg1 status:(id)arg2;
- (void)initializeBookDownloadStatus;
- (id)getBookDownloadStatus;
- (void)deleteFeedBookByBookIds:(id)arg1 withSyncLog:(_Bool)arg2;
- (void)addFeedBookWithBookItems:(id)arg1 withSyncLog:(_Bool)arg2;
- (void)updateFeedBookWithBookId:(id)arg1 withChapterCount:(long long)arg2 withFeededChapterCount:(long long)arg3;
- (id)getAllFeedBooks;
- (id)getAllFeedBookIds;
- (_Bool)bookHasFeeded:(id)arg1;
- (void)deleteAllSyncLog;
- (void)deleteSyncLogByBookIds:(id)arg1;
- (void)addSyncLogWithBookIds:(id)arg1 deleted:(_Bool)arg2 syncDate:(id)arg3;
- (id)selectAllSyncLog;
- (void)insertTopicLastReadTimeLog:(id)arg1;
- (void)insertUserLikeLog:(id)arg1 withUid:(id)arg2;
- (_Bool)userLikeLogExist:(id)arg1 withUid:(id)arg2;
- (void)insertTopicVoteLog:(id)arg1 votedNo:(long long)arg2 uid:(id)arg3;
- (long long)getTopicVoteLog:(id)arg1 uid:(id)arg2;
- (void)updateLastUsedSourceNameWithBookId:(id)arg1 sourceName:(id)arg2;
- (id)getLastUsedSourceNameWithBookId:(id)arg1;
- (id)getLastReadInfoFromMixReading:(id)arg1;
- (void)updateMixReadingLastRead:(id)arg1 chapterItem:(id)arg2 chapterNum:(id)arg3 pageNum:(id)arg4 optimizeSource:(id)arg5 optimizeSourceId:(id)arg6;
- (id)getLastReadInfoFromCpSourceReading:(id)arg1 withResourceName:(id)arg2;
- (void)updateCpSourceReadingLastRead:(id)arg1 chapterName:(id)arg2 chapterLink:(id)arg3 chapterNum:(id)arg4 pageNum:(id)arg5 source:(id)arg6;
- (id)getOldOptimizeModeLastReadResourceId:(id)arg1;
- (id)getLastReadInfoFromOldOptimizeMode:(id)arg1 sourceId:(id)arg2;
- (void)deleteBookByBookIds:(id)arg1;
- (void)deleteBookByBookId:(id)arg1 withSync:(_Bool)arg2;
- (void)updateBookSortType:(id)arg1;
- (_Bool)needOrderByVisit;
- (long long)getCompareResultWithFirstItem:(id)arg1 secondItem:(id)arg2;
- (id)getAllBooksFromBookshelf;
- (id)getAllBookIdsFromBookshelf;
- (id)getAllBookIdsNotFeeded;
- (_Bool)bookHasAdded:(id)arg1;
- (unsigned long long)getBookTopicCountWithBookId:(id)arg1;
- (void)updateBookTopicCount:(unsigned long long)arg1 withBookId:(id)arg2;
- (void)updateBookVisitTimeWithBookId:(id)arg1;
- (void)updateBookAuthorWithBookItem:(id)arg1;
- (void)updateBookStickStatusWithBookId:(id)arg1 stickStatus:(id)arg2;
- (void)updateBookshelf:(id)arg1 lastChapter:(id)arg2 bookId:(id)arg3 haveUpdate:(id)arg4;
- (void)insertBookByBookItems:(id)arg1;
- (void)insertBookByBookItem:(id)arg1 withSync:(_Bool)arg2;
- (_Bool)checkFieldExistWithTableName:(id)arg1 fieldName:(id)arg2 db:(id)arg3;
- (void)createTable;
- (id)dataFilePath;
- (id)init;

@end
