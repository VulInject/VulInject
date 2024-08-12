static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8;
    int VAR9, VAR10;
    VAR11 *VAR12;
    VAR12 = FUN2(VAR4);
    FUN3(VAR8, &VAR12->VAR13, VAR14)
    {
        if (!FUN4(VAR2->VAR10, VAR15, &VAR8->VAR10))
        {
            VAR2->VAR8 = VAR8;
            FUN5(&VAR8->VAR16, VAR2, VAR17);
            FUN6(VAR2);
            return 0;
            VAR10 = FUN7("", VAR18);
            if (VAR10 < 0)
            {
                FUN8(VAR6, VAR19, "");
                VAR9 = -VAR19;
                goto VAR20;
                VAR9 = FUN4(VAR10, VAR21);
                if (VAR9 != VAR22)
                {
                    FUN9(VAR6, ""
                                     "",
                               VAR22, VAR9);
                    VAR9 = -VAR23;
                    goto VAR24;
                    VAR8 = FUN10(sizeof(*VAR8));
                    VAR8->VAR12 = VAR12;
                    VAR8->VAR10 = VAR10;
                    FUN11(&VAR8->VAR25);
                    FUN11(&VAR8->VAR26);
                    if (FUN4(VAR10, VAR27, VAR28) || FUN4(VAR10, VAR27, VAR29))
                    {
                        bool VAR30 = !!FUN4(VAR10, VAR27, VAR29);
                        struct vfio_iommu_type1_info VAR31;
                        VAR9 = FUN4(VAR2->VAR10, VAR15, &VAR10);
                        FUN8(VAR6, VAR19, "");
                        VAR9 = -VAR19;
                        goto VAR32;
                        VAR8->VAR33 = VAR30 ? VAR29 : VAR28;
                        FUN8(VAR6, VAR19, "");
                        VAR9 = -VAR19;
                        goto VAR32;
                        VAR31.VAR34 = sizeof(VAR31);
                        VAR9 = FUN4(VAR10, VAR35, &VAR31);
                        if (VAR9 || !(VAR31.VAR36 & VAR37))
                        {
                            VAR31.VAR38 = 4096;
                            FUN12(VAR8, 0, (VAR39)-1, VAR31.VAR38);
                        }
                        else if (FUN4(VAR10, VAR27, VAR40) || FUN4(VAR10, VAR27, VAR41))
                        {
                            struct vfio_iommu_spapr_tce_info VAR31;
                            bool VAR30 = !!FUN4(VAR10, VAR27, VAR41);
                            VAR9 = FUN4(VAR2->VAR10, VAR15, &VAR10);
                            FUN8(VAR6, VAR19, "");
                            VAR9 = -VAR19;
                            goto VAR32;
                            VAR8->VAR33 = VAR30 ? VAR41 : VAR40;
                            FUN8(VAR6, VAR19, "");
                            VAR9 = -VAR19;
                            goto VAR32;
                            if (!VAR30)
                            {
                                VAR9 = FUN4(VAR10, VAR42);
                                FUN8(VAR6, VAR19, "");
                                VAR9 = -VAR19;
                                goto VAR32;
                            }
                            else
                            {
                                VAR8->VAR43 = VAR44;
                                FUN13(&VAR8->VAR43, &VAR45);
                                if (VAR8->VAR46)
                                {
                                    FUN14(&VAR8->VAR43);
                                    VAR9 = VAR8->VAR46;
                                    FUN9(VAR6, "");
                                    goto VAR32;
                                    VAR31.VAR34 = sizeof(VAR31);
                                    VAR9 = FUN4(VAR10, VAR47, &VAR31);
                                    FUN8(VAR6, VAR19, "");
                                    VAR9 = -VAR19;
                                    if (VAR30)
                                    {
                                        FUN14(&VAR8->VAR43);
                                        goto VAR32;
                                        if (VAR30)
                                        {
                                            VAR9 = FUN15(VAR8, VAR31.VAR48);
                                            FUN8(VAR6, -VAR9, "");
                                            goto VAR32;
                                        }
                                        else
                                        {
                                            FUN12(VAR8, VAR31.VAR48, VAR31.VAR48 + VAR31.VAR49 - 1, 0x1000);
                                        }
                                        else
                                        {
                                            FUN9(VAR6, "");
                                            VAR9 = -VAR23;
                                            goto VAR32;
                                            FUN6(VAR2);
                                            FUN11(&VAR8->VAR16);
                                            FUN5(&VAR12->VAR13, VAR8, VAR14);
                                            VAR2->VAR8 = VAR8;
                                            FUN5(&VAR8->VAR16, VAR2, VAR17);
                                            VAR8->VAR50 = VAR51;
                                            FUN13(&VAR8->VAR50, VAR8->VAR12->VAR4);
                                            if (VAR8->VAR46)
                                            {
                                                VAR9 = VAR8->VAR46;
                                                FUN8(VAR6, -VAR9, "");
                                                goto VAR52;
                                                VAR8->VAR53 = true;
                                                return 0;
                                            VAR52:
                                                FUN16(VAR2, VAR17);
                                                FUN16(VAR8, VAR14);
                                                FUN17(VAR2);
                                                FUN18(VAR8);
                                            VAR32:
                                                FUN19(VAR8);
                                            VAR24:
                                                close(VAR10);
                                            VAR20:
                                                FUN20(VAR12);
                                                return VAR9;