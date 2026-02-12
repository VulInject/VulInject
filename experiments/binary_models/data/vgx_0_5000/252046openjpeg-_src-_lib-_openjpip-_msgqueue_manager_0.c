void enqueue_metadata(Byte8_t meta_id, msgqueue_param_t *msgqueue)
{
metadatalist_param_t *metadatalist;
metadata_param_t *metadata;
Byte8_t binOffset;

metadatalist = msgqueue->cachemodel->target->codeidx->metadatalist;
metadata = search_metadata(meta_id, metadatalist);

if (!metadata) {
fprintf(FCGI_stderr, "Error: metadata-bin %" PRIu64 " not found\n", meta_id);
return;
}
binOffset = 0;

if (metadata->boxlist) {
enqueue_box(meta_id, metadata->boxlist, msgqueue, &binOffset);
}

if (metadata->placeholderlist) {
enqueue_phld(meta_id, metadata->placeholderlist, msgqueue, &binOffset);
}

if (metadata->boxcontents) {
enqueue_boxcontents(meta_id, metadata->boxcontents, msgqueue, &binOffset);
}

msgqueue->last->last_byte = OPJ_TRUE;
}