void
atascsi_disk_vpd_ident(struct scsi_xfer *xs)
{
struct scsi_link        *link = xs->sc_link;
struct atascsi_port	*ap;
struct {
struct scsi_vpd_hdr	hdr;
struct scsi_vpd_devid_hdr devid_hdr;
u_int8_t		devid[68];
}			pg;
u_int8_t		*p;
size_t			pg_len;

ap = atascsi_lookup_port(link);
bzero(&pg, sizeof(pg));
if (letoh16(ap->ap_identify.features87) & ATA_ID_F87_WWN) {
pg_len = 8;

pg.devid_hdr.pi_code = VPD_DEVID_CODE_BINARY;
pg.devid_hdr.flags = VPD_DEVID_ASSOC_LU | VPD_DEVID_TYPE_NAA;

ata_swapcopy(&ap->ap_identify.naa_ieee_oui, pg.devid, pg_len);
} else {
pg_len = 68;

pg.devid_hdr.pi_code = VPD_DEVID_CODE_ASCII;
pg.devid_hdr.flags = VPD_DEVID_ASSOC_LU | VPD_DEVID_TYPE_T10;

p = pg.devid;
bcopy("ATA     ", p, 8);
p += 8;
ata_swapcopy(ap->ap_identify.model, p,
sizeof(ap->ap_identify.model));
p += sizeof(ap->ap_identify.model);
ata_swapcopy(ap->ap_identify.serial, p,
sizeof(ap->ap_identify.serial));
}

pg.devid_hdr.len = pg_len;
pg_len += sizeof(pg.devid_hdr);

pg.hdr.device = T_DIRECT;
pg.hdr.page_code = SI_PG_DEVID;
_lto2b(pg_len, pg.hdr.page_length);
pg_len += sizeof(pg.hdr);

bcopy(&pg, xs->data, MIN(pg_len, xs->datalen));

atascsi_done(xs, XS_NOERROR);
}