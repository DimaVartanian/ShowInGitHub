/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTDocumentLocation, DVTFileDataType, DVTFilePath, IDENavigableItem, NSArray, NSImage, NSString;

@interface IDEContainerItemSnapshot : NSObject
{
    NSString *_name;
    NSImage *_image;
    DVTDocumentLocation *_contentDocumentLocation;
    DVTFileDataType *_documentType;
    id _originalObject;
    NSArray *_subitems;
    BOOL _leaf;
    BOOL _isMajorGroup;
    DVTFilePath *_filePath;
    IDENavigableItem *_primaryChildItem;
    BOOL _showSubitems;
}

- (id)description;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (id)initWithNavigableItem:(id)arg1;
@property(getter=isLeaf) BOOL leaf; // @synthesize leaf=_leaf;
@property(readonly) BOOL isMajorGroup; // @synthesize isMajorGroup=_isMajorGroup;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation; // @synthesize navigableItem_contentDocumentLocation=_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType; // @synthesize navigableItem_documentType=_documentType;
@property(readonly) NSImage *navigableItem_image; // @synthesize navigableItem_image=_image;
@property NSString *navigableItem_name; // @synthesize navigableItem_name=_name;
@property(readonly) id originalObject; // @synthesize originalObject=_originalObject;
@property(readonly) IDENavigableItem *primaryChildItem; // @synthesize primaryChildItem=_primaryChildItem;
@property NSArray *subitems; // @synthesize subitems=_subitems;
@property(readonly) BOOL showSubitems; // @synthesize showSubitems=_showSubitems;

@end
