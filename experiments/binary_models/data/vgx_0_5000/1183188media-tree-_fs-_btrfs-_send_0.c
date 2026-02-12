static struct orphan_dir_info *
add_orphan_dir_info(struct send_ctx *sctx, u64 dir_ino)
{
struct rb_node **p = &sctx->orphan_dirs.rb_node;
struct rb_node *parent = NULL;
struct orphan_dir_info *entry, *odi;

odi = kmalloc(sizeof(*odi), GFP_KERNEL);
if (!odi)
return ERR_PTR(-ENOMEM);
odi->ino = dir_ino;
odi->gen = 0;

while (*p) {
parent = *p;
entry = rb_entry(parent, struct orphan_dir_info, node);
if (dir_ino < entry->ino) {
p = &(*p)->rb_left;
} else if (dir_ino > entry->ino) {
p = &(*p)->rb_right;
} else {
kfree(odi);
return entry;
}
}

rb_link_node(&odi->node, parent, p);
rb_insert_color(&odi->node, &sctx->orphan_dirs);
return odi;
}