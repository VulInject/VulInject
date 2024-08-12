static int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    struct vfio_device_info VAR6 = {.VAR7 = sizeof(VAR6)};
    struct vfio_region_info VAR8 = {.VAR7 = sizeof(VAR8)};
    int VAR9, VAR10;
    VAR9 = FUN2(VAR2->VAR11, VAR12, VAR3);
    if (VAR9 < 0)
    {
        FUN3("", VAR3, VAR2->VAR13);
        FUN3(""
                     "",
                     VAR2->VAR13);
        return VAR9;
    }
    VAR5->VAR11 = VAR9;
    VAR5->VAR2 = VAR2;
    FUN4(&VAR2->VAR14, VAR5, VAR15);
    VAR9 = FUN2(VAR5->VAR11, VAR16, &VAR6);
    if (VAR9)
    {
        FUN3("");
        goto VAR17;
    }
    FUN5("", VAR3, VAR6.VAR18, VAR6.VAR19, VAR6.VAR20);
    if (!(VAR6.VAR18 & VAR21))
    {
        FUN3("");
        goto VAR17;
    }
    VAR5->VAR22 = !!(VAR6.VAR18 & VAR23);
    if (!VAR5->VAR22)
    {
        FUN3("", VAR3);
    }
    if (VAR6.VAR19 != VAR24)
    {
        FUN3("", VAR6.VAR19);
        goto VAR17;
    }
    if (VAR6.VAR20 != VAR25)
    {
        FUN3("", VAR6.VAR20);
        goto VAR17;
    }
    for (VAR10 = VAR26; VAR10 < VAR27; VAR10++)
    {
        VAR8.VAR28 = VAR10;
        VAR9 = FUN2(VAR5->VAR11, VAR29, &VAR8);
        if (VAR9)
        {
            FUN3("", VAR10);
            goto VAR17;
        }
        FUN5("", VAR3, VAR10);
        FUN5("", (unsigned long)VAR8.VAR30, (unsigned long)VAR8.VAR31, (unsigned long)VAR8.VAR18);
        VAR5->VAR32[VAR10].VAR18 = VAR8.VAR18;
        VAR5->VAR32[VAR10].VAR30 = VAR8.VAR30;
        VAR5->VAR32[VAR10].VAR33 = VAR8.VAR31;
        VAR5->VAR32[VAR10].VAR11 = VAR5->VAR11;
        VAR5->VAR32[VAR10].VAR34 = VAR10;
    }
    VAR8.VAR28 = VAR27;
    VAR9 = FUN2(VAR5->VAR11, VAR29, &VAR8);
    if (VAR9)
    {
        FUN3("");
        goto VAR17;
    }
    FUN5("", VAR3);
    FUN5("", (unsigned long)VAR8.VAR30, (unsigned long)VAR8.VAR31, (unsigned long)VAR8.VAR18);
    VAR5->VAR35 = VAR8.VAR30;
    VAR5->VAR36 = VAR8.VAR31;
    VAR8.VAR28 = VAR37;
    VAR9 = FUN2(VAR5->VAR11, VAR29, &VAR8);
    if (VAR9)
    {
        FUN3("");
        goto VAR17;
    }
    FUN5("", VAR3);
    FUN5("", (unsigned long)VAR8.VAR30, (unsigned long)VAR8.VAR31, (unsigned long)VAR8.VAR18);
    VAR5->VAR38 = VAR8.VAR30;
    VAR5->VAR39 = VAR8.VAR31;
VAR17:
    if (VAR9)
    {
        FUN6(VAR5, VAR15);
        VAR5->VAR2 = NULL;
        close(VAR5->VAR11);
    }
    return VAR9;
}