Status_t
mai_filter_mclass(IBhandle_t devh, uint32_t flags, int ftype,
IBhandle_t * filterh, uint8_t mclass)
{
Filter_t        f;
int             rc;

IB_ENTER(__func__, devh, flags, filterh, mclass);

memset(&f, 0, sizeof(f));

f.value.mclass = mclass;
f.mask.mclass = MAI_FMASK_ALL;
f.type = ftype;
f.active = MAI_ACT_FMASK | MAI_ACT_TYPE;
MAI_SET_FILTER_NAME((&f), "mclass");

rc = mai_filter_hcreate(devh, &f, flags, filterh);
IB_EXIT(__func__, rc);
return (rc);

}