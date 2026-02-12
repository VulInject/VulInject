str get_presentity_from_subscriber_dialog(str *callid, str *to_tag, str *from_tag) {
subs_t* s;
unsigned int hash_code = 0;
str pres_uri = {0,0};

hash_code = core_hash(callid, to_tag, sub_dialog_hash_size);

lock_get(&sub_dialog_table[hash_code].lock);
LM_DBG("Searching sub dialog hash info with call_id: <%.*s> and ttag <%.*s> and ftag <%.*s> and hash code <%d>\n", callid->len, callid->s, to_tag->len, to_tag->s, from_tag->len, from_tag->s, hash_code);
s = pres_search_shtable(sub_dialog_table, *callid, *to_tag, *from_tag, hash_code);
if(s== NULL)
{
LM_DBG("Subscriber dialog record not found in hash table\n");
lock_release(&sub_dialog_table[hash_code].lock);
return pres_uri;
}