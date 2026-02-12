static void do_named_subpatterns (lua_State *L, TPcre2 *ud, const char *text) {
int i, namecount, name_entry_size;
unsigned char *name_table;
PCRE2_SPTR tabptr;


pcre2_pattern_info (ud->pr, PCRE2_INFO_NAMECOUNT, &namecount);
if (namecount <= 0)
return;
pcre2_pattern_info (ud->pr, PCRE2_INFO_NAMETABLE, &name_table);
pcre2_pattern_info (ud->pr, PCRE2_INFO_NAMEENTRYSIZE, &name_entry_size);
tabptr = name_table;
for (i = 0; i < namecount; i++) {
int n = (tabptr[0] << 8) | tabptr[1]; 
if (n > 0 && n <= ALG_NSUB(ud)) {   
lua_pushstring (L, (char *)tabptr + 2); 
ALG_PUSHSUB_OR_FALSE (L, ud, text, n);
lua_rawset (L, -3);
}
tabptr += name_entry_size;
}
}