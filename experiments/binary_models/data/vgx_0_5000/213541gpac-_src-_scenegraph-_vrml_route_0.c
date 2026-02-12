GF_Route *gf_sg_route_new(GF_SceneGraph *sg, GF_Node *fromNode, u32 fromField, GF_Node *toNode, u32 toField)
{
GF_Route *r;
if (!sg || !toNode || !fromNode) return NULL;

if ( (r = gf_sg_route_exists(sg, fromNode, fromField, toNode, toField)) )
return r;

GF_SAFEALLOC(r, GF_Route)
if (!r) return NULL;
r->FromNode = fromNode;
r->FromField.fieldIndex = fromField;
r->ToNode = toNode;
r->ToField.fieldIndex = toField;
r->graph = sg;

if (!fromNode->sgprivate->interact) {
GF_SAFEALLOC(fromNode->sgprivate->interact, struct _node_interactive_ext);
if (!fromNode->sgprivate->interact) {
GF_LOG(GF_LOG_ERROR, GF_LOG_SCENE, ("[VRML] Failed to create interact storage\n"));
gf_free(r);
return NULL;
}
}
if (!fromNode->sgprivate->interact->routes) fromNode->sgprivate->interact->routes = gf_list_new();
gf_list_add(fromNode->sgprivate->interact->routes, r);
gf_list_add(sg->Routes, r);
return r;
}