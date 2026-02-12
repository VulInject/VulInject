WSLUA_METAMETHOD CaptureInfo__tostring(lua_State* L) {

CaptureInfo fi = toCaptureInfo(L,1);

if (!fi || !fi->wth) {
lua_pushstring(L,"CaptureInfo pointer is NULL!");
} else {
wtap *wth = fi->wth;
lua_pushfstring(L, "CaptureInfo: file_type_subtype=%d, snapshot_length=%d, file_encap=%d, file_tsprec='%s'",
wth->file_type_subtype, wth->snapshot_length, wth->file_encap, wth->file_tsprec);
}

WSLUA_RETURN(1); 
}