static int FUN1(VAR1 *VAR2, int VAR3)
{
    const char *VAR4 = NULL;
    int VAR5, VAR6;
    int VAR7, VAR8;
    int VAR9, VAR10;
    if (VAR3 == 0)
        return 1;
    FUN2("", VAR3);
    VAR10 = 0;
    VAR5 = VAR2->VAR11[0];
    if (VAR5 > VAR2->VAR12)
    {
        goto VAR13;
    }
    VAR10 += VAR5;
    while (VAR10 < VAR2->VAR12)
    {
        FUN2("", VAR10, VAR2->VAR12, VAR2->VAR11[VAR10], VAR2->VAR11[VAR10 + 1]);
        if (VAR2->VAR11[VAR10 + 1] != VAR14)
        {
            VAR10 += VAR2->VAR11[VAR10];
            continue;
        }
        VAR6 = VAR2->VAR11[VAR10];
        FUN3("", VAR2->VAR11[VAR10 + 5], VAR3);
        if (VAR3 < 0 || VAR3 == VAR2->VAR11[VAR10 + 5])
        {
            VAR3 = VAR2->VAR11[VAR10 + 5];
            break;
        }
        VAR10 += VAR6;
    }
    if (VAR10 >= VAR2->VAR12)
    {
        fprintf(VAR15, "");
        goto VAR13;
    }
    VAR8 = VAR2->VAR11[VAR10 + 4];
    {
        struct usbdevfs_ioctl VAR16;
        for (VAR7 = 0; VAR7 < VAR8; VAR7++)
        {
            VAR16.VAR17 = VAR18;
            VAR16.VAR19 = VAR7;
            VAR16.VAR20 = 0;
            VAR4 = "";
            VAR9 = FUN4(VAR2->VAR21, VAR22, &VAR16);
            if (VAR9 < 0 && VAR23 != VAR24)
            {
                goto VAR13;
            }
        }
    }
    for (VAR7 = 0; VAR7 < VAR8; VAR7++)
    {
        VAR4 = "";
        VAR9 = FUN4(VAR2->VAR21, VAR25, &VAR7);
        if (VAR9 < 0)
        {
            if (VAR23 == VAR26)
            {
                FUN3("");
            }
            else
            {
                FUN5("");
            }
            goto VAR13;
        }
    }
    FUN3("", VAR8, VAR3);
    VAR2->VAR27 = VAR8;
    VAR2->VAR3 = VAR3;
    return 1;
VAR13:
    if (VAR23 == VAR28)
    {
        FUN6(VAR2);
    }
    FUN5(VAR4);
    return 0;
}