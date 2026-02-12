HBA_STATUS
HBA_GetDiscoveredPortAttributes(
HBA_HANDLE		handle,
HBA_UINT32		portindex,
HBA_UINT32		discoveredportindex,
HBA_PORTATTRIBUTES	*portattributes)
{
HBA_STATUS		status;
HBA_LIBRARY_INFO	*lib_infop;
HBA_HANDLE		vendorHandle;
HBAGetDiscoveredPortAttributesFunc
GetDiscoveredPortAttributesFunc;

DEBUG(2, "HBA_GetDiscoveredPortAttributes", 0, 0, 0);

CHECKLIBRARY();
if (lib_infop->version == SMHBA) {
RELEASE_MUTEX_RETURN(&_hbaapi_LL_mutex, HBA_STATUS_ERROR_INCOMPATIBLE);
}

GetDiscoveredPortAttributesFunc =
lib_infop->ftable.functionTable.GetDiscoveredPortAttributesHandler;
if (GetDiscoveredPortAttributesFunc != NULL)  {
status = ((GetDiscoveredPortAttributesFunc)
(vendorHandle, portindex, discoveredportindex,
portattributes));
} else {
status = HBA_STATUS_ERROR_NOT_SUPPORTED;
}
RELEASE_MUTEX_RETURN(&_hbaapi_LL_mutex, status);
}