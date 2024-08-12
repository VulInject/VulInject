int FUN1(VAR1 *VAR2, const char *VAR3, int VAR4, void *VAR5)
{
    char *VAR6, VAR7[128];
    const VAR8 *VAR9;
    int VAR10, VAR11 = 0;
    if (VAR3[0] == '')
    {
        VAR11 = 1;
    }
    else if (!FUN2(VAR3, "", 2))
        VAR11 = 2;
    if (VAR4 < 0)
        VAR4 = strlen(VAR3);
    FUN3(VAR7, VAR3 + VAR11, FUN4(VAR4 - VAR11 + 1, sizeof(VAR7)));
    if ((VAR6 = strchr(VAR7, VAR12)))
        *VAR6++ = 0;
    VAR10 = strlen(VAR7);
    VAR2[3] = 255;
    if (!FUN5(VAR7, "") || !FUN5(VAR7, ""))
    {
        int VAR13 = FUN6();
        VAR2[0] = VAR13 >> 24;
        VAR2[1] = VAR13 >> 16;
        VAR2[2] = VAR13 >> 8;
        VAR2[3] = VAR13;
    }
    else if (VAR11 || strspn(VAR7, "") == VAR10)
    {
        char *VAR6;
        unsigned int VAR13 = FUN7(VAR7, &VAR6, 16);
        if (*VAR6 || (VAR10 != 6 && VAR10 != 8))
        {
            FUN8(VAR5, VAR14, "", VAR7);
            return FUN9(VAR15);
        }
        if (VAR10 == 8)
        {
            VAR2[3] = VAR13;
            VAR13 >>= 8;
        }
        VAR2[0] = VAR13 >> 16;
        VAR2[1] = VAR13 >> 8;
        VAR2[2] = VAR13;
    }
    else
    {
        VAR9 = FUN10(VAR7, VAR16, FUN11(VAR16), sizeof(VAR8), VAR17);
        if (!VAR9)
        {
            FUN8(VAR5, VAR14, "", VAR7);
            return FUN9(VAR15);
        }
        memcpy(VAR2, VAR9->VAR18, 3);
    }
    if (VAR6)
    {
        double VAR19;
        const char *VAR20 = VAR6;
        if (!FUN2(VAR20, "", 2))
        {
            VAR19 = FUN7(VAR20, &VAR6, 16);
        }
        else
        {
            VAR19 = 255 * FUN12(VAR20, &VAR6);
        }
        if (VAR6 == VAR20 || *VAR6 || VAR19 > 255 || VAR19 < 0)
        {
            FUN8(VAR5, VAR14, "", VAR20, VAR3);
            return FUN9(VAR15);
        }
        VAR2[3] = VAR19;
    }
    return 0;
}