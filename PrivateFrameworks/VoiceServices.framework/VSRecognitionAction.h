/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, VSRecognitionSession;

@interface VSRecognitionAction : NSObject {
    union { 
        NSString *stringValue; 
        id attributedStringValue; 
        /* Warning: Unrecognized filer type: ')' using 'void*' */ void*NSAttributedString; 
    unsigned int _spokenStringIsAttributed : 1;
    NSString *_resultString;
    VSRecognitionSession *_session;
    } _spokenString;
    NSString *_statusString;
}

- (void)_continueAfterDeferredStart;
- (BOOL)_hasDeferredStartCallback;
- (id)_session;
- (void)_setSession:(id)arg1;
- (id)cancel;
- (void)completeWithNextAction:(id)arg1 error:(id)arg2;
- (NSInteger)completionType;
- (void)dealloc;
- (id)perform;
- (id)resultDisplayString;
- (BOOL)sensitiveActionsEnabled;
- (void)setResultDisplayString:(id)arg1;
- (void)setSpokenFeedbackAttributedString:(id)arg1;
- (void)setSpokenFeedbackString:(id)arg1;
- (void)setStatusDisplayString:(id)arg1;
- (id)spokenFeedbackAttributedString;
- (id)spokenFeedbackString;
- (id)statusDisplayString;

@end
