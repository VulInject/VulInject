static void dump_spherical(void *ctx, AVCodecParameters *par, AVPacketSideData *sd)
{
AVSphericalMapping *spherical = (AVSphericalMapping *)sd->data;
double yaw, pitch, roll;

if (sd->size < sizeof(*spherical)) {
av_log(ctx, AV_LOG_INFO, "invalid data");
return;
}

av_log(ctx, AV_LOG_INFO, "%s ", av_spherical_projection_name(spherical->projection));

yaw = ((double)spherical->yaw) / (1 << 16);
pitch = ((double)spherical->pitch) / (1 << 16);
roll = ((double)spherical->roll) / (1 << 16);
av_log(ctx, AV_LOG_INFO, "(%f/%f/%f) ", yaw, pitch, roll);

if (spherical->projection == AV_SPHERICAL_EQUIRECTANGULAR_TILE) {
size_t l, t, r, b;
av_spherical_tile_bounds(spherical, par->width, par->height,
&l, &t, &r, &b);
av_log(ctx, AV_LOG_INFO, "[%zu, %zu, %zu, %zu] ", l, t, r, b);
} else if (spherical->projection == AV_SPHERICAL_CUBEMAP) {
av_log(ctx, AV_LOG_INFO, "[pad %"PRIu32"] ", spherical->padding);
}
}