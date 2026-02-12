static int
esxConnectNumOfStoragePools(virConnectPtr conn)
{
bool success = false;
int count = 0;
esxPrivate *priv = conn->privateData;
esxVI_HostInternetScsiHba *hostInternetScsiHba = NULL;
esxVI_HostInternetScsiHbaStaticTarget *target;

if (esxVI_LookupHostInternetScsiHba(priv->primary,
&hostInternetScsiHba) < 0) {
virReportError(VIR_ERR_INTERNAL_ERROR, "%s",
_("Unable to obtain iSCSI adapter"));
goto cleanup;
}


if (!hostInternetScsiHba) {

return 0;
}


for (target = hostInternetScsiHba->configuredStaticTarget;
target; target = target->_next) {
++count;
}

success = true;

cleanup:
esxVI_HostInternetScsiHba_Free(&hostInternetScsiHba);

return success ? count : -1;
}