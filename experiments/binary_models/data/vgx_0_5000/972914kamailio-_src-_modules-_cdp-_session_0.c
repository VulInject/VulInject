AAASession* AAAMakeSession(int app_id,int type,str session_id)
{
AAASession *s;
str id;

id.s = shm_malloc(session_id.len);
if (!id.s){
LM_ERR("Error allocating %d bytes!\n",session_id.len);
return 0;
}
memcpy(id.s,session_id.s,session_id.len);
id.len = session_id.len;
s = cdp_new_session(id,type);
s->application_id = app_id;
if (s) {
cdp_add_session(s);
}
return s;
}