void gf_scene_init_storage(GF_Scene *scene, GF_Node *node)
{
GF_SceneNamespace *scene_ns;
M_Storage *storage = (M_Storage *) node;

if (!storage->name.buffer || !strlen(storage->name.buffer) ) return;
if (!storage->storageList.count) return;

storage->on_forceSave = on_force_save;
storage->on_forceRestore = on_force_restore;
gf_node_set_callback_function(node, gf_storage_traverse);
gf_node_set_private(node, scene);

scene_ns = scene->root_od->scene_ns;
while (scene->root_od->parentscene) {
if (scene->root_od->parentscene->root_od->scene_ns != scene_ns)
break;
scene = scene->root_od->parentscene;
}

gf_list_add(scene->storages, node);
if (storage->_auto) gf_storage_load(storage);

if (gf_sys_is_cov_mode()) {
Bool aptr;
on_force_save(NULL, NULL);
on_force_restore(NULL, NULL);
storage_parse_sf(&aptr, GF_SG_VRML_SFBOOL, "true");

}
}