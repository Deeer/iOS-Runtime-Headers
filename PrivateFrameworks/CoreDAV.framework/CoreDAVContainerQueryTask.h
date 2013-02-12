/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet;

@interface CoreDAVContainerQueryTask : CoreDAVTask {
    Class _appSpecificDataItemClass;
    char *_appSpecificDataProp;
    char *_appSpecificNamespace;
    char *_appSpecificQueryCommand;
    NSInteger _searchLimit;
    NSSet *_searchTerms;
}

+ (id)_copySearchTermsFromSearchString:(id)arg1;

- (id)_initWithSearchTerms:(id)arg1 searchLimit:(NSInteger)arg2 atRelativeURI:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (void)addFiltersToXMLData:(id)arg1;
- (void)dealloc;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithSearchString:(id)arg1 searchLimit:(NSInteger)arg2 atRelativeURI:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (id)initWithSearchTerms:(id)arg1 searchLimit:(NSInteger)arg2 atRelativeURI:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (BOOL)processData:(id)arg1 withParser:(id)arg2;
- (id)requestBody;

@end
