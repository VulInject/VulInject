static uint8_t
parse_fname(const unsigned char *buf, uint16_t nlen,
TSK_USN_RECORD_V2 *record, TSK_ENDIAN_ENUM endian)
{
int ret = 0;
UTF8 *temp_name = NULL;
size_t src_len = (size_t) nlen, dst_len = (size_t) nlen * 2;

record->fname = tsk_malloc(dst_len + 1);
if (record->fname == NULL)
return 1;

temp_name = (UTF8*)record->fname;

ret = tsk_UTF16toUTF8(endian,
(const UTF16**)&buf, (UTF16*)&buf[src_len],
(UTF8**)&temp_name, (UTF8*)&temp_name[dst_len],
TSKlenientConversion);

if (ret != TSKconversionOK) {
if (tsk_verbose)
tsk_fprintf(
stderr, "parse_v2_record: USN name to UTF8 conversion error.");

record->fname[0] = '\0';
}
else
record->fname[dst_len] = '\0';

return 0;
}