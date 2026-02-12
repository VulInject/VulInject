static int apply_cropping(AVCodecContext *avctx, AVFrame *frame)
{

if (frame->crop_left >= INT_MAX - frame->crop_right        ||
frame->crop_top  >= INT_MAX - frame->crop_bottom       ||
(frame->crop_left + frame->crop_right) >= frame->width ||
(frame->crop_top + frame->crop_bottom) >= frame->height) {
av_log(avctx, AV_LOG_WARNING,
"Invalid cropping information set by a decoder: "
"%"SIZE_SPECIFIER"/%"SIZE_SPECIFIER"/%"SIZE_SPECIFIER"/%"SIZE_SPECIFIER" "
"(frame size %dx%d). This is a bug, please report it\n",
frame->crop_left, frame->crop_right, frame->crop_top, frame->crop_bottom,
frame->width, frame->height);
frame->crop_left   = 0;
frame->crop_right  = 0;
frame->crop_top    = 0;
frame->crop_bottom = 0;
return 0;
}

if (!avctx->apply_cropping)
return 0;

return av_frame_apply_cropping(frame, avctx->flags & AV_CODEC_FLAG_UNALIGNED ?
AV_FRAME_CROP_UNALIGNED : 0);
}