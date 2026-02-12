static struct fw_page *find_fw_page(struct mlx5_core_dev *dev, u64 addr,
u32 function)
{
struct fw_page *result = NULL;
struct rb_root *root;
struct rb_node *tmp;
struct fw_page *tfp;

root = xa_load(&dev->priv.page_root_xa, function);
if (WARN_ON_ONCE(!root))
return NULL;

tmp = root->rb_node;

while (tmp) {
tfp = rb_entry(tmp, struct fw_page, rb_node);
if (tfp->addr < addr) {
tmp = tmp->rb_left;
} else if (tfp->addr > addr) {
tmp = tmp->rb_right;
} else {
result = tfp;
break;
}
}

return result;
}