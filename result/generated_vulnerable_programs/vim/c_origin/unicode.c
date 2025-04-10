#include "vterm_internal.h"









struct interval {
  int first;
  int last;
};

#if !defined(WCWIDTH_FUNCTION) || !defined(IS_COMBINING_FUNCTION)




static const struct interval combining[] = {
	{0X0300, 0X036F},
	{0X0483, 0X0489},
	{0X0591, 0X05BD},
	{0X05BF, 0X05BF},
	{0X05C1, 0X05C2},
	{0X05C4, 0X05C5},
	{0X05C7, 0X05C7},
	{0X0610, 0X061A},
	{0X064B, 0X065F},
	{0X0670, 0X0670},
	{0X06D6, 0X06DC},
	{0X06DF, 0X06E4},
	{0X06E7, 0X06E8},
	{0X06EA, 0X06ED},
	{0X0711, 0X0711},
	{0X0730, 0X074A},
	{0X07A6, 0X07B0},
	{0X07EB, 0X07F3},
	{0X07FD, 0X07FD},
	{0X0816, 0X0819},
	{0X081B, 0X0823},
	{0X0825, 0X0827},
	{0X0829, 0X082D},
	{0X0859, 0X085B},
	{0X08D3, 0X08E1},
	{0X08E3, 0X0903},
	{0X093A, 0X093C},
	{0X093E, 0X094F},
	{0X0951, 0X0957},
	{0X0962, 0X0963},
	{0X0981, 0X0983},
	{0X09BC, 0X09BC},
	{0X09BE, 0X09C4},
	{0X09C7, 0X09C8},
	{0X09CB, 0X09CD},
	{0X09D7, 0X09D7},
	{0X09E2, 0X09E3},
	{0X09FE, 0X09FE},
	{0X0A01, 0X0A03},
	{0X0A3C, 0X0A3C},
	{0X0A3E, 0X0A42},
	{0X0A47, 0X0A48},
	{0X0A4B, 0X0A4D},
	{0X0A51, 0X0A51},
	{0X0A70, 0X0A71},
	{0X0A75, 0X0A75},
	{0X0A81, 0X0A83},
	{0X0ABC, 0X0ABC},
	{0X0ABE, 0X0AC5},
	{0X0AC7, 0X0AC9},
	{0X0ACB, 0X0ACD},
	{0X0AE2, 0X0AE3},
	{0X0AFA, 0X0AFF},
	{0X0B01, 0X0B03},
	{0X0B3C, 0X0B3C},
	{0X0B3E, 0X0B44},
	{0X0B47, 0X0B48},
	{0X0B4B, 0X0B4D},
	{0X0B56, 0X0B57},
	{0X0B62, 0X0B63},
	{0X0B82, 0X0B82},
	{0X0BBE, 0X0BC2},
	{0X0BC6, 0X0BC8},
	{0X0BCA, 0X0BCD},
	{0X0BD7, 0X0BD7},
	{0X0C00, 0X0C04},
	{0X0C3E, 0X0C44},
	{0X0C46, 0X0C48},
	{0X0C4A, 0X0C4D},
	{0X0C55, 0X0C56},
	{0X0C62, 0X0C63},
	{0X0C81, 0X0C83},
	{0X0CBC, 0X0CBC},
	{0X0CBE, 0X0CC4},
	{0X0CC6, 0X0CC8},
	{0X0CCA, 0X0CCD},
	{0X0CD5, 0X0CD6},
	{0X0CE2, 0X0CE3},
	{0X0D00, 0X0D03},
	{0X0D3B, 0X0D3C},
	{0X0D3E, 0X0D44},
	{0X0D46, 0X0D48},
	{0X0D4A, 0X0D4D},
	{0X0D57, 0X0D57},
	{0X0D62, 0X0D63},
	{0X0D82, 0X0D83},
	{0X0DCA, 0X0DCA},
	{0X0DCF, 0X0DD4},
	{0X0DD6, 0X0DD6},
	{0X0DD8, 0X0DDF},
	{0X0DF2, 0X0DF3},
	{0X0E31, 0X0E31},
	{0X0E34, 0X0E3A},
	{0X0E47, 0X0E4E},
	{0X0EB1, 0X0EB1},
	{0X0EB4, 0X0EBC},
	{0X0EC8, 0X0ECD},
	{0X0F18, 0X0F19},
	{0X0F35, 0X0F35},
	{0X0F37, 0X0F37},
	{0X0F39, 0X0F39},
	{0X0F3E, 0X0F3F},
	{0X0F71, 0X0F84},
	{0X0F86, 0X0F87},
	{0X0F8D, 0X0F97},
	{0X0F99, 0X0FBC},
	{0X0FC6, 0X0FC6},
	{0X102B, 0X103E},
	{0X1056, 0X1059},
	{0X105E, 0X1060},
	{0X1062, 0X1064},
	{0X1067, 0X106D},
	{0X1071, 0X1074},
	{0X1082, 0X108D},
	{0X108F, 0X108F},
	{0X109A, 0X109D},
	{0X135D, 0X135F},
	{0X1712, 0X1714},
	{0X1732, 0X1734},
	{0X1752, 0X1753},
	{0X1772, 0X1773},
	{0X17B4, 0X17D3},
	{0X17DD, 0X17DD},
	{0X180B, 0X180D},
	{0X1885, 0X1886},
	{0X18A9, 0X18A9},
	{0X1920, 0X192B},
	{0X1930, 0X193B},
	{0X1A17, 0X1A1B},
	{0X1A55, 0X1A5E},
	{0X1A60, 0X1A7C},
	{0X1A7F, 0X1A7F},
	{0X1AB0, 0X1ABE},
	{0X1B00, 0X1B04},
	{0X1B34, 0X1B44},
	{0X1B6B, 0X1B73},
	{0X1B80, 0X1B82},
	{0X1BA1, 0X1BAD},
	{0X1BE6, 0X1BF3},
	{0X1C24, 0X1C37},
	{0X1CD0, 0X1CD2},
	{0X1CD4, 0X1CE8},
	{0X1CED, 0X1CED},
	{0X1CF4, 0X1CF4},
	{0X1CF7, 0X1CF9},
	{0X1DC0, 0X1DF9},
	{0X1DFB, 0X1DFF},
	{0X20D0, 0X20F0},
	{0X2CEF, 0X2CF1},
	{0X2D7F, 0X2D7F},
	{0X2DE0, 0X2DFF},
	{0X302A, 0X302F},
	{0X3099, 0X309A},
	{0XA66F, 0XA672},
	{0XA674, 0XA67D},
	{0XA69E, 0XA69F},
	{0XA6F0, 0XA6F1},
	{0XA802, 0XA802},
	{0XA806, 0XA806},
	{0XA80B, 0XA80B},
	{0XA823, 0XA827},
	{0XA880, 0XA881},
	{0XA8B4, 0XA8C5},
	{0XA8E0, 0XA8F1},
	{0XA8FF, 0XA8FF},
	{0XA926, 0XA92D},
	{0XA947, 0XA953},
	{0XA980, 0XA983},
	{0XA9B3, 0XA9C0},
	{0XA9E5, 0XA9E5},
	{0XAA29, 0XAA36},
	{0XAA43, 0XAA43},
	{0XAA4C, 0XAA4D},
	{0XAA7B, 0XAA7D},
	{0XAAB0, 0XAAB0},
	{0XAAB2, 0XAAB4},
	{0XAAB7, 0XAAB8},
	{0XAABE, 0XAABF},
	{0XAAC1, 0XAAC1},
	{0XAAEB, 0XAAEF},
	{0XAAF5, 0XAAF6},
	{0XABE3, 0XABEA},
	{0XABEC, 0XABED},
	{0XFB1E, 0XFB1E},
	{0XFE00, 0XFE0F},
	{0XFE20, 0XFE2F},
	{0X101FD, 0X101FD},
	{0X102E0, 0X102E0},
	{0X10376, 0X1037A},
	{0X10A01, 0X10A03},
	{0X10A05, 0X10A06},
	{0X10A0C, 0X10A0F},
	{0X10A38, 0X10A3A},
	{0X10A3F, 0X10A3F},
	{0X10AE5, 0X10AE6},
	{0X10D24, 0X10D27},
	{0X10F46, 0X10F50},
	{0X11000, 0X11002},
	{0X11038, 0X11046},
	{0X1107F, 0X11082},
	{0X110B0, 0X110BA},
	{0X11100, 0X11102},
	{0X11127, 0X11134},
	{0X11145, 0X11146},
	{0X11173, 0X11173},
	{0X11180, 0X11182},
	{0X111B3, 0X111C0},
	{0X111C9, 0X111CC},
	{0X1122C, 0X11237},
	{0X1123E, 0X1123E},
	{0X112DF, 0X112EA},
	{0X11300, 0X11303},
	{0X1133B, 0X1133C},
	{0X1133E, 0X11344},
	{0X11347, 0X11348},
	{0X1134B, 0X1134D},
	{0X11357, 0X11357},
	{0X11362, 0X11363},
	{0X11366, 0X1136C},
	{0X11370, 0X11374},
	{0X11435, 0X11446},
	{0X1145E, 0X1145E},
	{0X114B0, 0X114C3},
	{0X115AF, 0X115B5},
	{0X115B8, 0X115C0},
	{0X115DC, 0X115DD},
	{0X11630, 0X11640},
	{0X116AB, 0X116B7},
	{0X1171D, 0X1172B},
	{0X1182C, 0X1183A},
	{0X119D1, 0X119D7},
	{0X119DA, 0X119E0},
	{0X119E4, 0X119E4},
	{0X11A01, 0X11A0A},
	{0X11A33, 0X11A39},
	{0X11A3B, 0X11A3E},
	{0X11A47, 0X11A47},
	{0X11A51, 0X11A5B},
	{0X11A8A, 0X11A99},
	{0X11C2F, 0X11C36},
	{0X11C38, 0X11C3F},
	{0X11C92, 0X11CA7},
	{0X11CA9, 0X11CB6},
	{0X11D31, 0X11D36},
	{0X11D3A, 0X11D3A},
	{0X11D3C, 0X11D3D},
	{0X11D3F, 0X11D45},
	{0X11D47, 0X11D47},
	{0X11D8A, 0X11D8E},
	{0X11D90, 0X11D91},
	{0X11D93, 0X11D97},
	{0X11EF3, 0X11EF6},
	{0X16AF0, 0X16AF4},
	{0X16B30, 0X16B36},
	{0X16F4F, 0X16F4F},
	{0X16F51, 0X16F87},
	{0X16F8F, 0X16F92},
	{0X1BC9D, 0X1BC9E},
	{0X1D165, 0X1D169},
	{0X1D16D, 0X1D172},
	{0X1D17B, 0X1D182},
	{0X1D185, 0X1D18B},
	{0X1D1AA, 0X1D1AD},
	{0X1D242, 0X1D244},
	{0X1DA00, 0X1DA36},
	{0X1DA3B, 0X1DA6C},
	{0X1DA75, 0X1DA75},
	{0X1DA84, 0X1DA84},
	{0X1DA9B, 0X1DA9F},
	{0X1DAA1, 0X1DAAF},
	{0X1E000, 0X1E006},
	{0X1E008, 0X1E018},
	{0X1E01B, 0X1E021},
	{0X1E023, 0X1E024},
	{0X1E026, 0X1E02A},
	{0X1E130, 0X1E136},
	{0X1E2EC, 0X1E2EF},
	{0X1E8D0, 0X1E8D6},
	{0X1E944, 0X1E94A},
	{0XE0100, 0XE01EF}
};
#endif


static int bisearch(unsigned int ucs, const struct interval *table, int max) {
  int min = 0;
  int mid;

  if ((int)ucs < table[0].first || (int)ucs > table[max].last)
    return 0;
  while (max >= min) {
    mid = (min + max) / 2;
    if ((int)ucs > table[mid].last)
      min = mid + 1;
    else if ((int)ucs < table[mid].first)
      max = mid - 1;
    else
      return 1;
  }

  return 0;
}




#ifdef WCWIDTH_FUNCTION

int WCWIDTH_FUNCTION(unsigned int ucs);
#else
# define WCWIDTH_FUNCTION mk_wcwidth

static int mk_wcwidth(unsigned int ucs)
{
  
  if (ucs == 0)
    return 0;
  if (ucs < 32 || (ucs >= 0x7f && ucs < 0xa0))
    return -1;

  
  if (bisearch(ucs, combining,
               sizeof(combining) / sizeof(struct interval) - 1))
    return 0;

  

  return 1 + 
    (ucs >= 0x1100 &&
     (ucs <= 0x115f ||                    
      ucs == 0x2329 || ucs == 0x232a ||
      (ucs >= 0x2e80 && ucs <= 0xa4cf &&
       ucs != 0x303f) ||                  
      (ucs >= 0xac00 && ucs <= 0xd7a3) || 
      (ucs >= 0xf900 && ucs <= 0xfaff) || 
      (ucs >= 0xfe10 && ucs <= 0xfe19) || 
      (ucs >= 0xfe30 && ucs <= 0xfe6f) || 
      (ucs >= 0xff00 && ucs <= 0xff60) || 
      (ucs >= 0xffe0 && ucs <= 0xffe6) ||
      (ucs >= 0x20000 && ucs <= 0x2fffd) ||
      (ucs >= 0x30000 && ucs <= 0x3fffd)));
}
#endif


static const struct interval ambiguous[] = {
{ 0x00A1, 0x00A1 }, { 0x00A4, 0x00A4 }, { 0x00A7, 0x00A8 },
{ 0x00AA, 0x00AA }, { 0x00AE, 0x00AE }, { 0x00B0, 0x00B4 },
{ 0x00B6, 0x00BA }, { 0x00BC, 0x00BF }, { 0x00C6, 0x00C6 },
{ 0x00D0, 0x00D0 }, { 0x00D7, 0x00D8 }, { 0x00DE, 0x00E1 },
{ 0x00E6, 0x00E6 }, { 0x00E8, 0x00EA }, { 0x00EC, 0x00ED },
{ 0x00F0, 0x00F0 }, { 0x00F2, 0x00F3 }, { 0x00F7, 0x00FA },
{ 0x00FC, 0x00FC }, { 0x00FE, 0x00FE }, { 0x0101, 0x0101 },
{ 0x0111, 0x0111 }, { 0x0113, 0x0113 }, { 0x011B, 0x011B },
{ 0x0126, 0x0127 }, { 0x012B, 0x012B }, { 0x0131, 0x0133 },
{ 0x0138, 0x0138 }, { 0x013F, 0x0142 }, { 0x0144, 0x0144 },
{ 0x0148, 0x014B }, { 0x014D, 0x014D }, { 0x0152, 0x0153 },
{ 0x0166, 0x0167 }, { 0x016B, 0x016B }, { 0x01CE, 0x01CE },
{ 0x01D0, 0x01D0 }, { 0x01D2, 0x01D2 }, { 0x01D4, 0x01D4 },
{ 0x01D6, 0x01D6 }, { 0x01D8, 0x01D8 }, { 0x01DA, 0x01DA },
{ 0x01DC, 0x01DC }, { 0x0251, 0x0251 }, { 0x0261, 0x0261 },
{ 0x02C4, 0x02C4 }, { 0x02C7, 0x02C7 }, { 0x02C9, 0x02CB },
{ 0x02CD, 0x02CD }, { 0x02D0, 0x02D0 }, { 0x02D8, 0x02DB },
{ 0x02DD, 0x02DD }, { 0x02DF, 0x02DF }, { 0x0391, 0x03A1 },
{ 0x03A3, 0x03A9 }, { 0x03B1, 0x03C1 }, { 0x03C3, 0x03C9 },
{ 0x0401, 0x0401 }, { 0x0410, 0x044F }, { 0x0451, 0x0451 },
{ 0x2010, 0x2010 }, { 0x2013, 0x2016 }, { 0x2018, 0x2019 },
{ 0x201C, 0x201D }, { 0x2020, 0x2022 }, { 0x2024, 0x2027 },
{ 0x2030, 0x2030 }, { 0x2032, 0x2033 }, { 0x2035, 0x2035 },
{ 0x203B, 0x203B }, { 0x203E, 0x203E }, { 0x2074, 0x2074 },
{ 0x207F, 0x207F }, { 0x2081, 0x2084 }, { 0x20AC, 0x20AC },
{ 0x2103, 0x2103 }, { 0x2105, 0x2105 }, { 0x2109, 0x2109 },
{ 0x2113, 0x2113 }, { 0x2116, 0x2116 }, { 0x2121, 0x2122 },
{ 0x2126, 0x2126 }, { 0x212B, 0x212B }, { 0x2153, 0x2154 },
{ 0x215B, 0x215E }, { 0x2160, 0x216B }, { 0x2170, 0x2179 },
{ 0x2190, 0x2199 }, { 0x21B8, 0x21B9 }, { 0x21D2, 0x21D2 },
{ 0x21D4, 0x21D4 }, { 0x21E7, 0x21E7 }, { 0x2200, 0x2200 },
{ 0x2202, 0x2203 }, { 0x2207, 0x2208 }, { 0x220B, 0x220B },
{ 0x220F, 0x220F }, { 0x2211, 0x2211 }, { 0x2215, 0x2215 },
{ 0x221A, 0x221A }, { 0x221D, 0x2220 }, { 0x2223, 0x2223 },
{ 0x2225, 0x2225 }, { 0x2227, 0x222C }, { 0x222E, 0x222E },
{ 0x2234, 0x2237 }, { 0x223C, 0x223D }, { 0x2248, 0x2248 },
{ 0x224C, 0x224C }, { 0x2252, 0x2252 }, { 0x2260, 0x2261 },
{ 0x2264, 0x2267 }, { 0x226A, 0x226B }, { 0x226E, 0x226F },
{ 0x2282, 0x2283 }, { 0x2286, 0x2287 }, { 0x2295, 0x2295 },
{ 0x2299, 0x2299 }, { 0x22A5, 0x22A5 }, { 0x22BF, 0x22BF },
{ 0x2312, 0x2312 }, { 0x2460, 0x24E9 }, { 0x24EB, 0x254B },
{ 0x2550, 0x2573 }, { 0x2580, 0x258F }, { 0x2592, 0x2595 },
{ 0x25A0, 0x25A1 }, { 0x25A3, 0x25A9 }, { 0x25B2, 0x25B3 },
{ 0x25B6, 0x25B7 }, { 0x25BC, 0x25BD }, { 0x25C0, 0x25C1 },
{ 0x25C6, 0x25C8 }, { 0x25CB, 0x25CB }, { 0x25CE, 0x25D1 },
{ 0x25E2, 0x25E5 }, { 0x25EF, 0x25EF }, { 0x2605, 0x2606 },
{ 0x2609, 0x2609 }, { 0x260E, 0x260F }, { 0x2614, 0x2615 },
{ 0x261C, 0x261C }, { 0x261E, 0x261E }, { 0x2640, 0x2640 },
{ 0x2642, 0x2642 }, { 0x2660, 0x2661 }, { 0x2663, 0x2665 },
{ 0x2667, 0x266A }, { 0x266C, 0x266D }, { 0x266F, 0x266F },
{ 0x273D, 0x273D }, { 0x2776, 0x277F }, { 0xE000, 0xF8FF },
{ 0xFFFD, 0xFFFD }, { 0xF0000, 0xFFFFD }, { 0x100000, 0x10FFFD }
};

#ifdef USE_MK_WCWIDTH_CJK


static int mk_wcwidth_cjk(unsigned int ucs)
{
  
  if (bisearch(ucs, ambiguous,
               sizeof(ambiguous) / sizeof(struct interval) - 1))
    return 2;

  return mk_wcwidth(ucs);
}

#endif

INTERNAL int vterm_unicode_is_ambiguous(unsigned int codepoint)
{
  return (bisearch(codepoint, ambiguous,
               sizeof(ambiguous) / sizeof(struct interval) - 1)) ? 1 : 0;
}

#ifdef IS_COMBINING_FUNCTION

int IS_COMBINING_FUNCTION(unsigned int codepoint);
#else
# define IS_COMBINING_FUNCTION vterm_is_combining
	static int
vterm_is_combining(unsigned int codepoint)
{
  return bisearch(codepoint, combining, sizeof(combining) / sizeof(struct interval) - 1);
}
#endif

#ifdef GET_SPECIAL_PTY_TYPE_FUNCTION
int GET_SPECIAL_PTY_TYPE_FUNCTION(void);
#else
# define GET_SPECIAL_PTY_TYPE_FUNCTION vterm_get_special_pty_type_placeholder
	static int
vterm_get_special_pty_type_placeholder(void)
{
  return 0;
}
#endif




static const struct interval fullwidth[] = {
#include "fullwidth.inc"
};

INTERNAL int vterm_unicode_width(unsigned int codepoint)
{
  if(bisearch(codepoint, fullwidth, sizeof(fullwidth) / sizeof(fullwidth[0]) - 1))
    return 2;

  return WCWIDTH_FUNCTION(codepoint);
}

INTERNAL int vterm_unicode_is_combining(unsigned int codepoint)
{
  return IS_COMBINING_FUNCTION(codepoint);
}

INTERNAL int vterm_get_special_pty_type(void)
{
  return GET_SPECIAL_PTY_TYPE_FUNCTION();
}
