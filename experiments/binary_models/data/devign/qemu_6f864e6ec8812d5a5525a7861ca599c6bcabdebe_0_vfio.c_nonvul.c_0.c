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
    VAR5->VAR12 = VAR10;
    VAR5->VAR2 = VAR2;
    FUN5(&VAR2->VAR15, VAR5, VAR16);
    VAR10 = FUN2(VAR5->VAR12, VAR17, &VAR6);
    if (VAR10)
    {
        FUN3("");
        goto VAR18;
    }
    FUN6("", VAR3, VAR6.VAR19, VAR6.VAR20, VAR6.VAR21);
    if (!(VAR6.VAR19 & VAR22))
    {
        FUN3("");
        goto VAR18;
    }
    VAR5->VAR23 = !!(VAR6.VAR19 & VAR24);
    if (!VAR5->VAR23)
    {
        FUN3("", VAR3);
    }
    if (VAR6.VAR20 < VAR25 + 1)
    {
        FUN3("", VAR6.VAR20);
        goto VAR18;
    }
    if (VAR6.VAR21 < VAR26 + 1)
    {
        FUN3("", VAR6.VAR21);
        goto VAR18;
    }
    for (VAR11 = VAR27; VAR11 < VAR28; VAR11++)
    {
        VAR8.VAR29 = VAR11;
        VAR10 = FUN2(VAR5->VAR12, VAR30, &VAR8);
        if (VAR10)
        {
            FUN3("", VAR11);
            goto VAR18;
        }
        FUN6("", VAR3, VAR11);
        FUN6("", (unsigned long)VAR8.VAR31, (unsigned long)VAR8.VAR32, (unsigned long)VAR8.VAR19);
        VAR5->VAR33[VAR11].VAR19 = VAR8.VAR19;
        VAR5->VAR33[VAR11].VAR31 = VAR8.VAR31;
        VAR5->VAR33[VAR11].VAR34 = VAR8.VAR32;
        VAR5->VAR33[VAR11].VAR12 = VAR5->VAR12;
        VAR5->VAR33[VAR11].VAR35 = VAR11;
        FUN7(&VAR5->VAR33[VAR11].VAR36);
    }
    VAR8.VAR29 = VAR25;
    VAR10 = FUN2(VAR5->VAR12, VAR30, &VAR8);
    if (VAR10)
    {
        FUN3("");
        goto VAR18;
    }
    FUN6("", VAR3);
    FUN6("", (unsigned long)VAR8.VAR31, (unsigned long)VAR8.VAR32, (unsigned long)VAR8.VAR19);
    VAR5->VAR37 = VAR8.VAR31;
    if (VAR5->VAR37 == VAR38)
    {
        VAR5->VAR39.VAR40 &= ~VAR41;
    }
    VAR5->VAR42 = VAR8.VAR32;
    if ((VAR5->VAR43 & VAR44) && VAR6.VAR20 > VAR45)
    {
        struct vfio_region_info VAR46 = {
            .VAR7 = sizeof(VAR46),
            .VAR29 = VAR45,
        };
        VAR10 = FUN2(VAR5->VAR12, VAR30, &VAR46);
        if (VAR10)
        {
            FUN3("");
            goto VAR18;
        }
        if (!(VAR46.VAR19 & VAR47) || !(VAR46.VAR19 & VAR48) || VAR46.VAR31 < 0xbffff + 1)
        {
            FUN3("", (unsigned long)VAR46.VAR19, (unsigned long)VAR46.VAR31);
            goto VAR18;
        }
        VAR5->VAR49.VAR34 = VAR46.VAR32;
        VAR5->VAR49.VAR12 = VAR5->VAR12;
        VAR5->VAR49.VAR50[VAR51].VAR32 = VAR52;
        VAR5->VAR49.VAR50[VAR51].VAR35 = VAR51;
        FUN7(&VAR5->VAR49.VAR50[VAR51].VAR36);
        VAR5->VAR49.VAR50[VAR53].VAR32 = VAR54;
        VAR5->VAR49.VAR50[VAR53].VAR35 = VAR53;
        FUN7(&VAR5->VAR49.VAR50[VAR53].VAR36);
        VAR5->VAR49.VAR50[VAR55].VAR32 = VAR56;
        VAR5->VAR49.VAR50[VAR55].VAR35 = VAR55;
        FUN7(&VAR5->VAR49.VAR50[VAR55].VAR36);
        VAR5->VAR57 = true;
    }
    VAR9.VAR29 = VAR58;
    VAR10 = FUN2(VAR5->VAR12, VAR59, &VAR9);
    if (VAR10)
    {
        FUN6("", VAR10);
        VAR10 = 0;
    }
    else if (VAR9.VAR60 == 1)
    {
        VAR5->VAR61 = true;
    }
    else
    {
        FUN3(""
                     "");
    }
VAR18:
    if (VAR10)
    {
        FUN8(VAR5, VAR16);
        VAR5->VAR2 = NULL;
        close(VAR5->VAR12);
    }
    return VAR10;
}