static int
ksyms_detach(dev_info_t *devi, ddi_detach_cmd_t cmd)
{
if (cmd != DDI_DETACH)
return (DDI_FAILURE);
ddi_remove_minor_node(devi, NULL);
return (DDI_SUCCESS);
}

static struct cb_ops ksyms_cb_ops = {
ksyms_open,		
ksyms_close,		
nodev,			
nodev,			
nodev,			
ksyms_read,		
nodev,			
nodev,			
nodev,			
nodev,			
ksyms_segmap,		
nochpoll,		
ddi_prop_op,		
0,			
D_NEW | D_MP		
};