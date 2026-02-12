gimp_eraser_options_gui (GimpToolOptions *tool_options)
{
GObject   *config = G_OBJECT (tool_options);
GtkWidget *vbox   = gimp_paint_options_gui (tool_options);
GtkWidget *button;
gchar     *str;


str = g_strdup_printf (_("Anti erase  (%s)"),
gimp_get_mod_string (GDK_MOD1_MASK));

button = gimp_prop_check_button_new (config, "anti-erase", str);
gtk_box_pack_start (GTK_BOX (vbox), button, FALSE, FALSE, 0);

g_free (str);

return vbox;
}