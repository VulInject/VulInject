static int
cmd_addfilt(tvbuff_t *tvb, int offset, proto_tree *pt)
{
proto_tree  *tree;
int         blocks, i, length;
int padding;

tree = proto_tree_add_subtree(pt, tvb, offset, 1, ett_gryphon_flags, NULL, "Flags");
proto_tree_add_item(tree, hf_gryphon_addfilt_pass, tvb, offset, 1, ENC_BIG_ENDIAN);
proto_tree_add_item(tree, hf_gryphon_addfilt_active, tvb, offset, 1, ENC_BIG_ENDIAN);
offset += 1;

blocks = tvb_get_guint8(tvb, offset);
proto_tree_add_item(pt, hf_gryphon_addfilt_blocks, tvb, offset, 1, ENC_BIG_ENDIAN);
proto_tree_add_item(pt, hf_gryphon_reserved, tvb, offset+1, 6, ENC_NA);
offset += 7;

for (i = 1; i <= blocks; i++) {
length = tvb_get_ntohs(tvb, offset+2) + 8;

padding = 3 - (length + 3) % 4;
tree = proto_tree_add_subtree_format(pt, tvb, offset, length + padding, ett_gryphon_cmd_filter_block, NULL, "Filter block %d", i);
offset = filter_block(tvb, offset, tree);
}
return offset;
}