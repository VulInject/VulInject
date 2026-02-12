long
wlan_smart_config_set_prefix(char* cNewPrefix)
{
long ret;
unsigned char *ptr;
unsigned char *args;

ret = EFAIL;
ptr = tSLInformation.pucTxCommandBuffer;
args = (ptr + HEADERS_SIZE_CMD);

if (cNewPrefix == NULL)
return ret;
else	
{
*cNewPrefix = 'T';
*(cNewPrefix + 1) = 'T';
*(cNewPrefix + 2) = 'T';
}

ARRAY_TO_STREAM(args, cNewPrefix, SL_SIMPLE_CONFIG_PREFIX_LENGTH);

hci_command_send(HCI_CMND_WLAN_IOCTL_SIMPLE_CONFIG_SET_PREFIX, ptr, 
SL_SIMPLE_CONFIG_PREFIX_LENGTH);


SimpleLinkWaitEvent(HCI_CMND_WLAN_IOCTL_SIMPLE_CONFIG_SET_PREFIX, &ret);

return(ret);    
}