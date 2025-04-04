


#define NO_X11_INCLUDES

#include "vim.h"

#if !defined(PROTO)
# include <CoreServices/CoreServices.h>
#endif


#if defined(MACOS_CONVERT) || defined(PROTO)

# ifdef PROTO

typedef int UniChar;
typedef int *TECObjectRef;
typedef int CFStringRef;
# endif

static char_u	    *mac_utf16_to_utf8(UniChar *from, size_t fromLen, size_t *actualLen);
static UniChar	    *mac_utf8_to_utf16(char_u *from, size_t fromLen, size_t *actualLen);


static TECObjectRef gPathConverter;

static TECObjectRef gUTF16ToUTF8Converter;


    char_u *
mac_string_convert(
    char_u		*ptr,
    int			len,
    int			*lenp,
    int			fail_on_error,
    int			from_enc,
    int			to_enc,
    int			*unconvlenp)
{
    char_u		*retval, *d;
    CFStringRef		cfstr;
    int			buflen, in, out, l, i;
    CFStringEncoding	from;
    CFStringEncoding	to;

    switch (from_enc)
    {
	case 'l':   from = kCFStringEncodingISOLatin1; break;
	case 'm':   from = kCFStringEncodingMacRoman; break;
	case 'u':   from = kCFStringEncodingUTF8; break;
	default:    return NULL;
    }
    switch (to_enc)
    {
	case 'l':   to = kCFStringEncodingISOLatin1; break;
	case 'm':   to = kCFStringEncodingMacRoman; break;
	case 'u':   to = kCFStringEncodingUTF8; break;
	default:    return NULL;
    }

    if (unconvlenp != NULL)
	*unconvlenp = 0;
    cfstr = CFStringCreateWithBytes(NULL, ptr, len, from, 0);

    if (cfstr == NULL)
	fprintf(stderr, "Encoding failed\n");
    
    
    
    while (cfstr == NULL && unconvlenp != NULL && len > 1 && *unconvlenp < 6)
    {
	--len;
	++*unconvlenp;
	cfstr = CFStringCreateWithBytes(NULL, ptr, len, from, 0);
    }
    if (cfstr == NULL)
	return NULL;

    if (to == kCFStringEncodingUTF8)
	buflen = len * 6 + 1;
    else
	buflen = len + 1;
    retval = alloc(buflen);
    if (retval == NULL)
    {
	CFRelease(cfstr);
	return NULL;
    }

#if 0
    CFRange convertRange = CFRangeMake(0, CFStringGetLength(cfstr));
    
    CFStringGetBytes(cfstr, convertRange, to, NULL, FALSE, NULL, 0, (CFIndex *)&buflen);
    retval = (buflen > 0) ? alloc(buflen) : NULL;
    if (retval == NULL)
    {
	CFRelease(cfstr);
	return NULL;
    }

    if (lenp)
	*lenp = buflen / sizeof(char_u);

    if (!CFStringGetBytes(cfstr, convertRange, to, NULL, FALSE, retval, buflen, NULL))
#endif
    if (!CFStringGetCString(cfstr, (char *)retval, buflen, to))
    {
	CFRelease(cfstr);
	if (fail_on_error)
	{
	    vim_free(retval);
	    return NULL;
	}

	fprintf(stderr, "Trying char-by-char conversion...\n");
	
	
	for (d = retval, in = 0, out = 0; in < len && out < buflen - 1;)
	{
	    if (from == kCFStringEncodingUTF8)
		l = utf_ptr2len(ptr + in);
	    else
		l = 1;
	    cfstr = CFStringCreateWithBytes(NULL, ptr + in, l, from, 0);
	    if (cfstr == NULL)
	    {
		*d++ = '?';
		out++;
	    }
	    else
	    {
		if (!CFStringGetCString(cfstr, (char *)d, buflen - out, to))
		{
		    *d++ = '?';
		    out++;
		}
		else
		{
		    i = STRLEN(d);
		    d += i;
		    out += i;
		}
		CFRelease(cfstr);
	    }
	    in += l;
	}
	*d = NUL;
	if (lenp != NULL)
	    *lenp = out;
	return retval;
    }
    CFRelease(cfstr);
    if (lenp != NULL)
	*lenp = STRLEN(retval);

    return retval;
}


    int
macroman2enc(
    char_u	*ptr,
    int	*sizep,
    int	real_size)
{
    CFStringRef		cfstr;
    CFRange		r;
    CFIndex		len = *sizep;

    
    
    cfstr = CFStringCreateWithBytes(NULL, ptr, len,
						kCFStringEncodingMacRoman, 0);
    
    if (cfstr == NULL)
	return FAIL;

    r.location = 0;
    r.length = CFStringGetLength(cfstr);
    if (r.length != CFStringGetBytes(cfstr, r,
	    (enc_utf8) ? kCFStringEncodingUTF8 : kCFStringEncodingISOLatin1,
	    0, 
	    0, 
	    ptr + *sizep, real_size - *sizep, &len))
    {
	CFRelease(cfstr);
	return FAIL;
    }
    CFRelease(cfstr);
    mch_memmove(ptr, ptr + *sizep, len);
    *sizep = len;

    return OK;
}


    int
enc2macroman(
    char_u	*from,
    size_t	fromlen,
    char_u	*to,
    int		*tolenp,
    int		maxtolen,
    char_u	*rest,
    int		*restlenp)
{
    CFStringRef	cfstr;
    CFRange	r;
    CFIndex	l;

    *restlenp = 0;
    cfstr = CFStringCreateWithBytes(NULL, from, fromlen,
	    (enc_utf8) ? kCFStringEncodingUTF8 : kCFStringEncodingISOLatin1,
	    0);
    while (cfstr == NULL && *restlenp < 3 && fromlen > 1)
    {
	rest[*restlenp++] = from[--fromlen];
	cfstr = CFStringCreateWithBytes(NULL, from, fromlen,
		(enc_utf8) ? kCFStringEncodingUTF8 : kCFStringEncodingISOLatin1,
		0);
    }
    if (cfstr == NULL)
	return FAIL;

    r.location = 0;
    r.length = CFStringGetLength(cfstr);
    if (r.length != CFStringGetBytes(cfstr, r,
		kCFStringEncodingMacRoman,
		0, 
		0, 
		   
		to, maxtolen, &l))
    {
	CFRelease(cfstr);
	return FAIL;
    }
    CFRelease(cfstr);
    *tolenp = l;
    return OK;
}


    void
mac_conv_init(void)
{
    TextEncoding    utf8_encoding;
    TextEncoding    utf8_hfsplus_encoding;
    TextEncoding    utf8_canon_encoding;
    TextEncoding    utf16_encoding;

    utf8_encoding = CreateTextEncoding(kTextEncodingUnicodeDefault,
	    kTextEncodingDefaultVariant, kUnicodeUTF8Format);
    utf8_hfsplus_encoding = CreateTextEncoding(kTextEncodingUnicodeDefault,
	    kUnicodeHFSPlusCompVariant, kUnicodeUTF8Format);
    utf8_canon_encoding = CreateTextEncoding(kTextEncodingUnicodeDefault,
	    kUnicodeCanonicalCompVariant, kUnicodeUTF8Format);
    utf16_encoding = CreateTextEncoding(kTextEncodingUnicodeDefault,
	    kTextEncodingDefaultVariant, kUnicode16BitFormat);

    if (TECCreateConverter(&gPathConverter, utf8_encoding,
		utf8_hfsplus_encoding) != noErr)
	gPathConverter = NULL;

    if (TECCreateConverter(&gUTF16ToUTF8Converter, utf16_encoding,
		utf8_canon_encoding) != noErr)
    {
	
	
	if (TECCreateConverter(&gUTF16ToUTF8Converter, utf16_encoding,
		    utf8_encoding) != noErr)
	    gUTF16ToUTF8Converter = NULL;
    }
}


    void
mac_conv_cleanup(void)
{
    if (gUTF16ToUTF8Converter)
    {
	TECDisposeConverter(gUTF16ToUTF8Converter);
	gUTF16ToUTF8Converter = NULL;
    }

    if (gPathConverter)
    {
	TECDisposeConverter(gPathConverter);
	gPathConverter = NULL;
    }
}


    char_u *
mac_utf16_to_enc(
    unsigned short *from,
    size_t fromLen,
    size_t *actualLen)
{
    
    vimconv_T	conv;
    size_t      utf8_len;
    char_u      *utf8_str;
    char_u      *result = NULL;

    
    utf8_len = 0;
    utf8_str = mac_utf16_to_utf8(from, fromLen, &utf8_len);

    if (utf8_str)
    {
	
	conv.vc_type = CONV_NONE;

	
	

	if ((enc_canon_props(p_enc) & ENC_UNICODE) == 0)
	    convert_setup(&conv, (char_u *)"utf-8",
		    p_enc? p_enc: (char_u *)"macroman");
	if (conv.vc_type == CONV_NONE)
	{
	    
	    result = utf8_str;
	}
	else
	{
	    result = string_convert(&conv, utf8_str, (int *)&utf8_len);
	    vim_free(utf8_str);
	}

	convert_setup(&conv, NULL, NULL);

	if (actualLen)
	    *actualLen = utf8_len;
    }
    else if (actualLen)
	*actualLen = 0;

    return result;
}


    unsigned short *
mac_enc_to_utf16(
    char_u *from,
    size_t fromLen,
    size_t *actualLen)
{
    
    vimconv_T	conv;
    size_t      utf8_len;
    char_u      *utf8_str;
    UniChar     *result = NULL;
    Boolean     should_free_utf8 = FALSE;

    do
    {
	
	
	
	conv.vc_type = CONV_NONE;
	if ((enc_canon_props(p_enc) & ENC_UNICODE) == 0 &&
		convert_setup(&conv, p_enc ? p_enc : (char_u *)"macroman",
		    (char_u *)"utf-8") == FAIL)
	    break;

	if (conv.vc_type != CONV_NONE)
	{
	    utf8_len = fromLen;
	    utf8_str = string_convert(&conv, from, (int *)&utf8_len);
	    should_free_utf8 = TRUE;
	}
	else
	{
	    utf8_str = from;
	    utf8_len = fromLen;
	}

	if (utf8_str == NULL)
	    break;

	convert_setup(&conv, NULL, NULL);

	result = mac_utf8_to_utf16(utf8_str, utf8_len, actualLen);

	if (should_free_utf8)
	    vim_free(utf8_str);
	return result;
    }
    while (0);

    if (actualLen)
	*actualLen = 0;

    return result;
}


    void *
mac_enc_to_cfstring(
    char_u  *from,
    size_t  fromLen)
{
    UniChar	*utf16_str;
    size_t	utf16_len;
    CFStringRef	result = NULL;

    utf16_str = mac_enc_to_utf16(from, fromLen, &utf16_len);
    if (utf16_str)
    {
	result = CFStringCreateWithCharacters(NULL, utf16_str, utf16_len/sizeof(UniChar));
	vim_free(utf16_str);
    }

    return (void *)result;
}


    char_u *
mac_precompose_path(
    char_u  *decompPath,
    size_t  decompLen,
    size_t  *precompLen)
{
    char_u  *result = NULL;
    size_t  actualLen = 0;

    if (gPathConverter)
    {
	result = alloc(decompLen);
	if (result)
	{
	    if (TECConvertText(gPathConverter, decompPath,
			decompLen, &decompLen, result,
			decompLen, &actualLen) != noErr)
		VIM_CLEAR(result);
	}
    }

    if (precompLen)
	*precompLen = actualLen;

    return result;
}


    static char_u *
mac_utf16_to_utf8(
    UniChar *from,
    size_t fromLen,
    size_t *actualLen)
{
    ByteCount		utf8_len;
    ByteCount		inputRead;
    char_u		*result;

    if (gUTF16ToUTF8Converter)
    {
	result = alloc(fromLen * 6 + 1);
	if (result && TECConvertText(gUTF16ToUTF8Converter, (ConstTextPtr)from,
		    fromLen, &inputRead, result,
		    (fromLen*6+1)*sizeof(char_u), &utf8_len) == noErr)
	{
	    TECFlushText(gUTF16ToUTF8Converter, result, (fromLen*6+1)*sizeof(char_u), &inputRead);
	    utf8_len += inputRead;
	}
	else
	    VIM_CLEAR(result);
    }
    else
    {
	result = NULL;
    }

    if (actualLen)
	*actualLen = result ? utf8_len : 0;

    return result;
}


    static UniChar *
mac_utf8_to_utf16(
    char_u *from,
    size_t fromLen,
    size_t *actualLen)
{
    CFStringRef  utf8_str;
    CFRange      convertRange;
    UniChar      *result = NULL;

    utf8_str = CFStringCreateWithBytes(NULL, from, fromLen,
	    kCFStringEncodingUTF8, FALSE);

    if (utf8_str == NULL)
    {
	if (actualLen)
	    *actualLen = 0;
	return NULL;
    }

    convertRange = CFRangeMake(0, CFStringGetLength(utf8_str));
    result = ALLOC_MULT(UniChar, convertRange.length);

    CFStringGetCharacters(utf8_str, convertRange, result);

    CFRelease(utf8_str);

    if (actualLen)
	*actualLen = convertRange.length * sizeof(UniChar);

    return result;
}


    void
mac_lang_init(void)
{
    if (mch_getenv((char_u *)"LANG") != NULL)
	return;

    char	buf[50];

    
    
    if (LocaleRefGetPartString(NULL,
		kLocaleLanguageMask | kLocaleLanguageVariantMask |
		kLocaleRegionMask | kLocaleRegionVariantMask,
		sizeof(buf) - 10, buf) == noErr && *buf)
    {
	if (strcasestr(buf, "utf-8") == NULL)
	    strcat(buf, ".UTF-8");
	vim_setenv((char_u *)"LANG", (char_u *)buf);
#   ifdef HAVE_LOCALE_H
	setlocale(LC_ALL, "");
#   endif
#   if defined(LC_NUMERIC)
	
	setlocale(LC_NUMERIC, "C");
#   endif
    }
}
#endif 
