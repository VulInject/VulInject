gimp_combo_tag_entry_draw (GtkWidget *widget,
cairo_t   *cr)
{
GtkStyleContext *style = gtk_widget_get_style_context (widget);
GdkRectangle     icon_area;
gint             x, y;

cairo_save (cr);
GTK_WIDGET_CLASS (parent_class)->draw (widget, cr);
cairo_restore (cr);

gtk_entry_get_icon_area (GTK_ENTRY (widget), GTK_ENTRY_ICON_SECONDARY,
&icon_area);

x = icon_area.x + (icon_area.width  - 8) / 2;
y = icon_area.y + (icon_area.height - 8) / 2;

gtk_render_arrow (style, cr, G_PI, x, y, 8);

return FALSE;
}