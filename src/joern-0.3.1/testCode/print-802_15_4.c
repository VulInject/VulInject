



#include <config.h>

#include "netdissect-stdinc.h"

#define ND_LONGJMP_FROM_TCHECK
#include "netdissect.h"
#include "addrtoname.h"

#include "extract.h"

#define CHECK_BIT(num,bit) (((num) >> (bit)) & 0x1)

#define BROKEN_6TISCH_PAN_ID_COMPRESSION 0


static const char *ftypes[] = {
	"Beacon",			
	"Data",				
	"ACK",				
	"Command",			
	"Reserved",			
	"Multipurpose",			
	"Fragment",			
	"Extended"			
};


static const char *h_ie_names[] = {
	"Vendor Specific Header IE",			
	"Reserved 0x01",				
	"Reserved 0x02",				
	"Reserved 0x03",				
	"Reserved 0x04",				
	"Reserved 0x05",				
	"Reserved 0x06",				
	"Reserved 0x07",				
	"Reserved 0x08",				
	"Reserved 0x09",				
	"Reserved 0x0a",				
	"Reserved 0x0b",				
	"Reserved 0x0c",				
	"Reserved 0x0d",				
	"Reserved 0x0e",				
	"Reserved 0x0f",				
	"Reserved 0x10",				
	"Reserved 0x11",				
	"Reserved 0x12",				
	"Reserved 0x13",				
	"Reserved 0x14",				
	"Reserved 0x15",				
	"Reserved 0x16",				
	"Reserved 0x17",				
	"Reserved 0x18",				
	"Reserved 0x19",				
	"LE CSL IE",					
	"LE RIT IE",					
	"DSME PAN descriptor IE",			
	"Rendezvous Time IE",				
	"Time Correction IE",				
	"Reserved 0x1f",				
	"Reserved 0x20",				
	"Extended DSME PAN descriptor IE",		
	"Fragment Sequence Context Description IE",	
	"Simplified Superframe Specification IE",	
	"Simplified GTS Specification IE",		
	"LECIM Capabilities IE",			
	"TRLE Descriptor IE",				
	"RCC Capabilities IE",				
	"RCCN Descriptor IE",				
	"Global Time IE",				
	"Omnibus Header IE",				
	"DA IE",					
	"Reserved 0x2c",				
	"Reserved 0x2d",				
	"Reserved 0x2e",				
	"Reserved 0x2f",				
	"Reserved 0x30",				
	"Reserved 0x31",				
	"Reserved 0x32",				
	"Reserved 0x33",				
	"Reserved 0x34",				
	"Reserved 0x35",				
	"Reserved 0x36",				
	"Reserved 0x37",				
	"Reserved 0x38",				
	"Reserved 0x39",				
	"Reserved 0x3a",				
	"Reserved 0x3b",				
	"Reserved 0x3c",				
	"Reserved 0x3d",				
	"Reserved 0x3e",				
	"Reserved 0x3f",				
	"Reserved 0x40",				
	"Reserved 0x41",				
	"Reserved 0x42",				
	"Reserved 0x43",				
	"Reserved 0x44",				
	"Reserved 0x45",				
	"Reserved 0x46",				
	"Reserved 0x47",				
	"Reserved 0x48",				
	"Reserved 0x49",				
	"Reserved 0x4a",				
	"Reserved 0x4b",				
	"Reserved 0x4c",				
	"Reserved 0x4d",				
	"Reserved 0x4e",				
	"Reserved 0x4f",				
	"Reserved 0x50",				
	"Reserved 0x51",				
	"Reserved 0x52",				
	"Reserved 0x53",				
	"Reserved 0x54",				
	"Reserved 0x55",				
	"Reserved 0x56",				
	"Reserved 0x57",				
	"Reserved 0x58",				
	"Reserved 0x59",				
	"Reserved 0x5a",				
	"Reserved 0x5b",				
	"Reserved 0x5c",				
	"Reserved 0x5d",				
	"Reserved 0x5e",				
	"Reserved 0x5f",				
	"Reserved 0x60",				
	"Reserved 0x61",				
	"Reserved 0x62",				
	"Reserved 0x63",				
	"Reserved 0x64",				
	"Reserved 0x65",				
	"Reserved 0x66",				
	"Reserved 0x67",				
	"Reserved 0x68",				
	"Reserved 0x69",				
	"Reserved 0x6a",				
	"Reserved 0x6b",				
	"Reserved 0x6c",				
	"Reserved 0x6d",				
	"Reserved 0x6e",				
	"Reserved 0x6f",				
	"Reserved 0x70",				
	"Reserved 0x71",				
	"Reserved 0x72",				
	"Reserved 0x73",				
	"Reserved 0x74",				
	"Reserved 0x75",				
	"Reserved 0x76",				
	"Reserved 0x77",				
	"Reserved 0x78",				
	"Reserved 0x79",				
	"Reserved 0x7a",				
	"Reserved 0x7b",				
	"Reserved 0x7c",				
	"Reserved 0x7d",				
	"Header Termination 1 IE",			
	"Header Termination 2 IE"			
};


static const char *p_ie_names[] = {
	"ESDU IE",			
	"MLME IE",			
	"Vendor Specific Nested IE",	
	"Multiplexed IE (802.15.9)",	
	"Omnibus Payload Group IE",	
	"IETF IE",			
	"Reserved 0x06",		
	"Reserved 0x07",		
	"Reserved 0x08",		
	"Reserved 0x09",		
	"Reserved 0x0a",		
	"Reserved 0x0b",		
	"Reserved 0x0c",		
	"Reserved 0x0d",		
	"Reserved 0x0e",		
	"List termination"		
};


static const char *p_mlme_short_names[] = {
	"Reserved for int format 0x0",			
	"Reserved for int format 0x1",			
	"Reserved for int format 0x2",			
	"Reserved for int format 0x3",			
	"Reserved for int format 0x4",			
	"Reserved for int format 0x5",			
	"Reserved for int format 0x6",			
	"Reserved for int format 0x7",			
	"Reserved for int format 0x8",			
	"Reserved for int format 0x9",			
	"Reserved for int format 0xa",			
	"Reserved for int format 0xb",			
	"Reserved for int format 0xc",			
	"Reserved for int format 0xd",			
	"Reserved for int format 0xe",			
	"Reserved for int format 0xf",			
	"Reserved 0x10",				
	"Reserved 0x11",				
	"Reserved 0x12",				
	"Reserved 0x13",				
	"Reserved 0x14",				
	"Reserved 0x15",				
	"Reserved 0x16",				
	"Reserved 0x17",				
	"Reserved 0x18",				
	"Reserved 0x19",				
	"TSCH Synchronization IE",			
	"TSCH Slotframe and Link IE",			
	"TSCH Timeslot IE",				
	"Hopping timing IE",				
	"Enhanced Beacon Filter IE",			
	"MAC Metrics IE",				
	"All MAC Metrics IE",				
	"Coexistence Specification IE",			
	"SUN Device Capabilities IE",			
	"SUN FSK Generic PHY IE",			
	"Mode Switch Parameter IE",			
	"PHY Parameter Change IE",			
	"O-QPSK PHY Mode IE",				
	"PCA Allocation IE",				
	"LECIM DSSS Operating Mode IE",			
	"LECIM FSK Operating Mode IE",			
	"Reserved 0x2a",				
	"TVWS PHY Operating Mode Description IE",	
	"TVWS Device Capabilities IE",			
	"TVWS Device Category IE",			
	"TVWS Device Identification IE",		
	"TVWS Device Location IE",			
	"TVWS Channel Information Query IE",		
	"TVWS Channel Information Source IE",		
	"CTM IE",					
	"Timestamp IE",					
	"Timestamp Difference IE",			
	"TMCTP Specification IE",			
	"RCC PHY Operating Mode IE",			
	"Reserved 0x37",				
	"Reserved 0x38",				
	"Reserved 0x39",				
	"Reserved 0x3a",				
	"Reserved 0x3b",				
	"Reserved 0x3c",				
	"Reserved 0x3d",				
	"Reserved 0x3e",				
	"Reserved 0x3f",				
	"Reserved 0x40",				
	"Reserved 0x41",				
	"Reserved 0x42",				
	"Reserved 0x43",				
	"Reserved 0x44",				
	"Reserved 0x45",				
	"Reserved 0x46",				
	"Reserved 0x47",				
	"Reserved 0x48",				
	"Reserved 0x49",				
	"Reserved 0x4a",				
	"Reserved 0x4b",				
	"Reserved 0x4c",				
	"Reserved 0x4d",				
	"Reserved 0x4e",				
	"Reserved 0x4f",				
	"Reserved 0x50",				
	"Reserved 0x51",				
	"Reserved 0x52",				
	"Reserved 0x53",				
	"Reserved 0x54",				
	"Reserved 0x55",				
	"Reserved 0x56",				
	"Reserved 0x57",				
	"Reserved 0x58",				
	"Reserved 0x59",				
	"Reserved 0x5a",				
	"Reserved 0x5b",				
	"Reserved 0x5c",				
	"Reserved 0x5d",				
	"Reserved 0x5e",				
	"Reserved 0x5f",				
	"Reserved 0x60",				
	"Reserved 0x61",				
	"Reserved 0x62",				
	"Reserved 0x63",				
	"Reserved 0x64",				
	"Reserved 0x65",				
	"Reserved 0x66",				
	"Reserved 0x67",				
	"Reserved 0x68",				
	"Reserved 0x69",				
	"Reserved 0x6a",				
	"Reserved 0x6b",				
	"Reserved 0x6c",				
	"Reserved 0x6d",				
	"Reserved 0x6e",				
	"Reserved 0x6f",				
	"Reserved 0x70",				
	"Reserved 0x71",				
	"Reserved 0x72",				
	"Reserved 0x73",				
	"Reserved 0x74",				
	"Reserved 0x75",				
	"Reserved 0x76",				
	"Reserved 0x77",				
	"Reserved 0x78",				
	"Reserved 0x79",				
	"Reserved 0x7a",				
	"Reserved 0x7b",				
	"Reserved 0x7c",				
	"Reserved 0x7d",				
	"Reserved 0x7e",				
	"Reserved 0x7f"					
};


static const char *p_mlme_long_names[] = {
	"Reserved 0x00",			
	"Reserved 0x01",			
	"Reserved 0x02",			
	"Reserved 0x03",			
	"Reserved 0x04",			
	"Reserved 0x05",			
	"Reserved 0x06",			
	"Reserved 0x07",			
	"Vendor Specific MLME Nested IE",	
	"Channel Hopping IE",			
	"Reserved 0x0a",			
	"Reserved 0x0b",			
	"Reserved 0x0c",			
	"Reserved 0x0d",			
	"Reserved 0x0e",			
	"Reserved 0x0f"				
};


static const char *mac_c_names[] = {
	"Reserved 0x00",				
	"Association Request command",			
	"Association Response command",			
	"Disassociation Notification command",		
	"Data Request command",				
	"PAN ID Conflict Notification command",		
	"Orphan Notification command",			
	"Beacon Request command",			
	"Coordinator realignment command",		
	"GTS request command",				
	"TRLE Management Request command",		
	"TRLE Management Response command",		
	"Reserved 0x0c",				
	"Reserved 0x0d",				
	"Reserved 0x0e",				
	"Reserved 0x0f",				
	"Reserved 0x10",				
	"Reserved 0x11",				
	"Reserved 0x12",				
	"DSME Association Request command",		
	"DSME Association Response command",		
	"DSME GTS Request command",			
	"DSME GTS Response command",			
	"DSME GTS Notify command",			
	"DSME Information Request command",		
	"DSME Information Response command",		
	"DSME Beacon Allocation Notification command",	
	"DSME Beacon Collision Notification command",	
	"DSME Link Report command",			
	"Reserved 0x1d",				
	"Reserved 0x1e",				
	"Reserved 0x1f",				
	"RIT Data Request command",			
	"DBS Request command",				
	"DBS Response command",				
	"RIT Data Response command",			
	"Vendor Specific command",			
	"Reserved 0x25",				
	"Reserved 0x26",				
	"Reserved 0x27",				
	"Reserved 0x28",				
	"Reserved 0x29",				
	"Reserved 0x2a",				
	"Reserved 0x2b",				
	"Reserved 0x2c",				
	"Reserved 0x2d",				
	"Reserved 0x2e",				
	"Reserved 0x2f"					
};


#define FC_FRAME_TYPE(fc)              ((fc) & 0x7)
#define FC_FRAME_VERSION(fc)           (((fc) >> 12) & 0x3)

#define FC_ADDRESSING_MODE_NONE         0x00
#define FC_ADDRESSING_MODE_RESERVED     0x01
#define FC_ADDRESSING_MODE_SHORT        0x02
#define FC_ADDRESSING_MODE_LONG         0x03


static unsigned short
ieee802_15_4_crc16(netdissect_options *ndo, const u_char *p,
		   u_int data_len)
{
	unsigned short crc;
	u_char x, y;

	crc = 0x0000; 

	while (data_len != 0){
		y = GET_U_1(p);
		p++;
		
		y = (((y & 0xaa) >> 1) | ((y & 0x55) << 1));
		y = (((y & 0xcc) >> 2) | ((y & 0x33) << 2));
		y = (((y & 0xf0) >> 4) | ((y & 0x0f) << 4));
		
		x = crc >> 8 ^ y;
		x ^= x >> 4;
		crc = ((unsigned short)(crc << 8)) ^
			((unsigned short)(x << 12)) ^
			((unsigned short)(x << 5)) ^
			((unsigned short)x);
		data_len--;
	}
	
	crc = (((crc & 0xaaaa) >> 1) | ((crc & 0x5555) << 1));
	crc = (((crc & 0xcccc) >> 2) | ((crc & 0x3333) << 2));
	crc = (((crc & 0xf0f0) >> 4) | ((crc & 0x0f0f) << 4));
	crc = (((crc & 0xff00) >> 8) | ((crc & 0x00ff) << 8));
	return crc;
}


static unsigned int
ieee802_15_4_reverse32(unsigned int x)
{
	x = ((x & 0x55555555) <<  1) | ((x >>  1) & 0x55555555);
	x = ((x & 0x33333333) <<  2) | ((x >>  2) & 0x33333333);
	x = ((x & 0x0F0F0F0F) <<  4) | ((x >>  4) & 0x0F0F0F0F);
	x = (x << 24) | ((x & 0xFF00) << 8) |
		((x >> 8) & 0xFF00) | (x >> 24);
	return x;
}


static unsigned int
ieee802_15_4_crc32(netdissect_options *ndo, const u_char *p,
		   u_int data_len)
{
	unsigned int crc, byte;
	int b;

	crc = 0x00000000; 

	while (data_len != 0){
		byte = GET_U_1(p);
		p++;
		
		byte = ieee802_15_4_reverse32(byte);
		
		for(b = 0; b <= 7; b++) {
		  if ((int) (crc ^ byte) < 0)
		    crc = (crc << 1) ^ 0x04C11DB7;
		  else
		    crc = crc << 1;
		  byte = byte << 1;
		}
		data_len--;
	}
	
	crc = ieee802_15_4_reverse32(crc);
	return crc;
}


static int
ieee802_15_4_addr_len(unsigned short addr_type)
{
	switch (addr_type) {
	case FC_ADDRESSING_MODE_NONE: 
		return 0;
	case FC_ADDRESSING_MODE_RESERVED: 
		return -1;
	case FC_ADDRESSING_MODE_SHORT: 
		return 2;
	case FC_ADDRESSING_MODE_LONG: 
		return 8;
	}
	return 0;
}


static void
ieee802_15_4_print_addr(netdissect_options *ndo, const u_char *p,
			int dst_addr_len)
{
	switch (dst_addr_len) {
	case 0:
		ND_PRINT("none");
		break;
	case 2:
		ND_PRINT("%04x", GET_LE_U_2(p));
		break;
	case 8:
		ND_PRINT("%s", GET_EUI64LE_STRING(p));
		break;
	}
}


static void
ieee802_15_4_print_superframe_specification(netdissect_options *ndo,
					    unsigned short ss)
{
	if (ndo->ndo_vflag < 1) {
		return;
	}
	ND_PRINT("\n\tBeacon order = %d, Superframe order = %d, ",
		 (ss & 0xf), ((ss >> 4) & 0xf));
	ND_PRINT("Final CAP Slot = %d",
		 ((ss >> 8) & 0xf));
	if (CHECK_BIT(ss, 12)) { ND_PRINT(", BLE enabled"); }
	if (CHECK_BIT(ss, 14)) { ND_PRINT(", PAN Coordinator"); }
	if (CHECK_BIT(ss, 15)) { ND_PRINT(", Association Permit"); }
}


static int
ieee802_15_4_print_gts_info(netdissect_options *ndo,
			    const u_char *p,
			    u_int data_len)
{
	unsigned char gts_spec, gts_cnt;
	u_int len;
	int i;

	gts_spec = GET_U_1(p);
	gts_cnt = gts_spec & 0x7;

	if (gts_cnt == 0) {
		if (ndo->ndo_vflag > 0) {
			ND_PRINT("\n\tGTS Descriptor Count = %d, ", gts_cnt);
		}
		return 1;
	}
	len = 1 + 1 + gts_cnt * 3;

	if (data_len < len) {
		ND_PRINT(" [ERROR: Truncated GTS Info List]");
		return -1;
	}
	if (ndo->ndo_vflag < 2) {
		return len;
	}
	ND_PRINT("GTS Descriptor Count = %d, ", gts_cnt);
	ND_PRINT("GTS Directions Mask = %02x, [ ",
		 GET_U_1(p + 1) & 0x7f);

	for(i = 0; i < gts_cnt; i++) {
		ND_PRINT("[ ");
		ieee802_15_4_print_addr(ndo, p + 2 + i * 3, 2);
		ND_PRINT(", Start slot = %d, Length = %d ] ",
			 GET_U_1(p + 2 + i * 3 + 1) & 0x0f,
			 (GET_U_1(p + 2 + i * 3 + 1) >> 4) & 0x0f);
	}
	ND_PRINT("]");
	return len;
}


static short
ieee802_15_4_print_pending_addresses(netdissect_options *ndo,
				     const u_char *p,
				     u_int data_len)
{
	unsigned char pas, s_cnt, e_cnt, len, i;

	pas = GET_U_1(p);
	s_cnt = pas & 0x7;
	e_cnt = (pas >> 4) & 0x7;
	len = 1 + s_cnt * 2 + e_cnt * 8;
	if (ndo->ndo_vflag > 0) {
		ND_PRINT("\n\tPending address list, "
			 "# short addresses = %d, # extended addresses = %d",
			 s_cnt, e_cnt);
	}
	if (data_len < len) {
		ND_PRINT(" [ERROR: Pending address list truncated]");
		return -1;
	}
	if (ndo->ndo_vflag < 2) {
		return len;
	}
	if (s_cnt != 0) {
		ND_PRINT(", Short address list = [ ");
		for(i = 0; i < s_cnt; i++) {
			ieee802_15_4_print_addr(ndo, p + 1 + i * 2, 2);
			ND_PRINT(" ");
		}
		ND_PRINT("]");
	}
	if (e_cnt != 0) {
		ND_PRINT(", Extended address list = [ ");
		for(i = 0; i < e_cnt; i++) {
			ieee802_15_4_print_addr(ndo, p + 1 + s_cnt * 2 +
						i * 8, 8);
			ND_PRINT(" ");
		}
		ND_PRINT("]");
	}
	return len;
}


static void
ieee802_15_4_print_header_ie(netdissect_options *ndo,
			     const u_char *p,
			     unsigned short ie_len,
			     int element_id)
{
	int i;

	switch (element_id) {
	case 0x00: 
		if (ie_len < 3) {
			ND_PRINT("[ERROR: Vendor OUI missing]");
		} else {
			ND_PRINT("OUI = 0x%02x%02x%02x, ", GET_U_1(p),
				 GET_U_1(p + 1), GET_U_1(p + 2));
			ND_PRINT("Data = ");
			for(i = 3; i < ie_len; i++) {
				ND_PRINT("%02x ", GET_U_1(p + i));
			}
		}
		break;
	case 0x1a: 
		if (ie_len < 4) {
			ND_PRINT("[ERROR: Truncated CSL IE]");
		} else {
			ND_PRINT("CSL Phase = %d, CSL Period = %d",
				 GET_LE_U_2(p), GET_LE_U_2(p + 2));
			if (ie_len >= 6) {
				ND_PRINT(", Rendezvous time = %d",
					 GET_LE_U_2(p + 4));
			}
			if (ie_len != 4 && ie_len != 6) {
				ND_PRINT(" [ERROR: CSL IE length wrong]");
			}
		}
		break;
	case 0x1b: 
		if (ie_len < 4) {
			ND_PRINT("[ERROR: Truncated RIT IE]");
		} else {
			ND_PRINT("Time to First Listen = %d, # of Repeat Listen = %d, Repeat Listen Interval = %d",
				 GET_U_1(p),
				 GET_U_1(p + 1),
				 GET_LE_U_2(p + 2));
		}
		break;
	case 0x1c: 
		
	case 0x21: 
		if (ie_len < 2) {
			ND_PRINT("[ERROR: Truncated DSME PAN IE]");
		} else {
			unsigned short ss, ptr, ulen;
			short len;
			int hopping_present;

			hopping_present = 0;

			ss = GET_LE_U_2(p);
			ieee802_15_4_print_superframe_specification(ndo, ss);
			if (ie_len < 3) {
				ND_PRINT("[ERROR: Truncated before pending addresses field]");
				break;
			}
			ptr = 2;
			len = ieee802_15_4_print_pending_addresses(ndo,
								   p + ptr,
								   ie_len -
								   ptr);
			if (len < 0) {
				break;
			}
			ptr += len;

			if (element_id == 0x21) {
				
				if (ie_len < ptr + 2) {
					ND_PRINT("[ERROR: Truncated before DSME Superframe Specification]");
					break;
				}
				ss = GET_LE_U_2(p + ptr);
				ptr += 2;
				ND_PRINT("Multi-superframe Order = %d", ss & 0xff);
				ND_PRINT(", %s", ((ss & 0x100) ?
						  "Channel hopping mode" :
						  "Channel adaptation mode"));
				if (ss & 0x400) {
					ND_PRINT(", CAP reduction enabled");
				}
				if (ss & 0x800) {
					ND_PRINT(", Deferred beacon enabled");
				}
				if (ss & 0x1000) {
					ND_PRINT(", Hopping Sequence Present");
					hopping_present = 1;
				}
			} else {
				if (ie_len < ptr + 1) {
					ND_PRINT("[ERROR: Truncated before DSME Superframe Specification]");
					break;
				}
				ss = GET_U_1(p + ptr);
				ptr++;
				ND_PRINT("Multi-superframe Order = %d",
					 ss & 0x0f);
				ND_PRINT(", %s", ((ss & 0x10) ?
						  "Channel hopping mode" :
						  "Channel adaptation mode"));
				if (ss & 0x40) {
					ND_PRINT(", CAP reduction enabled");
				}
				if (ss & 0x80) {
					ND_PRINT(", Deferred beacon enabled");
				}
			}
			if (ie_len < ptr + 8) {
				ND_PRINT(" [ERROR: Truncated before Time synchronization specification]");
				break;
			}
			ND_PRINT("Beacon timestamp = %" PRIu64 ", offset = %d",
				 GET_LE_U_6(p + ptr),
				 GET_LE_U_2(p + ptr + 6));
			ptr += 8;
			if (ie_len < ptr + 4) {
				ND_PRINT(" [ERROR: Truncated before Beacon Bitmap]");
				break;
			}

			ulen = GET_LE_U_2(p + ptr + 2);
			ND_PRINT("SD Index = %d, Bitmap len = %d, ",
				 GET_LE_U_2(p + ptr), ulen);
			ptr += 4;
			if (ie_len < ptr + ulen) {
				ND_PRINT(" [ERROR: Truncated in SD bitmap]");
				break;
			}
			ND_PRINT(" SD Bitmap = ");
			for(i = 0; i < ulen; i++) {
				ND_PRINT("%02x ", GET_U_1(p + ptr + i));
			}
			ptr += ulen;

			if (ie_len < ptr + 5) {
				ND_PRINT(" [ERROR: Truncated before Channel hopping specification]");
				break;
			}

			ulen = GET_LE_U_2(p + ptr + 4);
			ND_PRINT("Hopping Seq ID = %d, PAN Coordinator BSN = %d, "
				 "Channel offset = %d, Bitmap length = %d, ",
				 GET_U_1(p + ptr),
				 GET_U_1(p + ptr + 1),
				 GET_LE_U_2(p + ptr + 2),
				 ulen);
			ptr += 5;
			if (ie_len < ptr + ulen) {
				ND_PRINT(" [ERROR: Truncated in Channel offset bitmap]");
				break;
			}
			ND_PRINT(" Channel offset bitmap = ");
			for(i = 0; i < ulen; i++) {
				ND_PRINT("%02x ", GET_U_1(p + ptr + i));
			}
			ptr += ulen;
			if (hopping_present) {
				if (ie_len < ptr + 1) {
					ND_PRINT(" [ERROR: Truncated in Hopping Sequence length]");
					break;
				}
				ulen = GET_U_1(p + ptr);
				ptr++;
				ND_PRINT("Hopping Seq length = %d [ ", ulen);

				

				if (ie_len < ptr + ulen * 2) {
					ND_PRINT(" [ERROR: Truncated in Channel offset bitmap]");
					break;
				}
				for(i = 0; i < ulen; i++) {
					ND_PRINT("%02x ",
						 GET_LE_U_2(p + ptr + i * 2));
				}
				ND_PRINT("]");
				ptr += ulen * 2;
			}
		}
		break;
	case 0x1d: 
		if (ie_len != 4) {
			ND_PRINT("[ERROR: Length != 2]");
		} else {
			unsigned short r_time, w_u_interval;
			r_time = GET_LE_U_2(p);
			w_u_interval = GET_LE_U_2(p + 2);

			ND_PRINT("Rendezvous time = %d, Wake-up Interval = %d",
				 r_time, w_u_interval);
		}
		break;
	case 0x1e: 
		if (ie_len != 2) {
			ND_PRINT("[ERROR: Length != 2]");
		} else {
			unsigned short val;
			short timecorr;

			val = GET_LE_U_2(p);
			if (val & 0x8000) { ND_PRINT("Negative "); }
			val &= 0xfff;
			val <<= 4;
			timecorr = val;
			timecorr >>= 4;

			ND_PRINT("Ack time correction = %d, ", timecorr);
		}
		break;
	case 0x22: 
		
	case 0x23: 
		
	case 0x24: 
		
	case 0x25: 
		
	case 0x26: 
		
	case 0x27: 
		
	case 0x28: 
		
	case 0x29: 
		
	case 0x2b: 
		
	default:
		ND_PRINT("IE Data = ");
		for(i = 0; i < ie_len; i++) {
			ND_PRINT("%02x ", GET_U_1(p + i));
		}
		break;
	}
}


static int
ieee802_15_4_print_header_ie_list(netdissect_options *ndo,
				  const u_char *p,
				  u_int caplen,
				  int *payload_ie_present)
{
	int len, ie, element_id, i;
	unsigned short ie_len;

	*payload_ie_present = 0;
	len = 0;
	do {
		if (caplen < 2) {
			ND_PRINT("[ERROR: Truncated header IE]");
			return -1;
		}
		
		ie = GET_LE_U_2(p);
		if (CHECK_BIT(ie, 15)) {
			ND_PRINT("[ERROR: Header IE with type 1] ");
		}
		
		ie_len = ie & 0x7f;
		element_id = (ie >> 7) & 0xff;
		if (element_id > 127) {
			ND_PRINT("Reserved Element ID %02x, length = %d ",
				 element_id, ie_len);
		} else {
			if (ie_len == 0) {
				ND_PRINT("\n\t%s [", h_ie_names[element_id]);
			} else {
				ND_PRINT("\n\t%s [ length = %d, ",
					 h_ie_names[element_id], ie_len);
			}
		}
		if (caplen < 2U + ie_len) {
			ND_PRINT("[ERROR: Truncated IE data]");
			return -1;
		}
		
		p += 2;

		
		if (ndo->ndo_vflag > 3 && ie_len != 0) {
			ieee802_15_4_print_header_ie(ndo, p,
						     ie_len, element_id);
		} else {
			if (ie_len != 0) {
				ND_PRINT("IE Data = ");
				for(i = 0; i < ie_len; i++) {
					ND_PRINT("%02x ", GET_U_1(p + i));
				}
			}
		}
		ND_PRINT("] ");
		len += 2 + ie_len;
		p += ie_len;
		caplen -= 2 + ie_len;
		if (element_id == 0x7e) {
			*payload_ie_present = 1;
			break;
		}
		if (element_id == 0x7f) {
			break;
		}
	} while (caplen != 0);
	return len;
}


static void
ieee802_15_4_print_mlme_ie(netdissect_options *ndo,
			   const u_char *p,
			   unsigned short sub_ie_len,
			   int sub_id)
{
	int i, j;
	unsigned short len;

	
	switch (sub_id) {
	case 0x08: 
		if (sub_ie_len < 3) {
			ND_PRINT("[ERROR: Vendor OUI missing]");
		} else {
			ND_PRINT("OUI = 0x%02x%02x%02x, ",
				 GET_U_1(p),
				 GET_U_1(p + 1),
				 GET_U_1(p + 2));
			ND_PRINT("Data = ");
			for(i = 3; i < sub_ie_len; i++) {
				ND_PRINT("%02x ", GET_U_1(p + i));
			}
		}
		break;
	case 0x09: 
		if (sub_ie_len < 1) {
			ND_PRINT("[ERROR: Hopping sequence ID missing]");
		} else if (sub_ie_len == 1) {
			ND_PRINT("Hopping Sequence ID = %d", GET_U_1(p));
			p++;
			sub_ie_len--;
		} else {
			unsigned short channel_page, number_of_channels;

			ND_PRINT("Hopping Sequence ID = %d", GET_U_1(p));
			p++;
			sub_ie_len--;
			if (sub_ie_len < 7) {
				ND_PRINT("[ERROR: IE truncated]");
				break;
			}
			channel_page = GET_U_1(p);
			number_of_channels = GET_LE_U_2(p + 1);
			ND_PRINT("Channel Page = %d, Number of Channels = %d, ",
				 channel_page, number_of_channels);
			ND_PRINT("Phy Configuration = 0x%08x, ",
				 GET_LE_U_4(p + 3));
			p += 7;
			sub_ie_len -= 7;
			if (channel_page == 9 || channel_page == 10) {
				len = (number_of_channels + 7) / 8;
				if (sub_ie_len < len) {
					ND_PRINT("[ERROR: IE truncated]");
					break;
				}
				ND_PRINT("Extended bitmap = 0x");
				for(i = 0; i < len; i++) {
					ND_PRINT("%02x", GET_U_1(p + i));
				}
				ND_PRINT(", ");
				p += len;
				sub_ie_len -= len;
			}
			if (sub_ie_len < 2) {
				ND_PRINT("[ERROR: IE truncated]");
				break;
			}
			len = GET_LE_U_2(p);
			p += 2;
			sub_ie_len -= 2;
			ND_PRINT("Hopping Seq length = %d [ ", len);

			if (sub_ie_len < len * 2) {
				ND_PRINT(" [ERROR: IE truncated]");
				break;
			}
			for(i = 0; i < len; i++) {
				ND_PRINT("%02x ", GET_LE_U_2(p + i * 2));
			}
			ND_PRINT("]");
			p += len * 2;
			sub_ie_len -= len * 2;
			if (sub_ie_len < 2) {
				ND_PRINT("[ERROR: IE truncated]");
				break;
			}
			ND_PRINT("Current hop = %d", GET_LE_U_2(p));
		}

		break;
	case 0x1a: 
		if (sub_ie_len < 6) {
			ND_PRINT("[ERROR: Length != 6]");
		}
		ND_PRINT("ASN = %010" PRIx64 ", Join Metric = %d ",
			 GET_LE_U_5(p), GET_U_1(p + 5));
		break;
	case 0x1b: 
		{
			int sf_num, off, links, opts;

			if (sub_ie_len < 1) {
				ND_PRINT("[ERROR: Truncated IE]");
				break;
			}
			sf_num = GET_U_1(p);
			ND_PRINT("Slotframes = %d ", sf_num);
			off = 1;
			for(i = 0; i < sf_num; i++) {
				if (sub_ie_len < off + 4) {
					ND_PRINT("[ERROR: Truncated IE before slotframes]");
					break;
				}
				links = GET_U_1(p + off + 3);
				ND_PRINT("\n\t\t\t[ Handle %d, size = %d, links = %d ",
					 GET_U_1(p + off),
					 GET_LE_U_2(p + off + 1),
					 links);
				off += 4;
				for(j = 0; j < links; j++) {
					if (sub_ie_len < off + 5) {
						ND_PRINT("[ERROR: Truncated IE links]");
						break;
					}
					opts = GET_U_1(p + off + 4);
					ND_PRINT("\n\t\t\t\t[ Timeslot =  %d, Offset = %d, Options = ",
						 GET_LE_U_2(p + off),
						 GET_LE_U_2(p + off + 2));
					if (opts & 0x1) { ND_PRINT("TX "); }
					if (opts & 0x2) { ND_PRINT("RX "); }
					if (opts & 0x4) { ND_PRINT("Shared "); }
					if (opts & 0x8) {
						ND_PRINT("Timekeeping ");
					}
					if (opts & 0x10) {
						ND_PRINT("Priority ");
					}
					off += 5;
					ND_PRINT("] ");
				}
				ND_PRINT("] ");
			}
		}
		break;
	case 0x1c: 
		if (sub_ie_len == 1) {
			ND_PRINT("Time slot ID = %d ", GET_U_1(p));
		} else if (sub_ie_len == 25) {
			ND_PRINT("Time slot ID = %d, CCA Offset = %d, CCA = %d, TX Offset = %d, RX Offset = %d, RX Ack Delay = %d, TX Ack Delay = %d, RX Wait = %d, Ack Wait = %d, RX TX = %d, Max Ack = %d, Max TX = %d, Time slot Length = %d ",
				 GET_U_1(p),
				 GET_LE_U_2(p + 1),
				 GET_LE_U_2(p + 3),
				 GET_LE_U_2(p + 5),
				 GET_LE_U_2(p + 7),
				 GET_LE_U_2(p + 9),
				 GET_LE_U_2(p + 11),
				 GET_LE_U_2(p + 13),
				 GET_LE_U_2(p + 15),
				 GET_LE_U_2(p + 17),
				 GET_LE_U_2(p + 19),
				 GET_LE_U_2(p + 21),
				 GET_LE_U_2(p + 23));
		} else if (sub_ie_len == 27) {
			ND_PRINT("Time slot ID = %d, CCA Offset = %d, CCA = %d, TX Offset = %d, RX Offset = %d, RX Ack Delay = %d, TX Ack Delay = %d, RX Wait = %d, Ack Wait = %d, RX TX = %d, Max Ack = %d, Max TX = %d, Time slot Length = %d ",
				 GET_U_1(p),
				 GET_LE_U_2(p + 1),
				 GET_LE_U_2(p + 3),
				 GET_LE_U_2(p + 5),
				 GET_LE_U_2(p + 7),
				 GET_LE_U_2(p + 9),
				 GET_LE_U_2(p + 11),
				 GET_LE_U_2(p + 13),
				 GET_LE_U_2(p + 15),
				 GET_LE_U_2(p + 17),
				 GET_LE_U_2(p + 19),
				 GET_LE_U_3(p + 21),
				 GET_LE_U_3(p + 24));
		} else {
			ND_PRINT("[ERROR: Length not 1, 25, or 27]");
			ND_PRINT("\n\t\t\tIE Data = ");
			for(i = 0; i < sub_ie_len; i++) {
				ND_PRINT("%02x ", GET_U_1(p + i));
			}
		}
		break;
	case 0x1d: 
		
	case 0x1e: 
		
	case 0x1f: 
		
	case 0x20: 
		
	case 0x21: 
		
	case 0x22: 
		
	case 0x23: 
		
	case 0x24: 
		
	case 0x25: 
		
	case 0x26: 
		
	case 0x27: 
		
	case 0x28: 
		
	case 0x29: 
		
	case 0x2b: 
		
	case 0x2c: 
		
	case 0x2d: 
		
	case 0x2e: 
		
	case 0x2f: 
		
	case 0x30: 
		
	case 0x31: 
		
	case 0x32: 
		
	case 0x33: 
		
	case 0x34: 
		
	case 0x35: 
		
	case 0x36: 
		
	default:
		ND_PRINT("IE Data = ");
		for(i = 0; i < sub_ie_len; i++) {
			ND_PRINT("%02x ", GET_U_1(p + i));
		}
		break;
	}
}


static void
ieee802_15_4_print_mlme_ie_list(netdissect_options *ndo,
				const u_char *p,
				unsigned short ie_len)
{
	int ie, sub_id, i, type;
	unsigned short sub_ie_len;

	do {
		if (ie_len < 2) {
			ND_PRINT("[ERROR: Truncated MLME IE]");
			return;
		}
		
		ie = GET_LE_U_2(p);
		type = CHECK_BIT(ie, 15);
		if (type) {
			
			sub_ie_len = ie & 0x3ff;
			sub_id = (ie >> 11) & 0x0f;
		} else {
			sub_ie_len = ie & 0xff;
			sub_id = (ie >> 8) & 0x7f;
		}

		
		p += 2;

		if (type == 0) {
			ND_PRINT("\n\t\t%s [ length = %d, ",
				 p_mlme_short_names[sub_id], sub_ie_len);
		} else {
			ND_PRINT("\n\t\t%s [ length = %d, ",
				 p_mlme_long_names[sub_id], sub_ie_len);
		}

		if (ie_len < 2 + sub_ie_len) {
			ND_PRINT("[ERROR: Truncated IE data]");
			return;
		}
		if (sub_ie_len != 0) {
			if (ndo->ndo_vflag > 3) {
				ieee802_15_4_print_mlme_ie(ndo, p, sub_ie_len, sub_id);
			} else if (ndo->ndo_vflag > 2) {
				ND_PRINT("IE Data = ");
				for(i = 0; i < sub_ie_len; i++) {
					ND_PRINT("%02x ", GET_U_1(p + i));
				}
			}
		}
		ND_PRINT("] ");
		p += sub_ie_len;
		ie_len -= 2 + sub_ie_len;
	} while (ie_len != 0);
}


static void
ieee802_15_4_print_mpx_ie(netdissect_options *ndo,
			  const u_char *p,
			  unsigned short ie_len)
{
	int transfer_type, tid;
	int fragment_number, data_start;
	int i;

	data_start = 0;
	if (ie_len < 1) {
		ND_PRINT("[ERROR: Transaction control byte missing]");
		return;
	}

	transfer_type = GET_U_1(p) & 0x7;
	tid = GET_U_1(p) >> 3;
	switch (transfer_type) {
	case 0x00: 
	case 0x01: 
		ND_PRINT("Type = Full upper layer fragment%s, ",
			 (transfer_type == 0x01 ?
			  " with small Multiplex ID" : ""));
		if (transfer_type == 0x00) {
			if (ie_len < 3) {
				ND_PRINT("[ERROR: Multiplex ID missing]");
				return;
			}
			data_start = 3;
			ND_PRINT("tid = 0x%02x, Multiplex ID = 0x%04x, ",
				 tid, GET_LE_U_2(p + 1));
		} else {
			data_start = 1;
			ND_PRINT("Multiplex ID = 0x%04x, ", tid);
		}
		break;
	case 0x02: 
	case 0x04: 
		if (ie_len < 2) {
			ND_PRINT("[ERROR: fragment number missing]");
			return;
		}

		fragment_number = GET_U_1(p + 1);
		ND_PRINT("Type = %s, tid = 0x%02x, fragment = 0x%02x, ",
			 (transfer_type == 0x02 ?
			  (fragment_number == 0 ?
			   "First fragment" : "Middle fragment") :
			  "Last fragment"), tid,
			 fragment_number);
		data_start = 2;
		if (fragment_number == 0) {
			int total_size, multiplex_id;

			if (ie_len < 6) {
				ND_PRINT("[ERROR: Total upper layer size or multiplex ID missing]");
				return;
			}
			total_size = GET_LE_U_2(p + 2);
			multiplex_id = GET_LE_U_2(p + 4);
			ND_PRINT("Total upper layer size = 0x%04x, Multiplex ID = 0x%04x, ",
				 total_size, multiplex_id);
			data_start = 6;
		}
		break;
	case 0x06: 
		if (ie_len == 1) {
			ND_PRINT("Type = Abort, tid = 0x%02x, no max size given",
				 tid);
		} else if (ie_len == 3) {
			ND_PRINT("Type = Abort, tid = 0x%02x, max size = 0x%04x",
				 tid, GET_LE_U_2(p + 1));
		} else {
			ND_PRINT("Type = Abort, tid = 0x%02x, invalid length = %d (not 1 or 3)",
				 tid, ie_len);
			ND_PRINT("Abort data = ");
			for(i = 1; i < ie_len; i++) {
				ND_PRINT("%02x ", GET_U_1(p + i));
			}
		}
		return;
	case 0x03: 
	case 0x05: 
	case 0x07: 
		ND_PRINT("Type = %d (Reserved), tid = 0x%02x, ",
			 transfer_type, tid);
		data_start = 1;
		break;
	}

	ND_PRINT("Upper layer data = ");
	for(i = data_start; i < ie_len; i++) {
		ND_PRINT("%02x ", GET_U_1(p + i));
	}
}


static int
ieee802_15_4_print_payload_ie_list(netdissect_options *ndo,
				   const u_char *p,
				   u_int caplen)
{
	int len, ie, group_id, i;
	unsigned short ie_len;

	len = 0;
	do {
		if (caplen < 2) {
			ND_PRINT("[ERROR: Truncated header IE]");
			return -1;
		}
		
		ie = GET_LE_U_2(p);
		if ((CHECK_BIT(ie, 15)) == 0) {
			ND_PRINT("[ERROR: Payload IE with type 0] ");
		}
		ie_len = ie & 0x3ff;
		group_id = (ie >> 11) & 0x0f;

		
		p += 2;
		if (ie_len == 0) {
			ND_PRINT("\n\t%s [", p_ie_names[group_id]);
		} else {
			ND_PRINT("\n\t%s [ length = %d, ",
				 p_ie_names[group_id], ie_len);
		}
		if (caplen < 2U + ie_len) {
			ND_PRINT("[ERROR: Truncated IE data]");
			return -1;
		}
		if (ndo->ndo_vflag > 3 && ie_len != 0) {
			switch (group_id) {
			case 0x1: 
				ieee802_15_4_print_mlme_ie_list(ndo, p, ie_len);
				break;
			case 0x2: 
				if (ie_len < 3) {
					ND_PRINT("[ERROR: Vendor OUI missing]");
				} else {
					ND_PRINT("OUI = 0x%02x%02x%02x, ",
						 GET_U_1(p),
						 GET_U_1(p + 1),
						 GET_U_1(p + 2));
					ND_PRINT("Data = ");
					for(i = 3; i < ie_len; i++) {
						ND_PRINT("%02x ",
							 GET_U_1(p + i));
					}
				}
				break;
			case 0x3: 
				ieee802_15_4_print_mpx_ie(ndo, p, ie_len);
				break;
			case 0x5: 
				if (ie_len < 1) {
					ND_PRINT("[ERROR: Subtype ID missing]");
				} else {
					ND_PRINT("Subtype ID = 0x%02x, Subtype content = ",
						 GET_U_1(p));
					for(i = 1; i < ie_len; i++) {
						ND_PRINT("%02x ",
							 GET_U_1(p + i));
					}
				}
				break;
			default:
				ND_PRINT("IE Data = ");
				for(i = 0; i < ie_len; i++) {
					ND_PRINT("%02x ", GET_U_1(p + i));
				}
				break;
			}
		} else {
			if (ie_len != 0) {
				ND_PRINT("IE Data = ");
				for(i = 0; i < ie_len; i++) {
					ND_PRINT("%02x ", GET_U_1(p + i));
				}
			}
		}
		ND_PRINT("]\n\t");
		len += 2 + ie_len;
		p += ie_len;
		caplen -= 2 + ie_len;
		if (group_id == 0xf) {
			break;
		}
	} while (caplen != 0);
	return len;
}


static int
ieee802_15_4_print_aux_sec_header(netdissect_options *ndo,
				  const u_char *p,
				  u_int caplen,
				  int *security_level)
{
	int sc, key_id_mode, len;

	if (caplen < 1) {
		ND_PRINT("[ERROR: Truncated before Aux Security Header]");
		return -1;
	}
	sc = GET_U_1(p);
	len = 1;
	*security_level = sc & 0x7;
	key_id_mode = (sc >> 3) & 0x3;

	caplen -= 1;
	p += 1;

	if (ndo->ndo_vflag > 0) {
		ND_PRINT("\n\tSecurity Level %d, Key Id Mode %d, ",
			 *security_level, key_id_mode);
	}
	if ((CHECK_BIT(sc, 5)) == 0) {
		if (caplen < 4) {
			ND_PRINT("[ERROR: Truncated before Frame Counter]");
			return -1;
		}
		if (ndo->ndo_vflag > 1) {
			ND_PRINT("Frame Counter 0x%08x ",
				 GET_LE_U_4(p));
		}
		p += 4;
		caplen -= 4;
		len += 4;
	}
	switch (key_id_mode) {
	case 0x00: 
		if (ndo->ndo_vflag > 1) {
			ND_PRINT("Implicit");
		}
		return len;
	case 0x01: 
		break;
	case 0x02: 
		if (caplen < 4) {
			ND_PRINT("[ERROR: Truncated before Key Source]");
			return -1;
		}
		if (ndo->ndo_vflag > 1) {
			ND_PRINT("KeySource 0x%04x:%0x4x, ",
				 GET_LE_U_2(p), GET_LE_U_2(p + 2));
		}
		p += 4;
		caplen -= 4;
		len += 4;
		break;
	case 0x03: 
		if (caplen < 8) {
			ND_PRINT("[ERROR: Truncated before Key Source]");
			return -1;
		}
		if (ndo->ndo_vflag > 1) {
			ND_PRINT("KeySource %s, ", GET_EUI64LE_STRING(p));
		}
		p += 4;
		caplen -= 4;
		len += 4;
		break;
	}
	if (caplen < 1) {
		ND_PRINT("[ERROR: Truncated before Key Index]");
		return -1;
	}
	if (ndo->ndo_vflag > 1) {
		ND_PRINT("KeyIndex 0x%02x, ", GET_U_1(p));
	}
	caplen -= 1;
	p += 1;
	len += 1;
	return len;
}


static int
ieee802_15_4_print_command_data(netdissect_options *ndo,
				unsigned char command_id,
				const u_char *p,
				u_int caplen)
{
	u_int i;

	switch (command_id) {
	case 0x01: 
		if (caplen != 1) {
			ND_PRINT("Invalid Association request command length");
			return -1;
		} else {
			unsigned char cap_info;
			cap_info = GET_U_1(p);
			ND_PRINT("%s%s%s%s%s%s",
				 ((cap_info & 0x02) ?
				  "FFD, " : "RFD, "),
				 ((cap_info & 0x04) ?
				  "AC powered, " : ""),
				 ((cap_info & 0x08) ?
				  "Receiver on when idle, " : ""),
				 ((cap_info & 0x10) ?
				  "Fast association, " : ""),
				 ((cap_info & 0x40) ?
				  "Security supported, " : ""),
				 ((cap_info & 0x80) ?
				  "Allocate address, " : ""));
			return caplen;
		}
		
	case 0x02: 
		if (caplen != 3) {
			ND_PRINT("Invalid Association response command length");
			return -1;
		} else {
			ND_PRINT("Short address = ");
			ieee802_15_4_print_addr(ndo, p, 2);
			switch (GET_U_1(p + 2)) {
			case 0x00:
				ND_PRINT(", Association successful");
				break;
			case 0x01:
				ND_PRINT(", PAN at capacity");
				break;
			case 0x02:
				ND_PRINT(", PAN access denied");
				break;
			case 0x03:
				ND_PRINT(", Hooping sequence offset duplication");
				break;
			case 0x80:
				ND_PRINT(", Fast association successful");
				break;
			default:
				ND_PRINT(", Status = 0x%02x",
					 GET_U_1(p + 2));
				break;
			}
			return caplen;
		}
		
	case 0x03: 
		if (caplen != 1) {
			ND_PRINT("Invalid Disassociation Notification command length");
			return -1;
		} else {
			switch (GET_U_1(p)) {
			case 0x00:
				ND_PRINT("Reserved");
				break;
			case 0x01:
				ND_PRINT("Reason = The coordinator wishes the device to leave PAN");
				break;
			case 0x02:
				ND_PRINT("Reason = The device wishes to leave the PAN");
				break;
			default:
				ND_PRINT("Reason = 0x%02x", GET_U_1(p + 2));
				break;
			}
			return caplen;
		}

		
	case 0x04: 
	case 0x05: 
	case 0x06: 
	case 0x07: 
		
		return 0;
	case 0x08: 
		if (caplen < 7 || caplen > 8) {
			ND_PRINT("Invalid Coordinator Realignment command length");
			return -1;
		} else {
			unsigned short channel, page;

			ND_PRINT("Pan ID = 0x%04x, Coordinator short address = ",
				 GET_LE_U_2(p));
			ieee802_15_4_print_addr(ndo, p + 2, 2);
			channel = GET_U_1(p + 4);

			if (caplen == 8) {
				page = GET_U_1(p + 7);
			} else {
				page = 0x80;
			}
			if (CHECK_BIT(page, 7)) {
				
				channel |= (page & 0x7f) << 8;
				ND_PRINT(", Channel Number = %d", channel);
			} else {
				ND_PRINT(", Channel Number = %d, page = %d",
					 channel, page);
			}
			ND_PRINT(", Short address = ");
			ieee802_15_4_print_addr(ndo, p + 5, 2);
			return caplen;
		}
		
	case 0x09: 
		if (caplen != 1) {
			ND_PRINT("Invalid GTS Request command length");
			return -1;
		} else {
			unsigned char gts;

			gts = GET_U_1(p);
			ND_PRINT("GTS Length = %d, %s, %s",
				 gts & 0xf,
				 (CHECK_BIT(gts, 4) ?
				  "Receive-only GTS" : "Transmit-only GTS"),
				 (CHECK_BIT(gts, 5) ?
				  "GTS allocation" : "GTS deallocations"));
			return caplen;
		}
		
	case 0x13: 
		
	case 0x14: 
		
	case 0x15: 
		
	case 0x16: 
		
	case 0x17: 
		
	case 0x18: 
		
	case 0x19: 
		
	case 0x1a: 
		
	case 0x1b: 
		
	case 0x1c: 
		
	case 0x20: 
		
	case 0x21: 
		
	case 0x22: 
		
	case 0x23: 
		
	case 0x24: 
		
	case 0x0a: 
		
	case 0x0b: 
		
	default:
		ND_PRINT("Command Data = ");
		for(i = 0; i < caplen; i++) {
			ND_PRINT("%02x ", GET_U_1(p + i));
		}
		break;
	}
	return 0;
}


static u_int
ieee802_15_4_std_frames(netdissect_options *ndo,
			const u_char *p, u_int caplen,
			unsigned short fc)
{
	int len, frame_version, pan_id_comp;
	int frame_type;
	int src_pan, dst_pan, src_addr_len, dst_addr_len;
	int security_level;
	u_int miclen = 0;
	int payload_ie_present;
	unsigned char seq;
	unsigned int fcs, crc_check;
	const u_char *mic_start = NULL;

	payload_ie_present = 0;

	crc_check = 0;
	
	if (caplen < 4) {
		
		fcs = 0;
	} else {
		
		fcs = GET_LE_U_4(p + caplen - 4);
		crc_check = ieee802_15_4_crc32(ndo, p, caplen - 4);
		if (crc_check == fcs) {
			
			caplen -= 4;
		} else {
			
			fcs = GET_LE_U_2(p + caplen - 2);
			crc_check = ieee802_15_4_crc16(ndo, p, caplen - 2);
			if (crc_check == fcs) {
				
				caplen -= 2;
			} else {
				
			}
		}
	}

	
	frame_version = FC_FRAME_VERSION(fc);
	frame_type = FC_FRAME_TYPE(fc);
	ND_PRINT("v%d ", frame_version);

	if (ndo->ndo_vflag > 2) {
		if (CHECK_BIT(fc, 3)) { ND_PRINT("Security Enabled, "); }
		if (CHECK_BIT(fc, 4)) { ND_PRINT("Frame Pending, "); }
		if (CHECK_BIT(fc, 5)) { ND_PRINT("AR, "); }
		if (CHECK_BIT(fc, 6)) { ND_PRINT("PAN ID Compression, "); }
		if (CHECK_BIT(fc, 8)) { ND_PRINT("Sequence Number Suppression, "); }
		if (CHECK_BIT(fc, 9)) { ND_PRINT("IE present, "); }
	}

	
	if (CHECK_BIT(fc, 8)) {
		
		if (frame_version < 2) {
			
			ND_PRINT("[ERROR: Sequence number suppressed on frames where version < 2]");
		}
		if (ndo->ndo_vflag)
			ND_PRINT("seq suppressed ");
		if (caplen < 2) {
			nd_print_trunc(ndo);
			return 0;
		}
		p += 2;
		caplen -= 2;
	} else {
		seq = GET_U_1(p + 2);
		if (ndo->ndo_vflag)
			ND_PRINT("seq %02x ", seq);
		if (caplen < 3) {
			nd_print_trunc(ndo);
			return 0;
		}
		p += 3;
		caplen -= 3;
	}

	
	dst_addr_len = ieee802_15_4_addr_len((fc >> 10) & 0x3);
	src_addr_len = ieee802_15_4_addr_len((fc >> 14) & 0x3);
	if (src_addr_len < 0) {
		ND_PRINT("[ERROR: Invalid src address mode]");
		return 0;
	}
	if (dst_addr_len < 0) {
		ND_PRINT("[ERROR: Invalid dst address mode]");
		return 0;
	}
	src_pan = 0;
	dst_pan = 0;
	pan_id_comp = CHECK_BIT(fc, 6);

	

	
	if (frame_version < 2) {
		if (pan_id_comp) {
			src_pan = 0;
			dst_pan = 1;
			if (dst_addr_len <= 0 || src_addr_len <= 0) {
				
				ND_PRINT("[ERROR: PAN ID Compression != 0, and only one address with frame version < 2]");
			}
		} else {
			src_pan = 1;
			dst_pan = 1;
		}
		if (dst_addr_len <= 0) {
			dst_pan = 0;
		}
		if (src_addr_len <= 0) {
			src_pan = 0;
		}
	} else {
		
		if (pan_id_comp) {
			src_pan = 0;
			dst_pan = 1;
		} else {
			src_pan = 1;
			dst_pan = 1;
		}
		if (dst_addr_len <= 0) {
			dst_pan = 0;
		}
		if (src_addr_len <= 0) {
			src_pan = 0;
		}
		if (pan_id_comp) {
			if (src_addr_len == 0 &&
			    dst_addr_len == 0) {
				
				dst_pan = 1;
			} else if ((src_addr_len == 0 &&
				    dst_addr_len > 0) ||
				   (src_addr_len > 0 &&
				    dst_addr_len == 0)) {
				
				dst_pan = 0;
				src_pan = 0;
			} else if (src_addr_len == 8 &&
				   dst_addr_len == 8) {
				
				dst_pan = 0;
				src_pan = 0;
			}
		} else {
			
			if (src_addr_len == 8 &&
			    dst_addr_len == 8) {
				
				dst_pan = 1;
				src_pan = 0;
			}
#ifdef BROKEN_6TISCH_PAN_ID_COMPRESSION
			if (src_addr_len == 8 &&
			    dst_addr_len == 2) {
				
				src_pan = 0;
			}
#endif 
		}
	}

	
	if (dst_pan) {
		if (caplen < 2) {
			ND_PRINT("[ERROR: Truncated before dst_pan]");
			return 0;
		}
		ND_PRINT("%04x:", GET_LE_U_2(p));
		p += 2;
		caplen -= 2;
	} else {
		ND_PRINT("-:");
	}
	if (caplen < (u_int) dst_addr_len) {
		ND_PRINT("[ERROR: Truncated before dst_addr]");
		return 0;
	}
	ieee802_15_4_print_addr(ndo, p, dst_addr_len);
	p += dst_addr_len;
	caplen -= dst_addr_len;

	ND_PRINT(" < ");

	
	if (src_pan) {
		if (caplen < 2) {
			ND_PRINT("[ERROR: Truncated before dst_pan]");
			return 0;
		}
		ND_PRINT("%04x:", GET_LE_U_2(p));
		p += 2;
		caplen -= 2;
	} else {
		ND_PRINT("-:");
	}
	if (caplen < (u_int) src_addr_len) {
		ND_PRINT("[ERROR: Truncated before dst_addr]");
		return 0;
	}
	ieee802_15_4_print_addr(ndo, p, src_addr_len);
	ND_PRINT(" ");
	p += src_addr_len;
	caplen -= src_addr_len;
	if (CHECK_BIT(fc, 3)) {
		
		len = ieee802_15_4_print_aux_sec_header(ndo, p, caplen,
							&security_level);
		if (len < 0) {
			return 0;
		}
		ND_TCHECK_LEN(p, len);
		p += len;
		caplen -= len;
	} else {
		security_level = 0;
	}

	switch (security_level) {
	case 0: 
	case 4:
		miclen = 0;
		break;
	case 1: 
	case 5:
		miclen = 4;
		break;
	case 2: 
	case 6:
		miclen = 8;
		break;
	case 3: 
	case 7:
		miclen = 16;
		break;
	}

	
	if (miclen != 0) {
		if (caplen < miclen) {
			ND_PRINT("[ERROR: Truncated before MIC]");
			return 0;
		}
		caplen -= miclen;
		mic_start = p + caplen;
	}

	
	if (CHECK_BIT(fc, 9)) {
		
		len = ieee802_15_4_print_header_ie_list(ndo, p, caplen,
							&payload_ie_present);
		if (len < 0) {
			return 0;
		}
		p += len;
		caplen -= len;
	}

	if (payload_ie_present) {
		if (security_level >= 4) {
			ND_PRINT("Payload IEs present, but encrypted, cannot print ");
		} else {
			len = ieee802_15_4_print_payload_ie_list(ndo, p, caplen);
			if (len < 0) {
				return 0;
			}
			p += len;
			caplen -= len;
		}
	}

	
	if (ndo->ndo_vflag > 2 && miclen != 0) {
		ND_PRINT("\n\tMIC ");

		for (u_int micoffset = 0; micoffset < miclen; micoffset++) {
			ND_PRINT("%02x", GET_U_1(mic_start + micoffset));
		}
		ND_PRINT(" ");
	}

	
	if (ndo->ndo_vflag > 2) {
		if (crc_check == fcs) {
			ND_PRINT("FCS %x ", fcs);
		} else {
			ND_PRINT("wrong FCS %x vs %x (assume no FCS stored) ",
				 fcs, crc_check);
		}
	}

	
	switch (frame_type) {
	case 0x00: 
		if (frame_version < 2) {
			if (caplen < 2) {
				ND_PRINT("[ERROR: Truncated before beacon information]");
				break;
			} else {
				unsigned short ss;

				ss = GET_LE_U_2(p);
				ieee802_15_4_print_superframe_specification(ndo, ss);
				p += 2;
				caplen -= 2;

				
				if (caplen < 1) {
					ND_PRINT("[ERROR: Truncated before GTS info]");
					break;
				}

				len = ieee802_15_4_print_gts_info(ndo, p, caplen);
				if (len < 0) {
					break;
				}

				p += len;
				caplen -= len;

				
				if (caplen < 1) {
					ND_PRINT("[ERROR: Truncated before pending addresses]");
					break;
				}
				len = ieee802_15_4_print_pending_addresses(ndo, p, caplen);
				if (len < 0) {
					break;
				}
				ND_TCHECK_LEN(p, len);
				p += len;
				caplen -= len;
			}
		}
		if (!ndo->ndo_suppress_default_print)
			ND_DEFAULTPRINT(p, caplen);

		break;
	case 0x01: 
	case 0x02: 
		if (!ndo->ndo_suppress_default_print)
			ND_DEFAULTPRINT(p, caplen);
		break;
	case 0x03: 
		if (caplen < 1) {
			ND_PRINT("[ERROR: Truncated before Command ID]");
		} else {
			unsigned char command_id;

			command_id = GET_U_1(p);
			if (command_id >= 0x30) {
				ND_PRINT("Command ID = Reserved 0x%02x ",
					 command_id);
			} else {
				ND_PRINT("Command ID = %s ",
					 mac_c_names[command_id]);
			}
			p++;
			caplen--;
			if (caplen != 0) {
				len = ieee802_15_4_print_command_data(ndo, command_id, p, caplen);
				if (len >= 0) {
					p += len;
					caplen -= len;
				}
			}
		}
		if (!ndo->ndo_suppress_default_print)
			ND_DEFAULTPRINT(p, caplen);
		break;
	}
	return 1;
}


static u_int
ieee802_15_4_mp_frame(netdissect_options *ndo,
		      const u_char *p, u_int caplen,
		      unsigned short fc)
{
	int len, frame_version, pan_id_present;
	int src_addr_len, dst_addr_len;
	int security_level;
	u_int miclen = 0;
	int ie_present, payload_ie_present, security_enabled;
	unsigned char seq;
	unsigned int fcs, crc_check;
	const u_char *mic_start = NULL;

	pan_id_present = 0;
	ie_present = 0;
	payload_ie_present = 0;
	security_enabled = 0;
	crc_check = 0;

	
	if (caplen < 3) {
		
		fcs = 0;
	} else {
		if (caplen > 4) {
			
			fcs = GET_LE_U_4(p + caplen - 4);
			crc_check = ieee802_15_4_crc32(ndo, p, caplen - 4);
			if (crc_check == fcs) {
				
				caplen -= 4;
			} else {
				fcs = GET_LE_U_2(p + caplen - 2);
				crc_check = ieee802_15_4_crc16(ndo, p, caplen - 2);
				if (crc_check == fcs) {
					
					caplen -= 2;
				}
			}
		} else {
			fcs = GET_LE_U_2(p + caplen - 2);
			crc_check = ieee802_15_4_crc16(ndo, p, caplen - 2);
			if (crc_check == fcs) {
				
				caplen -= 2;
			}
		}
	}

	if (CHECK_BIT(fc, 3)) {
		

		
		frame_version = FC_FRAME_VERSION(fc);
		ND_PRINT("v%d ", frame_version);

		pan_id_present = CHECK_BIT(fc, 8);
		ie_present = CHECK_BIT(fc, 15);
		security_enabled = CHECK_BIT(fc, 9);

		if (ndo->ndo_vflag > 2) {
			if (security_enabled) { ND_PRINT("Security Enabled, "); }
			if (CHECK_BIT(fc, 11)) { ND_PRINT("Frame Pending, "); }
			if (CHECK_BIT(fc, 14)) { ND_PRINT("AR, "); }
			if (pan_id_present) { ND_PRINT("PAN ID Present, "); }
			if (CHECK_BIT(fc, 10)) {
				ND_PRINT("Sequence Number Suppression, ");
			}
			if (ie_present) { ND_PRINT("IE present, "); }
		}

		
		if (CHECK_BIT(fc, 10)) {
			
			if (caplen < 2) {
				nd_print_trunc(ndo);
				return 0;
			}
			p += 2;
			caplen -= 2;
		} else {
			seq = GET_U_1(p + 2);
			if (ndo->ndo_vflag)
				ND_PRINT("seq %02x ", seq);
			if (caplen < 3) {
				nd_print_trunc(ndo);
				return 0;
			}
			p += 3;
			caplen -= 3;
		}
	} else {
		
		seq = GET_U_1(p + 1);
		p += 2;
		caplen -= 2;
		if (ndo->ndo_vflag)
			ND_PRINT("seq %02x ", seq);
	}

	
	dst_addr_len = ieee802_15_4_addr_len((fc >> 4) & 0x3);
	src_addr_len = ieee802_15_4_addr_len((fc >> 6) & 0x3);
	if (src_addr_len < 0) {
		ND_PRINT("[ERROR: Invalid src address mode]");
		return 0;
	}
	if (dst_addr_len < 0) {
		ND_PRINT("[ERROR: Invalid dst address mode]");
		return 0;
	}

	
	if (pan_id_present) {
		if (caplen < 2) {
			ND_PRINT("[ERROR: Truncated before dst_pan]");
			return 0;
		}
		ND_PRINT("%04x:", GET_LE_U_2(p));
		p += 2;
		caplen -= 2;
	} else {
		ND_PRINT("-:");
	}
	if (caplen < (u_int) dst_addr_len) {
		ND_PRINT("[ERROR: Truncated before dst_addr]");
		return 0;
	}
	ieee802_15_4_print_addr(ndo, p, dst_addr_len);
	p += dst_addr_len;
	caplen -= dst_addr_len;

	ND_PRINT(" < ");

	
	ND_PRINT(" -:");
	if (caplen < (u_int) src_addr_len) {
		ND_PRINT("[ERROR: Truncated before dst_addr]");
		return 0;
	}
	ieee802_15_4_print_addr(ndo, p, src_addr_len);
	ND_PRINT(" ");
	p += src_addr_len;
	caplen -= src_addr_len;

	if (security_enabled) {
		len = ieee802_15_4_print_aux_sec_header(ndo, p, caplen,
							&security_level);
		if (len < 0) {
			return 0;
		}
		ND_TCHECK_LEN(p, len);
		p += len;
		caplen -= len;
	} else {
		security_level = 0;
	}

	switch (security_level) {
	case 0: 
	case 4:
		miclen = 0;
		break;
	case 1: 
	case 5:
		miclen = 4;
		break;
	case 2: 
	case 6:
		miclen = 8;
		break;
	case 3: 
	case 7:
		miclen = 16;
		break;
	}

	
	if (miclen != 0) {
		if (caplen < miclen) {
			ND_PRINT("[ERROR: Truncated before MIC]");
			return 0;
		}
		caplen -= miclen;
		mic_start = p + caplen;
	}

	
	if (ie_present) {
		
		len = ieee802_15_4_print_header_ie_list(ndo, p, caplen,
							&payload_ie_present);
		if (len < 0) {
			return 0;
		}
		p += len;
		caplen -= len;
	}

	if (payload_ie_present) {
		if (security_level >= 4) {
			ND_PRINT("Payload IEs present, but encrypted, cannot print ");
		} else {
			len = ieee802_15_4_print_payload_ie_list(ndo, p,
								 caplen);
			if (len < 0) {
				return 0;
			}
			p += len;
			caplen -= len;
		}
	}

	
	if (ndo->ndo_vflag > 2 && miclen != 0) {
		ND_PRINT("\n\tMIC ");

		for (u_int micoffset = 0; micoffset < miclen; micoffset++) {
			ND_PRINT("%02x", GET_U_1(mic_start + micoffset));
		}
		ND_PRINT(" ");
	}


	
	if (ndo->ndo_vflag > 2) {
		if (crc_check == fcs) {
			ND_PRINT("FCS %x ", fcs);
		} else {
			ND_PRINT("wrong FCS %x vs %x (assume no FCS stored) ",
				 fcs, crc_check);
		}
	}

	if (!ndo->ndo_suppress_default_print)
		ND_DEFAULTPRINT(p, caplen);

	return 1;
}


static u_int
ieee802_15_4_frag_frame(netdissect_options *ndo _U_,
			const u_char *p _U_,
			u_int caplen _U_,
			unsigned short fc _U_)
{
	
	return 0;
}


u_int
ieee802_15_4_print(netdissect_options *ndo,
		   const u_char *p, u_int caplen)
{
	int frame_type;
	unsigned short fc;

	ndo->ndo_protocol = "802.15.4";

	if (caplen < 2) {
		nd_print_trunc(ndo);
		return caplen;
	}

	fc = GET_LE_U_2(p);

	

	frame_type = FC_FRAME_TYPE(fc);
	ND_PRINT("IEEE 802.15.4 %s packet ", ftypes[frame_type]);

	switch (frame_type) {
	case 0x00: 
	case 0x01: 
	case 0x02: 
	case 0x03: 
		return ieee802_15_4_std_frames(ndo, p, caplen, fc);
	case 0x04: 
		return 0;
	case 0x05: 
		return ieee802_15_4_mp_frame(ndo, p, caplen, fc);
	case 0x06: 
		return ieee802_15_4_frag_frame(ndo, p, caplen, fc);
	case 0x07: 
		return 0;
	}
	return 0;
}



void
ieee802_15_4_if_print(netdissect_options *ndo,
                      const struct pcap_pkthdr *h, const u_char *p)
{
	u_int caplen = h->caplen;
	ndo->ndo_protocol = "802.15.4";
	ndo->ndo_ll_hdr_len += ieee802_15_4_print(ndo, p, caplen);
}



void
ieee802_15_4_tap_if_print(netdissect_options *ndo,
                          const struct pcap_pkthdr *h, const u_char *p)
{
	unsigned char version;
	unsigned short length;

	ndo->ndo_protocol = "802.15.4_tap";
	if (h->caplen < 4) {
		nd_print_trunc(ndo);
		ndo->ndo_ll_hdr_len += h->caplen;
		return;
	}

	version = GET_U_1(p);
	length = GET_LE_U_2(p + 2);
	if (version != 0 || length < 4) {
		nd_print_invalid(ndo);
		return;
	}

	if (h->caplen < length) {
		nd_print_trunc(ndo);
		ndo->ndo_ll_hdr_len += h->caplen;
		return;
	}

	ndo->ndo_ll_hdr_len += ieee802_15_4_print(ndo, p+length, h->caplen-length) + length;
}
