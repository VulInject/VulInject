static Bool DepthGroup_GetNode(GF_Node *node, DepthGroup *dg)
{
GF_FieldInfo field;
memset(dg, 0, sizeof(DepthGroup));
dg->sgprivate = node->sgprivate;

CHECK_FIELD("DepthGroup", 0, GF_SG_VRML_MFNODE);
dg->children = *(GF_ChildNodeItem **) field.far_ptr;

CHECK_FIELD("DepthGroup", 1, GF_SG_VRML_SFFLOAT);
dg->depth_gain = * (SFFloat *) field.far_ptr;

CHECK_FIELD("DepthGroup", 2, GF_SG_VRML_SFFLOAT);
dg->depth_offset = * (SFFloat *) field.far_ptr;

return GF_TRUE;
}