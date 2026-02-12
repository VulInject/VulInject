WSLUA_METAMETHOD CaptureInfoConst__tostring(lua_State* L) {

CaptureInfoConst fi = toCaptureInfoConst(L,1);

if (!fi || !fi->wdh) {
lua_pushstring(L,"CaptureInfoConst pointer is NULL!");
} else {
wtap_dumper *wdh = fi->wdh;
lua_pushfstring(L, "CaptureInfoConst: file_type_subtype=%d, snaplen=%d, encap=%d, compression_type=%d",
wdh->file_type_subtype, wdh->snaplen, wdh->encap, wdh->compression_type);
}

WSLUA_RETURN(1); 
}