static int aw_dev_create_prof_name_list_v1(struct aw_device *aw_dev)
{
struct aw_prof_info *prof_info = &aw_dev->prof_info;
struct aw_prof_desc *prof_desc = prof_info->prof_desc;
int i;

if (!prof_desc) {
dev_err(aw_dev->dev, "prof_desc is NULL");
return -EINVAL;
}

prof_info->prof_name_list = devm_kzalloc(aw_dev->dev,
prof_info->count * PROFILE_STR_MAX,
GFP_KERNEL);
if (!prof_info->prof_name_list)
return -ENOMEM;

for (i = 0; i < prof_info->count; i++) {
prof_desc[i].id = i;
prof_info->prof_name_list[i] = prof_desc[i].prf_str;
dev_dbg(aw_dev->dev, "prof name is %s", prof_info->prof_name_list[i]);
}

return 0;
}