}
EXPORT_SYMBOL(target_lun_is_rdonly);


struct se_dev_entry *core_get_se_deve_from_rtpi(
struct se_node_acl *nacl,
u16 rtpi)
{
struct se_dev_entry *deve;
struct se_lun *lun;
struct se_portal_group *tpg = nacl->se_tpg;

rcu_read_lock();
hlist_for_each_entry_rcu(deve, &nacl->lun_entry_hlist, link) {
lun = rcu_dereference(deve->se_lun);
if (!lun) {
pr_err("%s device entries device pointer is"
" NULL, but Initiator has access.\n",
tpg->se_tpg_tfo->get_fabric_name());
continue;
}
if (lun->lun_rtpi != rtpi)
continue;

kref_get(&deve->pr_kref);
rcu_read_unlock();

return deve;
}
rcu_read_unlock();

return NULL;
}