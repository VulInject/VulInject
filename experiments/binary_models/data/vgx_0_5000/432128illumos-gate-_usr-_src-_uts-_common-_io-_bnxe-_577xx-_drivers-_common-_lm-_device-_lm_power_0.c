lm_status_t lm_del_nwuf( lm_device_t* pdev,
u32_t        mask_size,
u8_t*        byte_mask,
u8_t *       pattern )
{
lm_nwuf_t *nwuf;
u32_t k;
if(mask_size == 0 || mask_size > LM_NWUF_PATTERN_MASK_SIZE)
{
DbgBreakMsg("Invalid byte mask size\n");
return LM_STATUS_FAILURE;
}

nwuf = find_nwuf(&pdev->nwuf_list, mask_size, byte_mask, pattern);
if(nwuf)
{

nwuf->size = 0;
nwuf->crc32 = 0 ;
for(k = 0; k < LM_NWUF_PATTERN_MASK_SIZE; k++)
{
nwuf->mask[k] = 0;
}
for(k = 0; k < LM_NWUF_PATTERN_SIZE; k++)
{
nwuf->pattern[k] = 0xff;
}
pdev->nwuf_list.cnt--;
}
else
{

DbgMessage(pdev, WARN, "not exists nwuf entry. mask_size=%03d\n", mask_size );
return LM_STATUS_OBJECT_NOT_FOUND;
}
return LM_STATUS_SUCCESS;
} 