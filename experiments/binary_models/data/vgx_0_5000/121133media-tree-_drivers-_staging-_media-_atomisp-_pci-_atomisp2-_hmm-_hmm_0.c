void hmm_free(ia_css_ptr virt)
{
struct hmm_buffer_object *bo;

WARN_ON(!virt);

bo = hmm_bo_device_search_start(&bo_device, (unsigned int)virt);

if (!bo) {
dev_err(atomisp_dev,
"can not find buffer object start with "
"address 0x%x\n", (unsigned int)virt);
return;
}

hmm_mem_stat.tol_cnt -= bo->pgnr;

hmm_bo_unbind(bo);
hmm_bo_free_pages(bo);
hmm_bo_unref(bo);
}