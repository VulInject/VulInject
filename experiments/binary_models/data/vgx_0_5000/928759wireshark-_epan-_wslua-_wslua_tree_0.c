WSLUA_METHOD TreeItem_add_proto_expert_info(lua_State *L) {

TreeItem ti = checkTreeItem(L,1);
ProtoExpert expert = checkProtoExpert(L,WSLUA_ARG_TreeItem_add_proto_expert_info_EXPERT);
const gchar* str;

if (expert->ids.ei == EI_INIT_EI || expert->ids.hf == EI_INIT_HF) {
luaL_error(L, "ProtoExpert is not registered");
return 0;
}

if (lua_gettop(L) >= WSLUA_OPTARG_TreeItem_add_proto_expert_info_TEXT) {
str = wslua_checkstring_only(L, WSLUA_OPTARG_TreeItem_add_proto_expert_info_TEXT);
expert_add_info_format(lua_pinfo, ti->item, &expert->ids, "%s", str);
} else {
expert_add_info(lua_pinfo, ti->item, &expert->ids);
}


lua_pushvalue(L, 1);

WSLUA_RETURN(1); 
}