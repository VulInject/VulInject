static UINT xf_cliprdr_send_client_capabilities(xfClipboard* clipboard)
{
CLIPRDR_CAPABILITIES capabilities = { 0 };
CLIPRDR_GENERAL_CAPABILITY_SET generalCapabilitySet = { 0 };

WINPR_ASSERT(clipboard);

capabilities.cCapabilitiesSets = 1;
capabilities.capabilitySets = (CLIPRDR_CAPABILITY_SET*)&(generalCapabilitySet);
generalCapabilitySet.capabilitySetType = CB_CAPSTYPE_GENERAL;
generalCapabilitySet.capabilitySetLength = 12;
generalCapabilitySet.version = CB_CAPS_VERSION_2;
generalCapabilitySet.generalFlags = CB_USE_LONG_FORMAT_NAMES;

WINPR_ASSERT(clipboard);
if (clipboard->streams_supported && clipboard->file_formats_registered)
generalCapabilitySet.generalFlags |=
CB_STREAM_FILECLIP_ENABLED | CB_FILECLIP_NO_FILE_PATHS | CB_HUGE_FILE_SUPPORT_ENABLED;

clipboard->file_capability_flags = generalCapabilitySet.generalFlags;

WINPR_ASSERT(clipboard->context);
WINPR_ASSERT(clipboard->context->ClientCapabilities);
return clipboard->context->ClientCapabilities(clipboard->context, &capabilities);
}