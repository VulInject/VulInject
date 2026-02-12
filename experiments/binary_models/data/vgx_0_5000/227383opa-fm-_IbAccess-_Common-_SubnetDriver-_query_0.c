FSTATUS
BuildCommonSAMad(
IN PQueryDetails pQueryElement,
IN uint16		 AttribId,
IN uint32		 RecordSize,
IN uint32		 MemAllocFlags
)
{

pQueryElement->u.pSaMad = (SA_MAD*)MemoryAllocate2AndClear(sizeof(SA_MAD),
MemAllocFlags, SUBNET_DRIVER_TAG);
if (pQueryElement->u.pSaMad == NULL)
{
return	FINSUFFICIENT_MEMORY;

}
FillCommonSADetails(pQueryElement, AttribId, RecordSize);

pQueryElement->TotalBytesInGmp = (pQueryElement->u.pSaMad->common.BaseVersion == IB_BASE_VERSION)
? IB_MAD_BLOCK_SIZE
: (sizeof(SA_MAD) - STL_SUBN_ADM_DATASIZE) + RecordSize;

return FSUCCESS;
}