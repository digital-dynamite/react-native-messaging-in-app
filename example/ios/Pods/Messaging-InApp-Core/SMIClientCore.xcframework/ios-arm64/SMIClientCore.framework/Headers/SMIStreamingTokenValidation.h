//
//  SMIStreamingTokenValidation.h
//  SMIClientCore
//
//  Created by Jeremy Wright on 2025-01-24.
//

#import <SMIClientCore/SMIStreamingToken.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents a validation event which is related to a `SMIComposedStreamingToken` containing the same `targetMessageIdentifier`
/// This token is used as an indication as to whether the content of the stream has been validated as acceptable by the backend LLM.
NS_SWIFT_NAME(StreamingTokenValidation)
@protocol SMIStreamingTokenValidation <SMIStreamingToken>

/// The identifier which will correspond to the final transcripted entry.
@property (nonatomic, readonly, strong) NSString *targetMessageIdentifier;

/// Property determining if the composed token is valid.
@property (nonatomic, readonly, assign) BOOL valid;

/// The invalidation reason.
/// NOTE: This property is meant for debugging and tracability and is not intended to be displayed to end users.
@property (nullable, nonatomic, readonly, strong) NSString *reason;

@end

NS_ASSUME_NONNULL_END
