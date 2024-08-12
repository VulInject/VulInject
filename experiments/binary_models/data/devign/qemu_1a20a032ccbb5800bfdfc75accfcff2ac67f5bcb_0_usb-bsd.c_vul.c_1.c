VAR1 *FUN1(const char *VAR2)
{
    struct usb_device_info VAR3, VAR4;
    VAR1 *VAR5 = NULL;
    VAR6 *VAR7;
    char VAR8[VAR9 + 1];
    char VAR10[VAR9 + 1];
    int VAR11, VAR12, VAR13, VAR14, VAR15;
    int VAR16 = VAR17;
    if (FUN2(&VAR13, &VAR14, VAR2) < 0)
        return NULL;
    snprintf(VAR10, VAR9, "", VAR13);
    VAR11 = open(VAR10, VAR18);
    if (VAR11 < 0)
    {
        FUN3("", strerror(VAR19));
        return NULL;
    }
    VAR3.VAR20 = VAR14;
    if (FUN4(VAR11, VAR21, &VAR3) < 0)
    {
        FUN3("", strerror(VAR19));
        return NULL;
    }
    snprintf(VAR8, VAR9, "", VAR3.VAR22[0]);
    snprintf(VAR8, VAR9, "", VAR3.VAR22[0]);
    VAR12 = open(VAR8, VAR18);
    if (VAR12 < 0)
    {
        VAR12 = open(VAR8, VAR23);
        if (VAR12 < 0)
        {
            FUN3("", VAR8, strerror(VAR19));
        }
    }
    if (VAR12 >= 0)
    {
        if (FUN4(VAR12, VAR24, &VAR4) < 0)
        {
            FUN3("", strerror(VAR19));
            goto VAR25;
        }
        VAR5 = FUN5(NULL, "");
        VAR7 = FUN6(VAR6, VAR7, VAR5);
        if (VAR4.VAR26 == 1)
            VAR7->VAR7.VAR27 = VAR28 - 1;
        else
            VAR7->VAR7.VAR27 = VAR29 - 1;
        if (FUN7(VAR4.VAR30, "", 7) != 0)
            FUN8(VAR7->VAR7.VAR31, sizeof(VAR7->VAR7.VAR31), VAR4.VAR30);
        else
            snprintf(VAR7->VAR7.VAR31, sizeof(VAR7->VAR7.VAR31), "", VAR2);
        FUN8(VAR7->VAR32, sizeof(VAR7->VAR32), "");
        FUN9(VAR7->VAR32, sizeof(VAR7->VAR32), VAR4.VAR22[0]);
        for (VAR15 = 0; VAR15 < VAR33; VAR15++)
            VAR7->VAR34[VAR15] = -1;
        FUN4(VAR12, VAR35, &VAR16);
        return (VAR1 *)VAR7;
    }
VAR25:
    return NULL;
}