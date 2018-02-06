//
//  LYSafetySet.h
//  LYFoundation
//
//  Created by Shangen Zhang on 2017/7/26.
//  Copyright © 2017 Shangen Zhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LYSafetySet : NSObject
+ (instancetype)safetySet;

+ (instancetype)safetySetWithSet:(NSSet *)set;
+ (instancetype)safetySetWithArray:(NSArray *)array;

- (instancetype)initWithArray:(NSArray *)array;
- (instancetype)initWithSet:(NSSet *)set;

@property (readonly, copy) NSSet *objcSet;
@property (readonly, copy) NSArray *allObjects;
@property(readonly) NSUInteger count;
- (id)anyObject;
- (BOOL)containsObject:(id)anObject;


- (void)addObject:(id)object;
- (void)removeObject:(id)object;
- (void)removeAllObjects;

- (void)addObjectsFromArray:(NSArray *)array;
- (void)intersectSet:(NSSet *)otherSet;
- (void)removeObjectsFromArray:(NSArray *)array;

- (void)enumerateObjectsUsingBlock:(void (^)(id obj, BOOL *stop))block;
- (void)enumerateObjectsWithOptions:(NSEnumerationOptions)opts usingBlock:(void (NS_NOESCAPE ^)(id obj, BOOL *stop))block NS_AVAILABLE(10_6, 4_0);
@end
