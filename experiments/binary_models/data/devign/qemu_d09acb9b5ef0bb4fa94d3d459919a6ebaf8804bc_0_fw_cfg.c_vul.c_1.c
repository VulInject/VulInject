static void FUN1(VAR1 *VAR2)
{
    int VAR3 = -1;
    const char *VAR4 = NULL;
    char *VAR5;
    char *VAR6, *VAR7;
    int VAR8;
    int VAR9 = -1;
    const char *VAR10;
    VAR11 *VAR12 = FUN2("");
    VAR13 *VAR14 = FUN3(&VAR12->VAR15);
    if (VAR14 != NULL)
    {
        VAR10 = FUN4(VAR14, "");
        if (VAR10 != NULL)
        {
            VAR4 = VAR10;
        }
        VAR10 = FUN4(VAR14, "");
        if (VAR10 != NULL)
        {
            VAR5 = (char *)VAR10;
            VAR3 = FUN5(VAR5, (char **)&VAR5, 10);
        }
    }
    if (VAR3 >= 0)
    {
        if (VAR3 > 0xffff)
        {
            FUN6("");
            VAR3 = 0xffff;
        }
        VAR16[0] = (VAR17)(VAR3 & 0xff);
        VAR16[1] = (VAR17)((VAR3 >> 8) & 0xff);
        FUN7(VAR2, "", VAR16, 2);
    }
    if (VAR4 != NULL)
    {
        VAR6 = FUN8(VAR18, VAR4);
        if (VAR6 == NULL)
        {
            FUN6("", VAR4);
            return;
        }
        VAR7 = FUN9(VAR6, &VAR8, &VAR9);
        if (VAR7 == NULL)
        {
            FUN10(VAR6);
            return;
        }
        if (VAR19 != NULL)
        {
            FUN10(VAR19);
        }
        VAR19 = (VAR17 *)VAR7;
        VAR20 = VAR8;
        if (VAR9 == VAR21)
        {
            FUN7(VAR2, "", VAR19, VAR20);
        }
        else
        {
            FUN7(VAR2, "", VAR19, VAR20);
        }
        FUN10(VAR6);
    }
}