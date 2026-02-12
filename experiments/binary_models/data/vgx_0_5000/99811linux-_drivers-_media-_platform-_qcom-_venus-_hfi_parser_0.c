static void
parse_caps(struct venus_core *core, u32 codecs, u32 domain, void *data)
{
struct hfi_capabilities *caps = data;
struct hfi_capability *cap = caps->data;
u32 num_caps = caps->num_capabilities;
struct hfi_capability caps_arr[MAX_CAP_ENTRIES] = {};

if (num_caps > MAX_CAP_ENTRIES)
return;

memcpy(caps_arr, cap, num_caps * sizeof(*cap));

for_each_codec(core->caps, ARRAY_SIZE(core->caps), codecs, domain,
fill_caps, caps_arr, num_caps);
}