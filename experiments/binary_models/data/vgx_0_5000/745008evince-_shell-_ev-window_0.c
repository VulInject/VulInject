ev_window_set_page_mode (EvWindow         *window,
EvWindowPageMode  page_mode)
{
EvWindowPrivate *priv = GET_PRIVATE (window);
GtkWidget *child = NULL;
GtkWidget *real_child;

if (priv->page_mode == page_mode)
return;

priv->page_mode = page_mode;

switch (page_mode) {
case PAGE_MODE_DOCUMENT:
child = priv->view;
break;
case PAGE_MODE_PASSWORD:
child = priv->password_view;
break;
default:
g_assert_not_reached ();
}

real_child = gtk_bin_get_child (GTK_BIN (priv->scrolled_window));
if (child != real_child) {
gtk_container_remove (GTK_CONTAINER (priv->scrolled_window),
real_child);
gtk_container_add (GTK_CONTAINER (priv->scrolled_window),
child);
}
ev_window_update_actions_sensitivity (window);
}