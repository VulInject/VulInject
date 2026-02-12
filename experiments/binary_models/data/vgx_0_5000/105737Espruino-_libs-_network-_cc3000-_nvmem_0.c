signed long 
nvmem_create_entry(unsigned long ulFileId, unsigned long ulNewLen)
{
unsigned char *ptr; 
unsigned char *args;
unsigned short retval;

ptr = tSLInformation.pucTxCommandBuffer;
args = (ptr + HEADERS_SIZE_CMD);


args = UINT32_TO_STREAM(args, ulFileId);
args = UINT32_TO_STREAM(args, ulNewLen);


hci_command_send(HCI_CMND_NVMEM_CREATE_ENTRY,ptr, NVMEM_CREATE_PARAMS_LEN);

SimpleLinkWaitEvent(HCI_CMND_NVMEM_CREATE_ENTRY, &retval);

return(retval);
}