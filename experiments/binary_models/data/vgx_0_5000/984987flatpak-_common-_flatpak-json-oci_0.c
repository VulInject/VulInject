flatpak_oci_index_add_manifest (FlatpakOciIndex      *self,
const char           *ref,
FlatpakOciDescriptor *desc)
{
FlatpakOciManifestDescriptor *m;
int count;

if (ref != NULL)
flatpak_oci_index_remove_manifest (self, ref);

count = flatpak_oci_index_get_n_manifests (self);

m = manifest_desc_for_desc (desc, ref);
self->manifests = g_renew (FlatpakOciManifestDescriptor *, self->manifests, count + 2);
self->manifests[count] = m;
self->manifests[count + 1] = NULL;
}