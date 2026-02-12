clean_info_cb (cherokee_cache_entry_t *entry)
{
cherokee_iocache_entry_t *ioentry = IOCACHE_ENTRY(entry);

TRACE (ENTRIES, "Cleaning cached info: '%s': %s\n",
entry->key.buf, ioentry->mmaped ? "mmap": "no mmap");


ioentry->info      = iocache_nothing;
ioentry->state_ret = 123456;


if (ioentry->mmaped != NULL) {
munmap (ioentry->mmaped, ioentry->mmaped_len);

ioentry->mmaped     = NULL;
ioentry->mmaped_len = 0;
}


PRIV(entry)->mmap_expiration = 0;
PRIV(entry)->stat_expiration = 0;

return ret_ok;
}