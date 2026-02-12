static int ba_clone(struct ba_lun *ba_lun, u64 to_clone)
{
struct ba_lun_info *bali = ba_lun->ba_lun_handle;

if (validate_alloc(bali, to_clone)) {
pr_debug("%s: AUN=%llx not allocated on lun_id=%016llx\n",
__func__, to_clone, ba_lun->lun_id);
return -1;
}

pr_debug("%s: Received a request to clone AUN %llx on lun_id=%016llx\n",
__func__, to_clone, ba_lun->lun_id);

if (bali->aun_clone_map[to_clone] == MAX_AUN_CLONE_CNT) {
pr_debug("%s: AUN %llx on lun_id=%016llx hit max clones already\n",
__func__, to_clone, ba_lun->lun_id);
return -1;
}

bali->aun_clone_map[to_clone]++;

return 0;
}