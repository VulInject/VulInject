gimp_container_view_select_items (GimpContainerView *view,
GList             *viewables)
{
GimpContainerViewPrivate *private;
gboolean                  success = FALSE;

g_return_val_if_fail (GIMP_IS_CONTAINER_VIEW (view), FALSE);

private = GIMP_CONTAINER_VIEW_GET_PRIVATE (view);

if (gimp_container_frozen (private->container))
return TRUE;

g_signal_emit (view, view_signals[SELECT_ITEMS], 0,
viewables, NULL, &success);

return success;
}