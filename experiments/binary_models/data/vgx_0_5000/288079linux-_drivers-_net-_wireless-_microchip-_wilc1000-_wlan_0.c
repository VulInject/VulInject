u32 wilc_get_chipid(struct wilc *wilc, bool update)
{
u32 chipid = 0;
u32 rfrevid = 0;

if (wilc->chipid == 0 || update) {
wilc->hif_func->hif_read_reg(wilc, WILC_CHIPID, &chipid);
wilc->hif_func->hif_read_reg(wilc, WILC_RF_REVISION_ID,
&rfrevid);
if (!is_wilc1000(chipid)) {
wilc->chipid = 0;
return wilc->chipid;
}
if (chipid == WILC_1000_BASE_ID_2A) { 
if (rfrevid != 0x1)
chipid = WILC_1000_BASE_ID_2A_REV1;
} else if (chipid == WILC_1000_BASE_ID_2B) { 
if (rfrevid == 0x4)
chipid = WILC_1000_BASE_ID_2B_REV1;
else if (rfrevid != 0x3)
chipid = WILC_1000_BASE_ID_2B_REV2;
}

wilc->chipid = chipid;
}
return wilc->chipid;
}