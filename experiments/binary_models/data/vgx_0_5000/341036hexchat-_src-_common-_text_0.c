text_fixup_invalid_utf8 (const gchar* text, gssize len, gsize *len_out)
{
G_GNUC_BEGIN_IGNORE_DEPRECATIONS
gchar *result = g_utf8_make_valid (text, len);
G_GNUC_END_IGNORE_DEPRECATIONS
if (len_out)
{
*len_out = strlen (result);
}
return result;
static GIConv utf8_fixup_converter = NULL;
if (utf8_fixup_converter == NULL)
{
utf8_fixup_converter = g_iconv_open ("UTF-8", "UTF-8");
}

return text_convert_invalid (text, len, utf8_fixup_converter, unicode_fallback_string, len_out);
}