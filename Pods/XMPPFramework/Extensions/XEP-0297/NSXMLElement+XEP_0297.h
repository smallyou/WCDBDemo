#import <Foundation/Foundation.h>

//@import KissXML;
#import <KissXML/KissXML.h>

@class XMPPIQ;
@class XMPPMessage;
@class XMPPPresence;

@interface NSXMLElement (XEP_0297)

#pragma mark Forwarded Stanza 

- (NSXMLElement *)forwardedStanza;

- (BOOL)hasForwardedStanza;

- (BOOL)isForwardedStanza;

#pragma mark Delayed Delivery Date

- (NSDate *)forwardedStanzaDelayedDeliveryDate;

#pragma mark XMPPElement

- (XMPPIQ *)forwardedIQ;

- (BOOL)hasForwardedIQ;

- (XMPPMessage *)forwardedMessage;

- (BOOL)hasForwardedMessage;

- (XMPPPresence *)forwardedPresence;

- (BOOL)hasForwardedPresence;

@end
