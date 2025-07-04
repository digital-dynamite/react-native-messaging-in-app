//
//  SMIMessageStreamingToken.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2025-01-16.
//

#import <SMIClientCore/SMIStreamingToken.h>
#import <SMIClientCore/SMIStreamingTokenTypes.h>
#import <SMIClientCore/SMIEntryFormat.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents an individual streamed token which contains part of a full message.
NS_SWIFT_NAME(MessageStreamingToken)
@protocol SMIMessageStreamingToken <SMIStreamingToken>

/// The identifier which will correspond to the final transcripted entry.
@property (nonatomic, readonly, strong) NSString *targetMessageIdentifier;

/// The content of this streaming token.
@property (nonatomic, readonly, strong) id<SMIEntryFormat> token;

@end

NS_ASSUME_NONNULL_END
