int
spa_import_progress_set_state(spa_t *spa, spa_load_state_t load_state)
{
if (spa->spa_imp_kstat == NULL)
spa_import_progress_add(spa);

mutex_enter(&spa->spa_imp_kstat_lock);
if (spa->spa_imp_kstat != NULL) {
spa_import_progress_t *sip = spa->spa_imp_kstat->ks_data;
if (sip != NULL)
sip->sip_load_state.value.ui64 = (uint64_t)load_state;
}
mutex_exit(&spa->spa_imp_kstat_lock);

return (0);
}