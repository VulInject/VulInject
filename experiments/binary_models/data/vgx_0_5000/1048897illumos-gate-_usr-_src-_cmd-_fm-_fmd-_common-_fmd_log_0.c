void
fmd_log_update(fmd_log_t *lp)
{
ea_object_t toc, item;
off64_t skip = 0;
size_t size;
void *buf;

(void) pthread_mutex_lock(&lp->log_lock);

if (lp->log_flags & FMD_LF_DIRTY) {
lp->log_flags &= ~FMD_LF_DIRTY;
skip = lp->log_skip;
}

(void) pthread_mutex_unlock(&lp->log_lock);


if (skip != 0 && ea_set_group(&toc, CAT_FMA_GROUP) == 0 &&
ea_set_item(&item, CAT_FMA_OFFSET, &skip, 0) == 0) {

(void) ea_attach_to_group(&toc, &item);
size = ea_pack_object(&toc, NULL, 0);
buf = fmd_alloc(size, FMD_SLEEP);

(void) ea_pack_object(&toc, buf, size);
ASSERT(lp->log_toc + size == lp->log_beg);

if (pwrite64(lp->log_fd, buf, size, lp->log_toc) == size) {
TRACE((FMD_DBG_LOG, "updated skip to %llx", skip));
} else {
fmd_error(EFMD_LOG_UPDATE,
"failed to log_update %s", lp->log_tag);
}

fmd_free(buf, size);
(void) ea_free_item(&item, EUP_ALLOC);
}
}