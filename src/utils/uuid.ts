/**
 * Utility functions for UUID generation and management
 */

/**
 * Generate a random UUID v4 string
 * This is a simple implementation for React Native
 * For production use, consider using a library like 'react-native-uuid'
 */
export function generateUUID(): string {
  return 'xxxxxxxx-xxxx-4xxx-yxxx-xxxxxxxxxxxx'.replace(/[xy]/g, function (c) {
    const r = (Math.random() * 16) | 0;
    const v = c === 'x' ? r : (r & 0x3) | 0x8;
    return v.toString(16);
  });
}

/**
 * Validate if a string is a valid UUID format
 */
export function isValidUUID(uuid: string): boolean {
  const uuidRegex =
    /^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$/i;
  return uuidRegex.test(uuid);
}

/**
 * Create a conversation ID for persistent conversations
 * You can use this to maintain chat history across app sessions
 */
export function createConversationId(): string {
  return generateUUID();
}
