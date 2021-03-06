//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class CNContactIdentifier, NSArray, NSData, NSDateComponents, NSString;

@interface CNContact : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    void *_record;
    void *_originalRecord;
    void *_source;
    void *_addressBook;
    NSArray *_linkedContacts;
    BOOL _unified;
    int _isFacebook;
    BOOL _checkedForOriginalRecord;
    CNContactIdentifier *_identifier;
    unsigned int _recordType;
}

+ (id)contactWithUserActivityUserInfo:(id)arg1 addressBook:(void *)arg2;
+ (int)defaultNameOrderForEdit;
+ (int)propertyIDForProperty:(id)arg1;
+ (id)propertyForPropertyID:(int)arg1;
+ (id)propertiesFromPropertyIDs:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)contactWithStateRestorationCoder:(id)arg1 addressBook:(void *)arg2;
+ (id)contactWithRecordID:(int)arg1 addressBook:(void *)arg2;
+ (id)contactWithRecord:(void *)arg1 unify:(BOOL)arg2;
+ (id)contactWithRecord:(void *)arg1;
+ (id)contact;
@property(readonly) unsigned int recordType; // @synthesize recordType=_recordType;
@property(readonly, copy) CNContactIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)userActivityUserInfo;
- (id)_squareImage:(id)arg1;
- (struct CGRect)_squareCropRectForSize:(struct CGSize)arg1;
- (id)_CNLabelFromABLabel:(struct __CFString *)arg1;
- (id)_labelledStringValuesForProperty:(int)arg1;
- (id)_labelledValuesForProperty:(int)arg1 valueFromABValue:(CDUnknownBlockType)arg2;
- (id)_stringValueForProperty:(int)arg1;
- (BOOL)supportsInstantMessageService;
- (BOOL)supportsCustomLabelsForProperty:(id)arg1;
- (id)supportedLabelsForProperty:(id)arg1;
- (int)maximumNumberOfValuesForProperty:(id)arg1;
- (id)_labeledValueForSoundIdentifier:(int)arg1;
@property(readonly, copy) NSArray *textTone;
@property(readonly, copy) NSArray *ringtone;
@property(readonly, copy) NSArray *postalAddresses;
@property(readonly, copy) NSArray *socialProfiles;
@property(readonly, copy) NSArray *relatedNames;
@property(readonly, copy) NSArray *instantMessageAddresses;
@property(readonly, copy) NSArray *dates;
@property(readonly, copy) NSArray *urlAddresses;
@property(readonly, copy) NSArray *emailAddresses;
@property(readonly, copy) NSArray *phoneNumbers;
@property(readonly, copy) CNContact *preferredContactForPhoto;
@property(readonly, copy) CNContact *preferredContactForName;
@property(readonly, copy) NSString *primarySourceName;
@property(getter=isPreferredForPhoto) BOOL preferredForPhoto;
@property(getter=isPreferredForName) BOOL preferredForName;
@property(readonly) int nameOrder;
@property(readonly) int contactType;
@property(readonly, copy) NSString *note;
@property(readonly, copy) NSArray *birthdays;
@property(readonly, copy) NSDateComponents *alternateBirthday;
@property(readonly, copy) NSDateComponents *birthday;
- (id)vCardRepresentation;
@property(readonly, copy) NSString *displayName;
@property(readonly, copy) NSString *personName;
@property(readonly, copy) NSString *phoneticFullName;
@property(readonly, copy) NSString *fullName;
@property(readonly, copy) NSString *jobTitle;
@property(readonly, copy) NSString *departmentName;
@property(readonly, copy) NSString *organizationName;
@property(readonly, copy) NSString *phoneticFamilyName;
@property(readonly, copy) NSString *phoneticMiddleName;
@property(readonly, copy) NSString *phoneticGivenName;
@property(readonly, copy) NSString *nickname;
@property(readonly, copy) NSString *previousFamilyName;
@property(readonly, copy) NSString *nameSuffix;
@property(readonly, copy) NSString *familyName;
@property(readonly, copy) NSString *middleName;
@property(readonly, copy) NSString *givenName;
@property(readonly, copy) NSString *namePrefix;
- (id)largestAvailablePhotoAndCropRect:(struct CGRect *)arg1;
@property(readonly) NSData *largestAvailablePhoto;
@property(readonly) NSData *photoThumbnail;
- (void)removePhoto;
- (void)setImageData:(id)arg1 forFormat:(int)arg2 cropRect:(struct CGRect)arg3;
- (void)setPhoto:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)validatesPredicate:(id)arg1 onPropertyKey:(id)arg2 propertyIdentifier:(int)arg3;
- (void)reloadRecord;
- (BOOL)deleteContact;
@property(readonly, nonatomic, getter=isMeContact) BOOL meContact;
@property(readonly, nonatomic, getter=isFacebook) BOOL facebook;
@property(readonly, nonatomic, getter=isUnknown) BOOL unknown;
@property(readonly, nonatomic, getter=isReadonly) BOOL readonly;
@property(readonly, getter=isUnified) BOOL unified;
- (id)localizedNameForProperty:(id)arg1;
@property void *addressBook;
@property(retain) NSArray *linkedContacts;
@property(readonly) BOOL hasChanges;
- (BOOL)hasLinkedContacts;
- (BOOL)hasValidRecordID;
@property(readonly) int recordID;
@property void *source;
@property(readonly) void *originalRecord;
@property(readonly) void *record;
- (BOOL)isEqualToContact:(id)arg1 includeIdentifiers:(BOOL)arg2;
- (BOOL)isEqualToContact:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecord:(void *)arg1 unify:(BOOL)arg2;
- (id)initWithRecord:(void *)arg1 unify:(BOOL)arg2 originalRecord:(void *)arg3;
- (id)initWithRecord:(void *)arg1;

@end

