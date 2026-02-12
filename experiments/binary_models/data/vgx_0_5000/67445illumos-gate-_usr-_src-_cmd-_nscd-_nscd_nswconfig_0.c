static void _nscd_per_src_delete(void *, nss_backend_constr_t);

static nss_backend_finder_t _nscd_per_src = {
_nscd_per_src_lookup,
_nscd_per_src_delete,
0,
0 };

nss_backend_finder_t *_nscd_nss_finders = &_nscd_per_src;


nscd_db_t	***nscd_src_backend_db;
int		*nscd_src_backend_db_loaded;
static		rwlock_t nscd_src_backend_db_lock = DEFAULTRWLOCK;


nscd_nsw_config_t ***nscd_nsw_config;
static rwlock_t nscd_nsw_config_lock = DEFAULTRWLOCK;


nscd_cfg_id_t	*_nscd_cfg_nsw_src_all;
int		_nscd_cfg_num_nsw_src_all;

static void
free_nscd_nsw_config(
nscd_acc_data_t		*data)
{

nscd_nsw_config_t	*nsw_cfg = *(nscd_nsw_config_t **)data;
char			*me = "free_nscd_nsw_config";

_NSCD_LOG(NSCD_LOG_CONFIG, NSCD_LOG_LEVEL_DEBUG)
(me, "freeing nscd nsw config %p \n", nsw_cfg);
if (nsw_cfg == NULL)
return;

if (nsw_cfg->db_name != NULL)
free(nsw_cfg->db_name);
if (nsw_cfg->nsw_cfg_str != NULL)
free(nsw_cfg->nsw_cfg_str);
if (nsw_cfg->nsw_config != NULL)
(void) __nsw_freeconfig_v1(nsw_cfg->nsw_config);
if (nsw_cfg->src_idx != NULL)
free(nsw_cfg->src_idx);

free(nsw_cfg);
}