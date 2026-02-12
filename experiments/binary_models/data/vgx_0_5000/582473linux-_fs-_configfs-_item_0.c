}
EXPORT_SYMBOL(config_item_get_unless_zero);

static void config_item_cleanup(struct config_item *item)
{
const struct config_item_type *t = item->ci_type;
struct config_group *s = item->ci_group;
struct config_item *parent = item->ci_parent;

pr_debug("config_item %s: cleaning up\n", config_item_name(item));
if (item->ci_name != item->ci_namebuf)
kfree(item->ci_name);
item->ci_name = NULL;
if (t && t->ct_item_ops && t->ct_item_ops->release)
t->ct_item_ops->release(item);
if (s)
config_group_put(s);
if (parent)
config_item_put(parent);
}