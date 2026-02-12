static void compute_ke_and_nonce(struct logger *logger,
struct task *task,
int thread_unused UNUSED)
{
if (task->dh != NULL) {
task->local_secret = calc_dh_local_secret(task->dh, logger);
if (DBGP(DBG_CRYPT)) {
DBG_log("NSS: Local DH %s secret (pointer): %p",
task->dh->common.fqn, task->local_secret);
}
}
task->nonce = alloc_rnd_chunk(DEFAULT_NONCE_SIZE, "nonce");
if (DBGP(DBG_CRYPT)) {
DBG_dump_hunk("Generated nonce:", task->nonce);
}
}