gimp_tool_transform_3d_grid_motion_vanishing_point (GimpToolTransform3DGrid *grid,
gdouble                  x,
gdouble                  y)
{
GimpToolTransform3DGridPrivate *priv = grid->priv;
GimpCoords                      c    = {};
gdouble                         pivot_x;
gdouble                         pivot_y;

if (! gimp_tool_transform_3d_grid_constrain (grid,
x,            y,
priv->last_x, priv->last_y,
&x,           &y))
{
return FALSE;
}

c.x = x;
c.y = y;

GIMP_TOOL_WIDGET_CLASS (parent_class)->motion (GIMP_TOOL_WIDGET (grid),
&c, 0, 0);

g_object_get (grid,
"pivot-x", &pivot_x,
"pivot-y", &pivot_y,
NULL);

g_object_set (grid,
"camera-x", pivot_x,
"camera-y", pivot_y,
NULL);

priv->last_x = c.x;
priv->last_y = c.y;

return TRUE;
}