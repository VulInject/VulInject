static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5;
    int VAR6, VAR7, VAR8;
    int VAR9, VAR10;
    if (VAR3 == 0)
        return 1;
    VAR10 = 0;
    VAR4 = VAR2->VAR11[0];
    if (VAR4 > VAR2->VAR12)
        goto VAR13;
    VAR8 = VAR2->VAR11[17];
    VAR10 += VAR4;
    while (VAR10 < VAR2->VAR12)
    {
        FUN2("", VAR10, VAR2->VAR12, VAR2->VAR11[VAR10], VAR2->VAR11[VAR10 + 1]);
        if (VAR2->VAR11[VAR10 + 1] != VAR14)
        {
            VAR10 += VAR2->VAR11[VAR10];
            continue;
        }
        VAR5 = VAR2->VAR11[VAR10];
        FUN2("", VAR2->VAR11[VAR10 + 5], VAR3);
        if (VAR3 < 0 || VAR3 == VAR2->VAR11[VAR10 + 5])
            break;
        VAR10 += VAR5;
    }
    if (VAR10 >= VAR2->VAR12)
    {
        FUN2("");
        goto VAR13;
    }
    VAR7 = VAR2->VAR11[VAR10 + 4];
    {
        struct usbdevfs_ioctl VAR15;
        for (VAR6 = 0; VAR6 < VAR7; VAR6++)
        {
            VAR15.VAR16 = VAR17;
            VAR15.VAR18 = VAR6;
            VAR9 = FUN3(VAR2->VAR19, VAR20, &VAR15);
            if (VAR9 < 0 && VAR21 != VAR22)
            {
                FUN4("");
                goto VAR13;
            }
        }
    }
    for (VAR6 = 0; VAR6 < VAR7; VAR6++)
    {
        VAR9 = FUN3(VAR2->VAR19, VAR23, &VAR6);
        if (VAR9 < 0)
        {
            if (VAR21 == VAR24)
            {
                fprintf(VAR25, "");
            }
            else
            {
                FUN4("");
            }
        VAR13:
            return 0;
        }
    }
    FUN2("", VAR7, VAR3);
    return 1;
}