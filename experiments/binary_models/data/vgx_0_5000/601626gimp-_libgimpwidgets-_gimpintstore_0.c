gimp_int_store_constructed (GObject *object)
{
GimpIntStore        *store = GIMP_INT_STORE (object);
GimpIntStorePrivate *priv  = GET_PRIVATE (store);
GType                types[GIMP_INT_STORE_NUM_COLUMNS];

G_OBJECT_CLASS (parent_class)->constructed (object);

types[GIMP_INT_STORE_VALUE]     = G_TYPE_INT;
types[GIMP_INT_STORE_LABEL]     = G_TYPE_STRING;
types[GIMP_INT_STORE_ABBREV]    = G_TYPE_STRING;
types[GIMP_INT_STORE_ICON_NAME] = G_TYPE_STRING;
types[GIMP_INT_STORE_PIXBUF]    = GDK_TYPE_PIXBUF;
types[GIMP_INT_STORE_USER_DATA] = (priv->user_data_type != G_TYPE_NONE ?
priv->user_data_type : G_TYPE_POINTER);

gtk_list_store_set_column_types (GTK_LIST_STORE (store),
GIMP_INT_STORE_NUM_COLUMNS, types);

gimp_int_store_add_empty (store);
}