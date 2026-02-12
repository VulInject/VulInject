static DEFINE_MUTEX(ipu_prg_list_mutex);
static LIST_HEAD(ipu_prg_list);

struct ipu_prg *
ipu_prg_lookup_by_phandle(struct device *dev, const char *name, int ipu_id)
{
struct device_node *prg_node = of_parse_phandle(dev->of_node,
name, 0);
struct ipu_prg *prg;

mutex_lock(&ipu_prg_list_mutex);
list_for_each_entry(prg, &ipu_prg_list, list) {
if (prg_node == prg->dev->of_node) {
mutex_unlock(&ipu_prg_list_mutex);
device_link_add(dev, prg->dev,
DL_FLAG_AUTOREMOVE_CONSUMER);
prg->id = ipu_id;
of_node_put(prg_node);
return prg;
}
}
mutex_unlock(&ipu_prg_list_mutex);

of_node_put(prg_node);

return NULL;
}