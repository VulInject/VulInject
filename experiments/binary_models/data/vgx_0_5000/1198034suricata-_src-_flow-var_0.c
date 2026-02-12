void FlowVarAddIntNoLock(Flow *f, uint32_t idx, uint32_t value)
{
FlowVar *fv = FlowVarGet(f, idx);
if (fv == NULL) {
fv = SCMalloc(sizeof(FlowVar));
if (unlikely(fv == NULL))
return;

fv->type = DETECT_FLOWVAR;
fv->datatype = FLOWVAR_TYPE_INT;
fv->idx = idx;
fv->data.fv_int.value= value;
fv->next = NULL;

GenericVarAppend(&f->flowvar, (GenericVar *)fv);
} else {
FlowVarUpdateInt(fv, value);
}
}