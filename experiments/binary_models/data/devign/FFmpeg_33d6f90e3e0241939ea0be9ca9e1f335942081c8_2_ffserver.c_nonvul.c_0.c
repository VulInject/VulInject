static int FUN1(VAR1 *VAR2)
{
    const char *VAR3, *VAR4, *VAR5;
    char VAR6[32];
    char VAR7[1024];
    char VAR8[32];
    char VAR9[1024];
    int VAR10;
    RTSPMessageHeader VAR11 = {0}, *VAR12 = &VAR11;
    VAR2->VAR13[0] = '';
    VAR3 = VAR2->VAR14;
    FUN2(VAR6, sizeof(VAR6), &VAR3);
    FUN2(VAR7, sizeof(VAR7), &VAR3);
    FUN2(VAR8, sizeof(VAR8), &VAR3);
    FUN3(VAR2->VAR15, VAR6, sizeof(VAR2->VAR15));
    FUN3(VAR2->VAR7, VAR7, sizeof(VAR2->VAR7));
    FUN3(VAR2->VAR8, VAR8, sizeof(VAR2->VAR8));
    if (FUN4(&VAR2->VAR16) < 0)
    {
        VAR2->VAR16 = NULL;
        return -1;
    }
    if (strcmp(VAR8, ""))
    {
        FUN5(VAR2, VAR17);
        goto VAR18;
    }
    while (*VAR3 != '' && *VAR3 != '')
        VAR3++;
    if (*VAR3 == '')
        VAR3++;
    while (*VAR3 != '')
    {
        VAR4 = memchr(VAR3, '', (char *)VAR2->VAR13 - VAR3);
        if (!VAR4)
            break;
        VAR5 = VAR4;
        if (VAR5 > VAR3 && VAR5[-1] == '')
            VAR5--;
        if (VAR5 == VAR3)
            break;
        VAR10 = VAR5 - VAR3;
        if (VAR10 > sizeof(VAR9) - 1)
            VAR10 = sizeof(VAR9) - 1;
        memcpy(VAR9, VAR3, VAR10);
        VAR9[VAR10] = '';
        FUN6(VAR12, VAR9, NULL, NULL);
        VAR3 = VAR4 + 1;
    }
    VAR2->VAR19 = VAR12->VAR19;
    if (!strcmp(VAR6, ""))
        FUN7(VAR2, VAR7);
    else if (!strcmp(VAR6, ""))
        FUN8(VAR2, VAR7);
    else if (!strcmp(VAR6, ""))
        FUN9(VAR2, VAR7, VAR12);
    else if (!strcmp(VAR6, ""))
        FUN10(VAR2, VAR7, VAR12);
    else if (!strcmp(VAR6, ""))
        FUN11(VAR2, VAR7, VAR12, 1);
    else if (!strcmp(VAR6, ""))
        FUN11(VAR2, VAR7, VAR12, 0);
    else
        FUN5(VAR2, VAR20);
VAR18:
    VAR10 = FUN12(VAR2->VAR16, &VAR2->VAR21);
    VAR2->VAR16 = NULL;
    if (VAR10 < 0)
    {
        return -1;
    }
    VAR2->VAR13 = VAR2->VAR21;
    VAR2->VAR22 = VAR2->VAR21 + VAR10;
    VAR2->VAR23 = VAR24;
    return 0;
}