static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, unsigned char **VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    char VAR10[4096], VAR11[1024], *VAR12;
    unsigned char VAR13;
    const char *VAR14;
    int VAR15, VAR16;
    unsigned char *VAR17 = NULL;
    memset(VAR5, 0, sizeof(VAR4));
    VAR8->VAR18++;
    FUN2(VAR10, sizeof(VAR10), VAR3);
    snprintf(VAR11, sizeof(VAR11), "", VAR8->VAR18);
    FUN3(VAR10, sizeof(VAR10), VAR11);
    if (VAR8->VAR19[0] != '' && !strstr(VAR3, ""))
    {
        snprintf(VAR11, sizeof(VAR11), "", VAR8->VAR19);
        FUN3(VAR10, sizeof(VAR10), VAR11);
    }
    FUN3(VAR10, sizeof(VAR10), "");
    FUN4("", VAR10);
    FUN5(VAR8->VAR20, VAR10, strlen(VAR10));
    VAR16 = 0;
    VAR8->VAR21[0] = '';
    for (;;)
    {
        VAR12 = VAR10;
        for (;;)
        {
            if (FUN6(VAR8->VAR20, &VAR13, 1) != 1)
                break;
            if (VAR13 == '')
                break;
            if (VAR13 == '')
            {
                FUN7(VAR2);
            }
            else if (VAR13 != '')
            {
                if ((VAR12 - VAR10) < sizeof(VAR10) - 1)
                    *VAR12++ = VAR13;
            }
        }
        *VAR12 = '';
        FUN4("", VAR10);
        if (VAR10[0] == '')
            break;
        VAR14 = VAR10;
        if (VAR16 == 0)
        {
            FUN8(VAR11, sizeof(VAR11), &VAR14);
            FUN8(VAR11, sizeof(VAR11), &VAR14);
            VAR5->VAR22 = FUN9(VAR11);
        }
        else
        {
            FUN10(VAR5, VAR14);
            FUN3(VAR8->VAR21, sizeof(VAR8->VAR21), VAR14);
            FUN3(VAR8->VAR21, sizeof(VAR8->VAR21), "");
        }
        VAR16++;
    }
    if (VAR8->VAR19[0] == '' && VAR5->VAR19[0] != '')
        FUN2(VAR8->VAR19, sizeof(VAR8->VAR19), VAR5->VAR19);
    VAR15 = VAR5->VAR15;
    if (VAR15 > 0)
    {
        VAR17 = FUN11(VAR15 + 1);
        FUN6(VAR8->VAR20, VAR17, VAR15);
        VAR17[VAR15] = '';
    }
    if (VAR6)
        *VAR6 = VAR17;
}