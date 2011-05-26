#ifndef INC_PFCfgParserTokenTypes_hpp_
#define INC_PFCfgParserTokenTypes_hpp_

/* $ANTLR 2.7.7 (20090306): "pf.g" -> "PFCfgParserTokenTypes.hpp"$ */

#ifndef CUSTOM_API
# define CUSTOM_API
#endif

#ifdef __cplusplus
struct CUSTOM_API PFCfgParserTokenTypes {
#endif
	enum {
		EOF_ = 1,
		NEWLINE = 4,
		LINE_COMMENT = 5,
		WORD = 6,
		EQUAL = 7,
		ANTISPOOF = 8,
		ALTQ = 9,
		QUEUE = 10,
		SET = 11,
		SCRUB = 12,
		TABLE = 13,
		LESS_THAN = 14,
		GREATER_THAN = 15,
		PERSIST = 16,
		CONST = 17,
		COUNTERS = 18,
		FILE = 19,
		STRING = 20,
		OPENING_BRACE = 21,
		COMMA = 22,
		CLOSING_BRACE = 23,
		EXLAMATION = 24,
		SELF = 25,
		IPV4 = 26,
		SLASH = 27,
		INT_CONST = 28,
		NAT = 29,
		BINAT = 30,
		RDR = 31,
		TIMEOUT = 32,
		PASS = 33,
		BLOCK = 34,
		IN = 35,
		OUT = 36,
		LOG = 37,
		OPENING_PAREN = 38,
		CLOSING_PAREN = 39,
		ALL = 40,
		USER = 41,
		TO = 42,
		QUICK = 43,
		ON = 44,
		INET = 45,
		INET6 = 46,
		PROTO = 47,
		IP = 48,
		ICMP = 49,
		IGMP = 50,
		TCP = 51,
		UDP = 52,
		RDP = 53,
		RSVP = 54,
		GRE = 55,
		ESP = 56,
		AH = 57,
		EIGRP = 58,
		OSPF = 59,
		IPIP = 60,
		VRRP = 61,
		L2TP = 62,
		ISIS = 63,
		FROM = 64,
		URPF_FAILED = 65,
		ANY = 66,
		NO_ROUTE = 67,
		IPV6 = 68,
		ROUTE_TO = 69,
		REPLY_TO = 70,
		FLAGS = 71,
		ICMP_TYPE = 72,
		ICMP_CODE = 73,
		ICMP6_TYPE = 74,
		TAGGED = 75,
		TAG = 76,
		NO = 77,
		KEEP = 78,
		MODULATE = 79,
		SYNPROXY = 80,
		STATE = 81,
		LABEL = 82,
		PORT = 83,
		COLON = 84,
		EXIT = 85,
		QUIT = 86,
		INTRFACE = 87,
		ICMP6 = 88,
		IGRP = 89,
		IPSEC = 90,
		NOS = 91,
		PCP = 92,
		PIM = 93,
		PPTP = 94,
		RIP = 95,
		SNP = 96,
		HOST = 97,
		RANGE = 98,
		LOG_LEVEL_ALERTS = 99,
		LOG_LEVEL_CRITICAL = 100,
		LOG_LEVEL_DEBUGGING = 101,
		LOG_LEVEL_EMERGENCIES = 102,
		LOG_LEVEL_ERRORS = 103,
		LOG_LEVEL_INFORMATIONAL = 104,
		LOG_LEVEL_NOTIFICATIONS = 105,
		LOG_LEVEL_WARNINGS = 106,
		LOG_LEVEL_DISABLE = 107,
		LOG_LEVEL_INACTIVE = 108,
		TRANSLATE_TO = 109,
		Whitespace = 110,
		HEX_CONST = 111,
		NUMBER = 112,
		NEG_INT_CONST = 113,
		HEX_DIGIT = 114,
		DIGIT = 115,
		NUM_3DIGIT = 116,
		NUM_HEX_4DIGIT = 117,
		NUMBER_ADDRESS_OR_WORD = 118,
		PIPE_CHAR = 119,
		NUMBER_SIGN = 120,
		PERCENT = 121,
		AMPERSAND = 122,
		APOSTROPHE = 123,
		STAR = 124,
		PLUS = 125,
		MINUS = 126,
		DOT = 127,
		SEMICOLON = 128,
		QUESTION = 129,
		COMMERCIAL_AT = 130,
		OPENING_SQUARE = 131,
		CLOSING_SQUARE = 132,
		CARET = 133,
		UNDERLINE = 134,
		TILDE = 135,
		DOUBLE_QUOTE = 136,
		NULL_TREE_LOOKAHEAD = 3
	};
#ifdef __cplusplus
};
#endif
#endif /*INC_PFCfgParserTokenTypes_hpp_*/
