static struct ovsdb_error * OVS_WARN_UNUSED_RESULT
ovsdb_storage_open__(const char *filename, bool rw, bool allow_clustered,
struct ovsdb_storage **storagep)
{
*storagep = NULL;

struct ovsdb_log *log;
struct ovsdb_error *error;
error = ovsdb_log_open(filename, OVSDB_MAGIC"|"RAFT_MAGIC,
rw ? OVSDB_LOG_READ_WRITE : OVSDB_LOG_READ_ONLY,
-1, &log);
if (error) {
return error;
}

struct raft *raft = NULL;
if (!strcmp(ovsdb_log_get_magic(log), RAFT_MAGIC)) {
if (!allow_clustered) {
ovsdb_log_close(log);
return ovsdb_error(NULL, "%s: cannot apply this operation to "
"clustered database file", filename);
}
error = raft_open(log, &raft);
log = NULL;
if (error) {
return error;
}
}

struct ovsdb_storage *storage = xzalloc(sizeof *storage);
storage->log = log;
storage->raft = raft;
schedule_next_snapshot(storage, false);
*storagep = storage;
return NULL;
}