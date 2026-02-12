static int __rebalance3(struct dm_btree_info *info, struct btree_node *parent,
struct child *l, struct child *c, struct child *r)
{
struct btree_node *left = l->n;
struct btree_node *center = c->n;
struct btree_node *right = r->n;

uint32_t nr_left = le32_to_cpu(left->header.nr_entries);
uint32_t nr_center = le32_to_cpu(center->header.nr_entries);
uint32_t nr_right = le32_to_cpu(right->header.nr_entries);

unsigned int threshold = merge_threshold(left) * 4 + 1;

if ((left->header.max_entries != center->header.max_entries) ||
(center->header.max_entries != right->header.max_entries)) {
DMERR("bad btree metadata, max_entries differ");
return -EILSEQ;
}

if ((nr_left + nr_center + nr_right) < threshold) {
return delete_center_node(info, parent, l, c, r, left, center, right,
nr_left, nr_center, nr_right);
}

return redistribute3(info, parent, l, c, r, left, center, right,
nr_left, nr_center, nr_right);
}