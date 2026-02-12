png_text_to_pixbuf_option (png_text   text_ptr,
gchar    **key,
gchar    **value)
{
gboolean is_ascii = TRUE;
int i;


for (i = 0; i < text_ptr.text_length; i++)
if (text_ptr.text[i] & 0x80) {
is_ascii = FALSE;
break;
}

if (is_ascii) {
*value = g_strdup (text_ptr.text);
} else {
*value = g_convert (text_ptr.text, -1,
"UTF-8", "ISO-8859-1",
NULL, NULL, NULL);
}

if (*value) {
*key = g_strconcat ("tEXt::", text_ptr.key, NULL);
return TRUE;
} else {
g_warning ("Couldn't convert text chunk value to UTF-8.");
*key = NULL;
return FALSE;
}
}