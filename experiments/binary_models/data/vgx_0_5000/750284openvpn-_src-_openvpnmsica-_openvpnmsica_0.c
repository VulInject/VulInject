static UINT
setup_sequence(
_In_ MSIHANDLE hInstall,
_In_z_ LPCTSTR szProperty,
_In_ struct msica_arg_seq *seq)
{
UINT uiResult;
LPTSTR szSequence = msica_arg_seq_join(seq);
uiResult = MsiSetProperty(hInstall, szProperty, szSequence);
free(szSequence);
if (uiResult != ERROR_SUCCESS)
{
SetLastError(uiResult); 
msg(M_NONFATAL | M_ERRNO, "%s: MsiSetProperty(\"%" PRIsLPTSTR "\") failed", __FUNCTION__, szProperty);
return uiResult;
}
return ERROR_SUCCESS;
}