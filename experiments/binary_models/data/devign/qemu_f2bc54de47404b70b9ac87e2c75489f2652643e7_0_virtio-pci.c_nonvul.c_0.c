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
        FUN12(VAR15 + VAR25, FUN13(VAR8));
    }
    else
    {
        FUN12(VAR15 + VAR26, VAR27);
        FUN12(VAR15 + VAR28, 0x1040 + FUN13(VAR8));
        FUN14(VAR15, 1);
    }
    VAR15[VAR29] = 1;
    if (VAR10)
    {
        struct virtio_pci_cap VAR30 = {
            .VAR31 = sizeof VAR30,
        };
        struct virtio_pci_notify_cap VAR32 = {
            .VAR30.VAR31 = sizeof VAR32,
            .VAR33 = FUN15(FUN16(VAR6)),
        };
        struct virtio_pci_cfg_cap VAR34 = {
            .VAR30.VAR31 = sizeof VAR34,
            .VAR30.VAR35 = VAR36,
        };
        struct virtio_pci_notify_cap VAR37 = {
            .VAR30.VAR31 = sizeof VAR32,
            .VAR33 = FUN15(0x0),
        };
        struct VAR38 *VAR39;
        FUN17(VAR6);
        FUN18(VAR6, &VAR6->VAR40, &VAR30);
        FUN18(VAR6, &VAR6->VAR41, &VAR30);
        FUN18(VAR6, &VAR6->VAR42, &VAR30);
        FUN18(VAR6, &VAR6->VAR32, &VAR32.VAR30);
        if (VAR11)
        {
            FUN19(&VAR6->VAR43, FUN20(VAR6), "", 0x4);
            FUN21(&VAR6->VAR22, VAR6->VAR44, VAR45, &VAR6->VAR43);
            FUN22(VAR6, &VAR6->VAR37, &VAR37.VAR30);
        }
        FUN21(&VAR6->VAR22, VAR6->VAR46, VAR47 | VAR48 | VAR49, &VAR6->VAR50);
        VAR6->VAR51 = FUN23(VAR6, &VAR34.VAR30);
        VAR39 = (void *)(VAR6->VAR22.VAR52 + VAR6->VAR51);
        FUN24(&VAR39->VAR30.VAR53, ~0x0);
        FUN25((VAR14 *)&VAR39->VAR30.VAR54, ~0x0);
        FUN25((VAR14 *)&VAR39->VAR30.VAR55, ~0x0);
        FUN25(VAR39->VAR56, ~0x0);
    }
    if (VAR6->VAR57)
    {
        int VAR58 = FUN26(&VAR6->VAR22, VAR6->VAR57, VAR6->VAR59, NULL);
        if (VAR58)
        {
            if (VAR58 != -VAR60)
            {
                FUN27("" VAR61, VAR6->VAR57);
            }
            VAR6->VAR57 = 0;
        }
    }
    VAR6->VAR22.VAR62 = VAR63;
    VAR6->VAR22.VAR64 = VAR65;
    if (VAR9)
    {
        VAR16 = FUN28(&VAR6->VAR22) + FUN29(VAR8);
        VAR16 = FUN30(VAR16);
        FUN31(&VAR6->VAR53, FUN20(VAR6), &VAR66, VAR6, "", VAR16);
        FUN21(&VAR6->VAR22, VAR6->VAR67, VAR45, &VAR6->VAR53);
    }
}