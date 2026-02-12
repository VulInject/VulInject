static void *__eeh_clear_pe_frozen_state(void *data, void *flag)
{
struct eeh_pe *pe = (struct eeh_pe *)data;
bool clear_sw_state = *(bool *)flag;
int i, rc = 1;

for (i = 0; rc && i < 3; i++)
rc = eeh_unfreeze_pe(pe, clear_sw_state);


if (rc) {
pr_warn("%s: Failure %d unfreezing PHB#%x-PE#%x\n",
__func__, rc, pe->phb->global_number, pe->addr);
return (void *)pe;
}

return NULL;
}