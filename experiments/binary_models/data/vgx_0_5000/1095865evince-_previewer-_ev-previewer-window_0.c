ev_previewer_window_set_print_settings (EvPreviewerWindow *window,
const gchar       *print_settings,
GError           **error)
{
GMappedFile *file;

g_return_val_if_fail (EV_IS_PREVIEWER_WINDOW (window), FALSE);
g_return_val_if_fail (print_settings != NULL, FALSE);
g_return_val_if_fail (error == NULL || *error == NULL, FALSE);

file = g_mapped_file_new (print_settings, FALSE, error);
if (file == NULL)
return FALSE;

return ev_previewer_window_set_print_settings_take_file (window, file, error);
}