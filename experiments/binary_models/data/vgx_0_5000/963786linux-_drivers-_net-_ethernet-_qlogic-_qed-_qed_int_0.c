int qed_int_register_cb(struct qed_hwfn *p_hwfn,
qed_int_comp_cb_t comp_cb,
void *cookie, u8 *sb_idx, __le16 **p_fw_cons)
{
struct qed_sb_sp_info *p_sp_sb = p_hwfn->p_sp_sb;
int rc = -ENOMEM;
u8 pi;


for (pi = 0; pi < ARRAY_SIZE(p_sp_sb->pi_info_arr); pi++) {
if (p_sp_sb->pi_info_arr[pi].comp_cb)
continue;

p_sp_sb->pi_info_arr[pi].comp_cb = comp_cb;
p_sp_sb->pi_info_arr[pi].cookie = cookie;
*sb_idx = pi;
*p_fw_cons = &p_sp_sb->sb_info.sb_virt->pi_array[pi];
rc = 0;
break;
}

return rc;
}