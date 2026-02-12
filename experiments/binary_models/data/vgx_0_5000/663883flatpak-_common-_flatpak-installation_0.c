flatpak_installation_load_app_overrides (FlatpakInstallation *self,
const char          *app_id,
GCancellable        *cancellable,
GError             **error)
{
g_autoptr(FlatpakDir) dir = NULL;
char *metadata_contents;
gsize metadata_size;

dir = flatpak_installation_get_dir (self, error);
if (dir == NULL)
return NULL;

metadata_contents = flatpak_dir_load_override (dir, app_id, &metadata_size, NULL, error);
if (metadata_contents == NULL)
return NULL;

return metadata_contents;
}