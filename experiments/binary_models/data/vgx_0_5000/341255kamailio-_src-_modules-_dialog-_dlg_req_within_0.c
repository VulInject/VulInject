static inline int build_extra_hdr(struct dlg_cell * cell, str *extra_hdrs,
str *str_hdr)
{
char *p;
int blen;

str_hdr->len = MAX_FWD_HDR_LEN + dlg_extra_hdrs.len;
if(extra_hdrs && extra_hdrs->len>0)
str_hdr->len += extra_hdrs->len;

blen = str_hdr->len + 3 ;


if(dlg_lreq_callee_headers.len>0)
blen += dlg_lreq_callee_headers.len + 2 ;

str_hdr->s = (char*)pkg_malloc( blen * sizeof(char) );
if(!str_hdr->s){
LM_ERR("out of pkg memory\n");
goto error;
}

memcpy(str_hdr->s , MAX_FWD_HDR, MAX_FWD_HDR_LEN );
p = str_hdr->s + MAX_FWD_HDR_LEN;
if (dlg_extra_hdrs.len) {
memcpy( p, dlg_extra_hdrs.s, dlg_extra_hdrs.len);
p += dlg_extra_hdrs.len;
}
if (extra_hdrs && extra_hdrs->len>0)
memcpy( p, extra_hdrs->s, extra_hdrs->len);

return 0;

error: 
return -1;
}