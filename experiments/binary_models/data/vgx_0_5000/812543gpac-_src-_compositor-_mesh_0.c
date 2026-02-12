void mesh_get_outline(GF_Mesh *mesh, GF_Path *path)
{
u32 i, j, cur, nb_pts;
mesh_reset(mesh);

mesh->mesh_type = MESH_LINESET;
mesh->flags |= (MESH_IS_2D | MESH_NO_TEXTURE);

gf_path_flatten(path);

cur = 0;
for (i=0; i<path->n_contours; i++) {
nb_pts = 1+path->contours[i] - cur;
for (j=0; j<nb_pts; j++) {
GF_Point2D pt = path->points[j+cur];
if (j) mesh_set_line(mesh, mesh->v_count-1, mesh->v_count);
mesh_set_vertex(mesh, pt.x, pt.y, 0, 0, 0, FIX_ONE, 0, 0);
}
cur += nb_pts;
}
mesh_update_bounds(mesh);
}