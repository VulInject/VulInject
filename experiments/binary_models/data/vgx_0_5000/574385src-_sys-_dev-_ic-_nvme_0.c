void
nvme_scsi_inquiry(struct scsi_xfer *xs)
{
struct scsi_inquiry_data inq;
struct scsi_link *link = xs->sc_link;
struct nvme_softc *sc = link->bus->sb_adapter_softc;
struct nvm_identify_namespace *ns;

ns = sc->sc_namespaces[link->target].ident;

memset(&inq, 0, sizeof(inq));

inq.device = T_DIRECT;
inq.version = SCSI_REV_SPC4;
inq.response_format = SID_SCSI2_RESPONSE;
inq.additional_length = SID_SCSI2_ALEN;
inq.flags |= SID_CmdQue;
memcpy(inq.vendor, "NVMe    ", sizeof(inq.vendor));
memcpy(inq.product, sc->sc_identify.mn, sizeof(inq.product));
memcpy(inq.revision, sc->sc_identify.fr, sizeof(inq.revision));

scsi_copy_internal_data(xs, &inq, sizeof(inq));

xs->error = XS_NOERROR;
scsi_done(xs);
}