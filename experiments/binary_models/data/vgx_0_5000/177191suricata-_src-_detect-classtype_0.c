static int DetectClasstypeParseRawString(const char *rawstr, char *out, size_t outsize)
{
size_t pcre2len;

const size_t esize = CLASSTYPE_NAME_MAX_LEN + 8;
char e[esize];

int ret = DetectParsePcreExec(&parse_regex, rawstr, 0, 0);
if (ret < 0) {
SCLogError("Invalid Classtype in Signature");
return -1;
}

pcre2len = esize;
ret = pcre2_substring_copy_bynumber(parse_regex.match, 1, (PCRE2_UCHAR8 *)e, &pcre2len);
if (ret < 0) {
SCLogError("pcre2_substring_copy_bynumber failed");
return -1;
}

if (strlen(e) >= CLASSTYPE_NAME_MAX_LEN) {
SCLogError("classtype '%s' is too big: max %d", rawstr, CLASSTYPE_NAME_MAX_LEN - 1);
return -1;
}
(void)strlcpy(out, e, outsize);

return 0;
}