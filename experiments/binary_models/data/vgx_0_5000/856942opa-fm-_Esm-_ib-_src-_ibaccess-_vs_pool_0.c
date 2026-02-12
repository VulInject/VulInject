







static const uint32_t sentinel0 = 0xB00A110C;
static const uint32_t sentinel1 = 0xE00A110C;

Status_t
vs_implpool_create(Pool_t *poolp, uint32_t options, uint8_t *name, void *address, uint32_t size) {

IB_ENTER (function, poolp, options, address, size);



if (poolp == NULL) {
IB_EXIT (function, VSTATUS_ILLPARM);
return(VSTATUS_ILLPARM);
}


if(sizeof (Implpriv_Pool_t) > sizeof (poolp->opaque))
{
IB_LOG_ERROR ("Implpriv_Pool_t too big:", sizeof (Implpriv_Pool_t));
IB_EXIT (function, VSTATUS_ILLPARM);
return VSTATUS_ILLPARM;
}



strncpy((char*)poolp->name, (char *)name, VS_NAME_MAX);
poolp->options = options;
((Implpriv_Pool_t*)poolp->opaque)->buffers = NULL;

IB_EXIT (function, VSTATUS_OK);
return(VSTATUS_OK);
}