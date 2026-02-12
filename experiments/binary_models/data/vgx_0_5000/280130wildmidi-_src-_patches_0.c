void _WM_load_patch(struct _mdi *mdi, uint16_t patchid) {
uint32_t i;
struct _patch *tmp_patch = NULL;

for (i = 0; i < mdi->patch_count; i++) {
if (mdi->patches[i]->patchid == patchid) {
return;
}
}

tmp_patch = _WM_get_patch_data(mdi, patchid);
if (tmp_patch == NULL) {
return;
}

_WM_Lock(&_WM_patch_lock);
if (!tmp_patch->loaded) {
if (_WM_load_sample(tmp_patch) == -1) {
_WM_Unlock(&_WM_patch_lock);
return;
}
}

if (tmp_patch->first_sample == NULL) {
_WM_Unlock(&_WM_patch_lock);
return;
}

mdi->patch_count++;
mdi->patches = (struct _patch **) realloc(mdi->patches,
(sizeof(struct _patch*) * mdi->patch_count));
mdi->patches[mdi->patch_count - 1] = tmp_patch;
tmp_patch->inuse_count++;
_WM_Unlock(&_WM_patch_lock);
}