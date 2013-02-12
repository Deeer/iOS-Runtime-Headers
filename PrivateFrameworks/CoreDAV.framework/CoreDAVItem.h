/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItem, CoreDAVParseRule, NSDictionary, NSMutableData, NSMutableDictionary, NSMutableString, NSString;

@interface CoreDAVItem : NSObject {
    NSMutableData *_cDATA;
    NSMutableString *_characters;
    NSDictionary *_coreDAVParseRules;
    CoreDAVItem *_currentlyParsingSubItem;
    NSString *_elementName;
    NSString *_nameSpace;
    NSDictionary *_nodeAttributes;
    CoreDAVItem *_parent;
    SEL _parentSetter;
    NSMutableDictionary *_parseRuleUsageNumbers;
    NSInteger _parsingState;
    CoreDAVItem *_root;
    CoreDAVParseRule *_ruleForMe;
}

@property(retain) CoreDAVItem *currentlyParsingSubItem;
@property(readonly) NSString *elementName;
@property(readonly) NSString *nameSpace;
@property(readonly) CoreDAVItem *parent;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)ignoresUnknownChildren;
+ (BOOL)parsingWithSubItems;

- (id)_coreDAVParseRules;
- (void)_noteChildCascadingFailure;
- (BOOL)_validateProperEndNameSpace:(id)arg1 elementName:(id)arg2 withParser:(id)arg3;
- (id)copyCoreDAVParseRules;
- (id)currentlyParsingSubItem;
- (void)dealloc;
- (id)elementName;
- (void)ignoreThisContent:(id)arg1;
- (id)initWithXMLParser:(id)arg1 nameSpace:(id)arg2 elementName:(id)arg3 nodeAttributes:(id)arg4 root:(id)arg5 parent:(id)arg6 parentSetter:(SEL)arg7 ruleForMe:(id)arg8;
- (id)nameSpace;
- (id)parent;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 validationErrorOccurred:(id)arg2;
- (NSInteger)parsingState;
- (id)payload;
- (void)resumeParsingWithParser:(id)arg1;
- (void)setCurrentlyParsingSubItem:(id)arg1;

@end
