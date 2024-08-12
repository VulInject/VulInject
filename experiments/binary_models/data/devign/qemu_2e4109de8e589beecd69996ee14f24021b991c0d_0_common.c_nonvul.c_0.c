static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7, VAR8;
    VAR9 *VAR10;
    VAR10 = FUN2(VAR4);
    FUN3(VAR6, &VAR10->VAR11, VAR12)
    {
        if (!FUN4(VAR2->VAR8, VAR13, &VAR6->VAR8))
        {
            VAR2->VAR6 = VAR6;
            FUN5(&VAR6->VAR14, VAR2, VAR15);
            return 0;
        }
    }
    VAR8 = FUN6("", VAR16);
    if (VAR8 < 0)
    {
        FUN7("");
        VAR7 = -VAR17;
        goto VAR18;
    }
    VAR7 = FUN4(VAR8, VAR19);
    if (VAR7 != VAR20)
    {
        FUN7(""
                     "",
                     VAR20, VAR7);
        VAR7 = -VAR21;
        goto VAR22;
    }
    VAR6 = FUN8(sizeof(*VAR6));
    VAR6->VAR10 = VAR10;
    VAR6->VAR8 = VAR8;
    if (FUN4(VAR8, VAR23, VAR24) || FUN4(VAR8, VAR23, VAR25))
    {
        bool VAR26 = !!FUN4(VAR8, VAR23, VAR25);
        struct vfio_iommu_type1_info VAR27;
        VAR7 = FUN4(VAR2->VAR8, VAR13, &VAR8);
        if (VAR7)
        {
            FUN7("");
            VAR7 = -VAR17;
            goto VAR28;
        }
        VAR6->VAR29 = VAR26 ? VAR25 : VAR24;
        VAR7 = FUN4(VAR8, VAR30, VAR6->VAR29);
        if (VAR7)
        {
            FUN7("");
            VAR7 = -VAR17;
            goto VAR28;
        }
        VAR27.VAR31 = sizeof(VAR27);
        VAR7 = FUN4(VAR8, VAR32, &VAR27);
        if (VAR7 || !(VAR27.VAR33 & VAR34))
        {
            VAR27.VAR35 = 4096;
        }
        FUN9(VAR6, 0, (VAR36)-1, VAR27.VAR35);
    }
    else if (FUN4(VAR8, VAR23, VAR37) || FUN4(VAR8, VAR23, VAR38))
    {
        struct vfio_iommu_spapr_tce_info VAR27;
        bool VAR26 = !!FUN4(VAR8, VAR23, VAR38);
        VAR7 = FUN4(VAR2->VAR8, VAR13, &VAR8);
        if (VAR7)
        {
            FUN7("");
            VAR7 = -VAR17;
            goto VAR28;
        }
        VAR6->VAR29 = VAR26 ? VAR38 : VAR37;
        VAR7 = FUN4(VAR8, VAR30, VAR6->VAR29);
        if (VAR7)
        {
            FUN7("");
            VAR7 = -VAR17;
            goto VAR28;
        }
        if (!VAR26)
        {
            VAR7 = FUN4(VAR8, VAR39);
            if (VAR7)
            {
                FUN7("");
                VAR7 = -VAR17;
                goto VAR28;
            }
        }
        else
        {
            VAR6->VAR40 = VAR41;
            FUN10(&VAR6->VAR40, &VAR42);
            if (VAR6->VAR43)
            {
                FUN11(&VAR6->VAR40);
                FUN7("");
                goto VAR28;
            }
        }
        VAR27.VAR31 = sizeof(VAR27);
        VAR7 = FUN4(VAR8, VAR44, &VAR27);
        if (VAR7)
        {
            FUN7("");
            VAR7 = -VAR17;
            if (VAR26)
            {
                FUN11(&VAR6->VAR40);
            }
            goto VAR28;
        }
        if (VAR26)
        {
            VAR7 = FUN12(VAR6, VAR27.VAR45);
            if (VAR7)
            {
                goto VAR28;
            }
        }
        else
        {
            FUN9(VAR6, VAR27.VAR45, VAR27.VAR45 + VAR27.VAR46 - 1, 0x1000);
        }
    }
    else
    {
        FUN7("");
        VAR7 = -VAR21;
        goto VAR28;
    }
    VAR6->VAR47 = VAR48;
    FUN10(&VAR6->VAR47, VAR6->VAR10->VAR4);
    if (VAR6->VAR43)
    {
        VAR7 = VAR6->VAR43;
        FUN7("");
        goto VAR49;
    }
    VAR6->VAR50 = true;
    FUN13(&VAR6->VAR14);
    FUN5(&VAR10->VAR11, VAR6, VAR12);
    VAR2->VAR6 = VAR6;
    FUN5(&VAR6->VAR14, VAR2, VAR15);
    return 0;
VAR49:
    FUN14(VAR6);
VAR28:
    FUN15(VAR6);
VAR22:
    close(VAR8);
VAR18:
    FUN16(VAR10);
    return VAR7;
}