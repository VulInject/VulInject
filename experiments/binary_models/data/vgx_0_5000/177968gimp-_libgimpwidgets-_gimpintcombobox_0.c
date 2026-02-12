gimp_int_combo_box_set_sensitivity (GimpIntComboBox        *combo_box,
GimpIntSensitivityFunc  func,
gpointer                data,
GDestroyNotify          destroy)
{
GimpIntComboBoxPrivate *priv;

g_return_if_fail (GIMP_IS_INT_COMBO_BOX (combo_box));

priv = GET_PRIVATE (combo_box);

if (priv->sensitivity_destroy)
{
GDestroyNotify d = priv->sensitivity_destroy;

priv->sensitivity_destroy = NULL;
d (priv->sensitivity_data);
}

priv->sensitivity_func    = func;
priv->sensitivity_data    = data;
priv->sensitivity_destroy = destroy;

gimp_int_combo_box_create_cells (combo_box);
}