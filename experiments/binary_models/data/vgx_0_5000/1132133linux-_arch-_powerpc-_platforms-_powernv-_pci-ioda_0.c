static struct pnv_ioda_pe *pnv_ioda_init_pe(struct pnv_phb *phb, int pe_no)
{
s64 rc;

phb->ioda.pe_array[pe_no].phb = phb;
phb->ioda.pe_array[pe_no].pe_number = pe_no;
phb->ioda.pe_array[pe_no].dma_setup_done = false;


rc = opal_pci_eeh_freeze_clear(phb->opal_id, pe_no,
OPAL_EEH_ACTION_CLEAR_FREEZE_ALL);
if (rc != OPAL_SUCCESS && rc != OPAL_UNSUPPORTED)
pr_warn("%s: Error %lld unfreezing PHB#%x-PE#%x\n",
__func__, rc, phb->hose->global_number, pe_no);

return &phb->ioda.pe_array[pe_no];
}