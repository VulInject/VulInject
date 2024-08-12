static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = &VAR6->VAR8;
    bool VAR9 = FUN3(VAR6);
    bool VAR10;
    bool VAR11 = VAR6->VAR12 & VAR13;
    VAR14 *VAR15;
    uint32_t VAR16;
    VAR17 *VAR18 = FUN4(&VAR6->VAR8);
    if (!VAR6->VAR19 && !FUN5(VAR18->VAR20, VAR21))
    {
        FUN6(VAR6);
        if (!VAR9)
        {
            FUN7(VAR4, ""
                             "");
            FUN8(VAR4, "");
            return;
        }
    }
    VAR10 = FUN9(VAR6);
    VAR15 = VAR6->VAR22.VAR15;
    if (VAR6->VAR23)
    {
        FUN10(VAR15, VAR6->VAR23);
    }
    if (VAR9)
    {
        if (FUN11(VAR18, VAR24))
        {
            FUN7(VAR4, ""
                             "");
            return;
        }
        FUN12(VAR15 + VAR25, FUN13(VAR15 + VAR26));
        FUN12(VAR15 + VAR27, FUN14(VAR8));
    }
    else
    {
        FUN12(VAR15 + VAR26, VAR28);
        FUN12(VAR15 + VAR29, 0x1040 + FUN14(VAR8));
        FUN15(VAR15, 1);
    }
    VAR15[VAR30] = 1;
    if (VAR10)
    {
        struct virtio_pci_cap VAR31 = {
            .VAR32 = sizeof VAR31,
        };
        struct virtio_pci_notify_cap VAR33 = {
            .VAR31.VAR32 = sizeof VAR33,
            .VAR34 = FUN16(FUN17(VAR6)),
        };
        struct virtio_pci_cfg_cap VAR35 = {
            .VAR31.VAR32 = sizeof VAR35,
            .VAR31.VAR36 = VAR37,
        };
        struct virtio_pci_notify_cap VAR38 = {
            .VAR31.VAR32 = sizeof VAR33,
            .VAR34 = FUN16(0x0),
        };
        struct VAR39 *VAR40;
        FUN18(VAR6);
        FUN19(VAR6, &VAR6->VAR41, &VAR31);
        FUN19(VAR6, &VAR6->VAR42, &VAR31);
        FUN19(VAR6, &VAR6->VAR43, &VAR31);
        FUN19(VAR6, &VAR6->VAR33, &VAR33.VAR31);
        if (VAR11)
        {
            FUN20(&VAR6->VAR44, FUN21(VAR6), "", 0x4);
            FUN22(&VAR6->VAR22, VAR6->VAR45, VAR46, &VAR6->VAR44);
            FUN23(VAR6, &VAR6->VAR38, &VAR38.VAR31);
        }
        FUN22(&VAR6->VAR22, VAR6->VAR47, VAR48 | VAR49 | VAR50, &VAR6->VAR51);
        VAR6->VAR52 = FUN24(VAR6, &VAR35.VAR31);
        VAR40 = (void *)(VAR6->VAR22.VAR53 + VAR6->VAR52);
        FUN25(&VAR40->VAR31.VAR54, ~0x0);
        FUN26((VAR14 *)&VAR40->VAR31.VAR55, ~0x0);
        FUN26((VAR14 *)&VAR40->VAR31.VAR56, ~0x0);
        FUN26(VAR40->VAR57, ~0x0);
    }
    if (VAR6->VAR58)
    {
        int VAR59 = FUN27(&VAR6->VAR22, VAR6->VAR58, VAR6->VAR60);
        if (VAR59)
        {
            if (VAR59 != -VAR61)
            {
                FUN28("" VAR62, VAR6->VAR58);
            }
            VAR6->VAR58 = 0;
        }
    }
    VAR6->VAR22.VAR63 = VAR64;
    VAR6->VAR22.VAR65 = VAR66;
    if (VAR9)
    {
        VAR16 = FUN29(&VAR6->VAR22) + FUN30(VAR8);
        VAR16 = FUN31(VAR16);
        FUN32(&VAR6->VAR54, FUN21(VAR6), &VAR67, VAR6, "", VAR16);
        FUN22(&VAR6->VAR22, VAR6->VAR68, VAR46, &VAR6->VAR54);
    }
}