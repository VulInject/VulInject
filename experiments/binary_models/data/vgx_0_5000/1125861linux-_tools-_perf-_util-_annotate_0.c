static void insert_source_line(struct rb_root *root, struct annotation_line *al,
struct annotation_options *opts)
{
struct annotation_line *iter;
struct rb_node **p = &root->rb_node;
struct rb_node *parent = NULL;
int i, ret;

while (*p != NULL) {
parent = *p;
iter = rb_entry(parent, struct annotation_line, rb_node);

ret = strcmp(iter->path, al->path);
if (ret == 0) {
for (i = 0; i < al->data_nr; i++) {
iter->data[i].percent_sum += annotation_data__percent(&al->data[i],
opts->percent_type);
}
return;
}

if (ret < 0)
p = &(*p)->rb_left;
else
p = &(*p)->rb_right;
}

for (i = 0; i < al->data_nr; i++) {
al->data[i].percent_sum = annotation_data__percent(&al->data[i],
opts->percent_type);
}

rb_link_node(&al->rb_node, parent, p);
rb_insert_color(&al->rb_node, root);
}