/* Generated by RuntimeBrowser.
 */

@protocol TRTransferServerDelegate <NSObject>

@optional

- (void)server:(TRTransferServer *)arg1 didFailToReceiveData:(NSError *)arg2;
- (NSData *)server:(TRTransferServer *)arg1 didReceiveData:(NSData *)arg2;
- (void)serverWillReceiveData:(TRTransferServer *)arg1;

@end
