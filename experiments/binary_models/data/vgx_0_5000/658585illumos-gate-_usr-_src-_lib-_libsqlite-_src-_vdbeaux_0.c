int sqliteVdbeFinalize(Vdbe *p, char **pzErrMsg){
int rc;
sqlite *db;

if( p->magic!=VDBE_MAGIC_RUN && p->magic!=VDBE_MAGIC_HALT ){
sqliteSetString(pzErrMsg, sqlite_error_string(SQLITE_MISUSE), (char*)0);
return SQLITE_MISUSE;
}
db = p->db;
rc = sqliteVdbeReset(p, pzErrMsg);
sqliteVdbeDelete(p);
if( db->want_to_close && db->pVdbe==0 ){
sqlite_close(db);
}
if( rc==SQLITE_SCHEMA ){
sqliteResetInternalSchema(db, 0);
}
return rc;
}