static int test_device(enum AVHWDeviceType type, const char *name,
const char *device, AVDictionary *opts, int flags)
{
AVBufferRef *ref;
AVHWDeviceContext *dev;
int err;

err = av_hwdevice_ctx_create(&ref, type, device, opts, flags);
if (err < 0) {
fprintf(stderr, "Failed to create %s device: %d.\n", name, err);
return 1;
}

dev = (AVHWDeviceContext*)ref->data;
if (dev->type != type) {
fprintf(stderr, "Device created as type %d has type %d.\n",
type, dev->type);
av_buffer_unref(&ref);
return -1;
}

fprintf(stderr, "Device type %s successfully created.\n", name);

err = test_derivation(ref, name);

av_buffer_unref(&ref);

return err;
}

static const struct {
enum AVHWDeviceType type;
const char *possible_devices[5];
} test_devices[] = {