static int
qede_config_edev(qede_t *qede)
{
int status, i;
struct ecore_dev *edev = &qede->edev;
struct ecore_pf_params *params;

for (i = 0; i < qede->num_hwfns; i++) {
struct ecore_hwfn *p_hwfn = &edev->hwfns[i];
params = &p_hwfn->pf_params; 
memset((void *)params, 0, sizeof (struct ecore_pf_params));
params->eth_pf_params.num_cons = 32;
}
status = ecore_resc_alloc(edev);
if (status != ECORE_SUCCESS) {
cmn_err(CE_NOTE, "%s: Could not allocate ecore resources\n",
__func__);
return (DDI_ENOMEM);
}
ecore_resc_setup(edev);
return (DDI_SUCCESS);
}