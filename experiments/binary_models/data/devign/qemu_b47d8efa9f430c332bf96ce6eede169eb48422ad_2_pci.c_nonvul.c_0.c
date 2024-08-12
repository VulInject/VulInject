static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    struct vfio_device_info VAR6 = {.VAR7 = sizeof(VAR6)};
    struct vfio_region_info VAR8 = {.VAR7 = sizeof(VAR8)};
    struct vfio_irq_info VAR9 = {.VAR7 = sizeof(VAR9)};
    int VAR10, VAR11;
    VAR10 = FUN2(VAR2->VAR12, VAR13, VAR3);
    if (VAR10 < 0)
    {
        FUN3("", VAR3, VAR2->VAR14);
        FUN4(""
                     "",
                     VAR2->VAR14);
        return VAR10;
    }
    VAR5->VAR15.VAR12 = VAR10;
    VAR5->VAR15.VAR2 = VAR2;
    FUN5(&VAR2->VAR16, &VAR5->VAR15, VAR17);
    VAR10 = FUN2(VAR5->VAR15.VAR12, VAR18, &VAR6);
    if (VAR10)
    {
        FUN3("");
        goto VAR19;
    }
    FUN6(VAR3, VAR6.VAR20, VAR6.VAR21, VAR6.VAR22);
    if (!(VAR6.VAR20 & VAR23))
    {
        FUN3("");
        goto VAR19;
    }
    VAR5->VAR15.VAR24 = !!(VAR6.VAR20 & VAR25);
    if (VAR6.VAR21 < VAR26 + 1)
    {
        FUN3("", VAR6.VAR21);
        goto VAR19;
    }
    if (VAR6.VAR22 < VAR27 + 1)
    {
        FUN3("", VAR6.VAR22);
        goto VAR19;
    }
    for (VAR11 = VAR28; VAR11 < VAR29; VAR11++)
    {
        VAR8.VAR30 = VAR11;
        VAR10 = FUN2(VAR5->VAR15.VAR12, VAR31, &VAR8);
        if (VAR10)
        {
            FUN3("", VAR11);
            goto VAR19;
        }
        FUN7(VAR3, VAR11, (unsigned long)VAR8.VAR32, (unsigned long)VAR8.VAR33, (unsigned long)VAR8.VAR20);
        VAR5->VAR34[VAR11].VAR20 = VAR8.VAR20;
        VAR5->VAR34[VAR11].VAR32 = VAR8.VAR32;
        VAR5->VAR34[VAR11].VAR35 = VAR8.VAR33;
        VAR5->VAR34[VAR11].VAR12 = VAR5->VAR15.VAR12;
        VAR5->VAR34[VAR11].VAR36 = VAR11;
        FUN8(&VAR5->VAR34[VAR11].VAR37);
    }
    VAR8.VAR30 = VAR26;
    VAR10 = FUN2(VAR5->VAR15.VAR12, VAR31, &VAR8);
    if (VAR10)
    {
        FUN3("");
        goto VAR19;
    }
    FUN9(VAR3, (unsigned long)VAR8.VAR32, (unsigned long)VAR8.VAR33, (unsigned long)VAR8.VAR20);
    VAR5->VAR38 = VAR8.VAR32;
    if (VAR5->VAR38 == VAR39)
    {
        VAR5->VAR40.VAR41 &= ~VAR42;
    }
    VAR5->VAR43 = VAR8.VAR33;
    if ((VAR5->VAR44 & VAR45) && VAR6.VAR21 > VAR46)
    {
        struct vfio_region_info VAR47 = {
            .VAR7 = sizeof(VAR47),
            .VAR30 = VAR46,
        };
        VAR10 = FUN2(VAR5->VAR15.VAR12, VAR31, &VAR47);
        if (VAR10)
        {
            FUN3("");
            goto VAR19;
        }
        if (!(VAR47.VAR20 & VAR48) || !(VAR47.VAR20 & VAR49) || VAR47.VAR32 < 0xbffff + 1)
        {
            FUN3("", (unsigned long)VAR47.VAR20, (unsigned long)VAR47.VAR32);
            goto VAR19;
        }
        VAR5->VAR50.VAR35 = VAR47.VAR33;
        VAR5->VAR50.VAR12 = VAR5->VAR15.VAR12;
        VAR5->VAR50.VAR51[VAR52].VAR33 = VAR53;
        VAR5->VAR50.VAR51[VAR52].VAR36 = VAR52;
        FUN8(&VAR5->VAR50.VAR51[VAR52].VAR37);
        VAR5->VAR50.VAR51[VAR54].VAR33 = VAR55;
        VAR5->VAR50.VAR51[VAR54].VAR36 = VAR54;
        FUN8(&VAR5->VAR50.VAR51[VAR54].VAR37);
        VAR5->VAR50.VAR51[VAR56].VAR33 = VAR57;
        VAR5->VAR50.VAR51[VAR56].VAR36 = VAR56;
        FUN8(&VAR5->VAR50.VAR51[VAR56].VAR37);
        VAR5->VAR58 = true;
    }
    VAR9.VAR30 = VAR59;
    VAR10 = FUN2(VAR5->VAR15.VAR12, VAR60, &VAR9);
    if (VAR10)
    {
        FUN10();
        VAR10 = 0;
    }
    else if (VAR9.VAR61 == 1)
    {
        VAR5->VAR62 = true;
    }
    else
    {
        FUN3(""
                     "",
                     VAR5->VAR63.VAR64, VAR5->VAR63.VAR65, VAR5->VAR63.VAR66, VAR5->VAR63.VAR67);
    }
VAR19:
    if (VAR10)
    {
        FUN11(&VAR5->VAR15, VAR17);
        VAR5->VAR15.VAR2 = NULL;
        close(VAR5->VAR15.VAR12);
    }
    return VAR10;
}