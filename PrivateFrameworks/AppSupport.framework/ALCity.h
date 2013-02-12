/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSString;

@interface ALCity : NSObject {
    NSString *_countryName;
    NSString *_countryOverride;
    NSInteger _identifier;
    NSString *_identifierForCPCity;
    float _latitude;
    NSString *_localeCode;
    float _longitude;
    NSString *_name;
    NSString *_timeZone;
    NSString *_unlocalizedCountryName;
    NSString *_unlocalizedCountryOverride;
    NSString *_unlocalizedName;
    NSString *_yahooCode;
}

@property(readonly) NSString *classicIdentifier;
@property(retain) NSString *countryName;
@property(retain) NSString *countryOverride;
@property(retain) NSString *localeCode;
@property(retain) NSString *name;
@property(readonly) NSDictionary *properties;
@property(retain) NSString *timeZone;
@property(retain) NSString *unlocalizedCountryName;
@property(retain) NSString *unlocalizedCountryOverride;
@property(retain) NSString *unlocalizedName;
@property(retain) NSString *yahooCode;
@property NSInteger identifier;
@property float latitude;
@property float longitude;

- (id)classicIdentifier;
- (id)countryName;
- (id)countryOverride;
- (void)dealloc;
- (id)description;
- (id)displayNameIncludingCountry:(BOOL)arg1;
- (void)ensureLocalized;
- (NSInteger)identifier;
- (id)init;
- (id)initWithProperties:(id)arg1;
- (id)initWithSQLRow:(char **)arg1;
- (float)latitude;
- (id)localeCode;
- (float)longitude;
- (id)name;
- (id)properties;
- (void)setCountryName:(id)arg1;
- (void)setCountryOverride:(id)arg1;
- (void)setIdentifier:(NSInteger)arg1;
- (void)setLatitude:(float)arg1;
- (void)setLocaleCode:(id)arg1;
- (void)setLongitude:(float)arg1;
- (void)setName:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUnlocalizedCountryName:(id)arg1;
- (void)setUnlocalizedCountryOverride:(id)arg1;
- (void)setUnlocalizedName:(id)arg1;
- (void)setYahooCode:(id)arg1;
- (id)timeZone;
- (id)unlocalizedCountryName;
- (id)unlocalizedCountryOverride;
- (id)unlocalizedName;
- (id)yahooCode;

@end
