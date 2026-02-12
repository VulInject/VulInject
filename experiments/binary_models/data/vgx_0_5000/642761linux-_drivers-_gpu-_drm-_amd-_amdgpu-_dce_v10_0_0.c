static int dce_v10_0_cursor_move_locked(struct drm_crtc *crtc,
int x, int y)
{
struct amdgpu_crtc *amdgpu_crtc = to_amdgpu_crtc(crtc);
struct amdgpu_device *adev = drm_to_adev(crtc->dev);
int xorigin = 0, yorigin = 0;

amdgpu_crtc->cursor_x = x;
amdgpu_crtc->cursor_y = y;


x += crtc->x;
y += crtc->y;
DRM_DEBUG("x %d y %d c->x %d c->y %d\n", x, y, crtc->x, crtc->y);

if (x < 0) {
xorigin = min(-x, amdgpu_crtc->max_cursor_width - 1);
x = 0;
}
if (y < 0) {
yorigin = min(-y, amdgpu_crtc->max_cursor_height - 1);
y = 0;
}

WREG32(mmCUR_POSITION + amdgpu_crtc->crtc_offset, (x << 16) | y);
WREG32(mmCUR_HOT_SPOT + amdgpu_crtc->crtc_offset, (xorigin << 16) | yorigin);
WREG32(mmCUR_SIZE + amdgpu_crtc->crtc_offset,
((amdgpu_crtc->cursor_width - 1) << 16) | (amdgpu_crtc->cursor_height - 1));

return 0;
}