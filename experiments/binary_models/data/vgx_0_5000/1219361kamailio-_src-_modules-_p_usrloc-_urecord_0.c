int db_delete_urecord(udomain_t* _d, urecord_t* _r)
{
db_key_t keys[2];
db_val_t vals[2];
char* dom;

keys[0] = &user_col;
keys[1] = &domain_col;
vals[0].type = DB1_STR;
vals[0].nul = 0;
vals[0].val.str_val.s = _r->aor.s;
vals[0].val.str_val.len = _r->aor.len;

if (use_domain) {
dom = memchr(_r->aor.s, '@', _r->aor.len);
vals[0].val.str_val.len = dom - _r->aor.s;

vals[1].type = DB1_STR;
vals[1].nul = 0;
vals[1].val.str_val.s = dom + 1;
vals[1].val.str_val.len = _r->aor.s + _r->aor.len - dom - 1;
}

if (ul_db_layer_delete(_d, &vals[0].val.str_val, &vals[1].val.str_val, keys, 0, vals, (use_domain) ? (2) : (1)) < 0) {
return -1;
}

return 0;
}