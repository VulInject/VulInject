static int persist__retain_chunk_restore(FILE *db_fptr)
{
struct mosquitto_msg_store_load *load;
struct P_retain chunk;
int rc;
char **split_topics;
char *local_topic;

memset(&chunk, 0, sizeof(struct P_retain));

if(db_version == 6 || db_version == 5){
rc = persist__chunk_retain_read_v56(db_fptr, &chunk);
}else{
rc = persist__chunk_retain_read_v234(db_fptr, &chunk);
}
if(rc){
return rc;
}

HASH_FIND(hh, db.msg_store_load, &chunk.F.store_id, sizeof(dbid_t), load);
if(load){
if(sub__topic_tokenise(load->store->topic, &local_topic, &split_topics, NULL)) return 1;
retain__store(load->store->topic, load->store, split_topics);
mosquitto__free(local_topic);
mosquitto__free(split_topics);
}else{

}
return MOSQ_ERR_SUCCESS;
}