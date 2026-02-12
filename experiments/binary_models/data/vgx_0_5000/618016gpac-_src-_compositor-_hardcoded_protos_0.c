static Bool OffscreenGroup_GetNode(GF_Node *node, OffscreenGroup *og)
{
GF_FieldInfo field;
memset(og, 0, sizeof(OffscreenGroup));
og->sgprivate = node->sgprivate;

CHECK_FIELD("OffscreenGroup", 0, GF_SG_VRML_MFNODE);
og->children = *(GF_ChildNodeItem **) field.far_ptr;

CHECK_FIELD("OffscreenGroup", 1, GF_SG_VRML_SFINT32);
og->offscreen = * (SFInt32 *) field.far_ptr;

CHECK_FIELD("OffscreenGroup", 2, GF_SG_VRML_SFFLOAT);
og->opacity = * (SFFloat *) field.far_ptr;

return GF_TRUE;
}