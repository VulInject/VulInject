static VAR1 FUN1(VAR2 *VAR3, const VAR1 *VAR4, const VAR1 *VAR5, size_t VAR6, VAR1 *VAR7, size_t VAR8, struct VAR9 *VAR10)
{
    VAR11 *VAR12;
    struct virtio_scsi_cmd_req VAR13 = {{0}};
    struct virtio_scsi_cmd_resp VAR14 = {.VAR15 = 0xff, .VAR16 = 0xff};
    uint64_t VAR17, VAR18, VAR19 = 0, VAR20 = 0;
    uint8_t VAR15;
    uint32_t VAR21;
    VAR12 = VAR3->VAR12[2];
    VAR13.VAR22[0] = 1;
    VAR13.VAR22[1] = 1;
    memcpy(VAR13.VAR4, VAR4, VAR23);
    VAR17 = FUN2(VAR3, sizeof(VAR13), &VAR13);
    VAR21 = FUN3(VAR12, VAR17, sizeof(VAR13), false, true);
    if (VAR8)
    {
        VAR20 = FUN2(VAR3, VAR8, VAR7);
        FUN3(VAR12, VAR20, VAR8, false, true);
    }
    VAR18 = FUN2(VAR3, sizeof(VAR14), &VAR14);
    FUN3(VAR12, VAR18, sizeof(VAR14), true, !!VAR6);
    if (VAR6)
    {
        VAR19 = FUN2(VAR3, VAR6, VAR5);
        FUN3(VAR12, VAR19, VAR6, true, false);
    }
    FUN4(VAR3->VAR24, VAR12, VAR21);
    FUN5(VAR3->VAR24, VAR12, VAR25);
    VAR15 = FUN6(VAR18 + FUN7(struct VAR9, VAR15));
    if (VAR10)
    {
        FUN8(VAR18, VAR10, sizeof(*VAR10));
    }
    FUN9(VAR3->VAR26->VAR27, VAR17);
    FUN9(VAR3->VAR26->VAR27, VAR18);
    FUN9(VAR3->VAR26->VAR27, VAR19);
    FUN9(VAR3->VAR26->VAR27, VAR20);
    return VAR15;
}