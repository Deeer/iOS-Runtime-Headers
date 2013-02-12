/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSURL, OCPPackage, OCPPackageRelationshipCollection;

@interface OCPPackagePart : NSObject {
    struct _xmlDoc { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; NSInteger x10; NSInteger x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; NSInteger x20; struct _xmlDict {} *x21; void *x22; NSInteger x23; NSInteger x24; } *mDocument;
    NSURL *mLocation;
    OCPPackage *mPackage;
    OCPPackageRelationshipCollection *mRelationships;
}

- (id)contentType;
- (void)copyToFile:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)firstPartWithRelationshipOfType:(id)arg1;
- (id)initWithLocation:(id)arg1 relationshipsXml:(struct _xmlDoc { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; NSInteger x10; NSInteger x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; NSInteger x20; struct _xmlDict {} *x21; void *x22; NSInteger x23; NSInteger x24; }*)arg2 package:(id)arg3;
- (id)location;
- (id)package;
- (id)relationshipForIdentifier:(id)arg1;
- (id)relationshipsByType:(id)arg1;
- (struct _xmlDoc { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; NSInteger x10; NSInteger x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; NSInteger x20; struct _xmlDict {} *x21; void *x22; NSInteger x23; NSInteger x24; }*)xmlDocument;
- (struct _xmlTextReader { }*)xmlReader;

@end
