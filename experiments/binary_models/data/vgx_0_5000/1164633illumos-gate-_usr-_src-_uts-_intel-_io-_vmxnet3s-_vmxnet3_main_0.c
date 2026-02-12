static int
vmxnet3_alloc_compring(vmxnet3_softc_t *dp, vmxnet3_compring_t *compRing)
{
size_t ringSize = compRing->size * sizeof (Vmxnet3_TxCompDesc);

if (vmxnet3_alloc_dma_mem_512(dp, &compRing->dma, ringSize,
B_TRUE) != DDI_SUCCESS) {
return (DDI_FAILURE);
}
(void) memset(compRing->dma.buf, 0, ringSize);
compRing->next2comp = 0;
compRing->gen = VMXNET3_INIT_GEN;

return (DDI_SUCCESS);
}