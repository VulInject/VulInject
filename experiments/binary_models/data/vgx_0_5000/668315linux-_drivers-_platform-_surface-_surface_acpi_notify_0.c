static acpi_status san_rqsg(struct san_data *d, struct gsb_buffer *buffer)
{
struct gsb_data_rqsx *gsb_rqsg;
struct san_dgpu_event evt;
int status;

gsb_rqsg = san_validate_rqsx(d->dev, "RQSG", buffer);
if (!gsb_rqsg)
return AE_OK;

evt.category = gsb_rqsg->tc;
evt.target = gsb_rqsg->tid;
evt.command = gsb_rqsg->cid;
evt.instance = gsb_rqsg->iid;
evt.length = get_unaligned(&gsb_rqsg->cdl);
evt.payload = &gsb_rqsg->pld[0];

status = san_dgpu_notifier_call(&evt);
if (!status) {
gsb_rqsx_response_success(buffer, NULL, 0);
} else {
dev_err(d->dev, "rqsg: failed with error %d\n", status);
gsb_rqsx_response_error(buffer, status);
}

return AE_OK;
}