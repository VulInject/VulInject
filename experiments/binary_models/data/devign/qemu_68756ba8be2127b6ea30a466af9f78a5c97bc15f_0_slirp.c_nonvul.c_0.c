static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, int VAR5, const char *VAR6, const char *VAR7, const char *VAR8, const char *VAR9, const char *VAR10, const char *VAR11, const char *VAR12, const char *VAR13, const char *VAR14, const char **VAR15)
{
    struct in_addr VAR16 = {.VAR17 = FUN2(0x0a000200)};
    struct in_addr VAR18 = {.VAR17 = FUN2(0xffffff00)};
    struct in_addr VAR19 = {.VAR17 = FUN2(0x0a000202)};
    struct in_addr VAR20 = {.VAR17 = FUN2(0x0a00020f)};
    struct in_addr VAR21 = {.VAR17 = FUN2(0x0a000203)};
    struct in_addr VAR22 = {.VAR17 = 0};
    VAR1 *VAR23;
    VAR24 *VAR25;
    char VAR26[20];
    uint32_t VAR27;
    int VAR28;
    char *VAR29;
    struct VAR30 *VAR31;
    if (!VAR9)
    {
        VAR9 = VAR32;
    }
    if (!VAR10)
    {
        VAR10 = VAR33;
    }
    if (VAR6)
    {
        if (FUN3(VAR26, sizeof(VAR26), &VAR6, '') < 0)
        {
            if (!FUN4(VAR6, &VAR16))
            {
                return -1;
            }
            VAR27 = FUN5(VAR16.VAR17);
            if (!(VAR27 & 0x80000000))
            {
                VAR18.VAR17 = FUN2(0xff000000);
            }
            else if ((VAR27 & 0xfff00000) == 0xac100000)
            {
                VAR18.VAR17 = FUN2(0xfff00000);
            }
            else if ((VAR27 & 0xc0000000) == 0x80000000)
            {
                VAR18.VAR17 = FUN2(0xffff0000);
            }
            else if ((VAR27 & 0xffff0000) == 0xc0a80000)
            {
                VAR18.VAR17 = FUN2(0xffff0000);
            }
            else if ((VAR27 & 0xffff0000) == 0xc6120000)
            {
                VAR18.VAR17 = FUN2(0xfffe0000);
            }
            else if ((VAR27 & 0xe0000000) == 0xe0000000)
            {
                VAR18.VAR17 = FUN2(0xffffff00);
            }
            else
            {
                VAR18.VAR17 = FUN2(0xfffffff0);
            }
        }
        else
        {
            if (!FUN4(VAR26, &VAR16))
            {
                return -1;
            }
            VAR28 = FUN6(VAR6, &VAR29, 10);
            if (*VAR29 != '')
            {
                if (!FUN4(VAR6, &VAR18))
                {
                    return -1;
                }
            }
            else if (VAR28 < 4 || VAR28 > 32)
            {
                return -1;
            }
            else
            {
                VAR18.VAR17 = FUN2(0xffffffff << (32 - VAR28));
            }
        }
        VAR16.VAR17 &= VAR18.VAR17;
        VAR19.VAR17 = VAR16.VAR17 | (FUN2(0x0202) & ~VAR18.VAR17);
        VAR20.VAR17 = VAR16.VAR17 | (FUN2(0x020f) & ~VAR18.VAR17);
        VAR21.VAR17 = VAR16.VAR17 | (FUN2(0x0203) & ~VAR18.VAR17);
    }
    if (VAR7 && !FUN4(VAR7, &VAR19))
    {
        return -1;
    }
    if ((VAR19.VAR17 & VAR18.VAR17) != VAR16.VAR17)
    {
        return -1;
    }
    if (VAR12 && !FUN4(VAR12, &VAR21))
    {
        return -1;
    }
    if ((VAR21.VAR17 & VAR18.VAR17) != VAR16.VAR17 || VAR21.VAR17 == VAR19.VAR17)
    {
        return -1;
    }
    if (VAR11 && !FUN4(VAR11, &VAR20))
    {
        return -1;
    }
    if ((VAR20.VAR17 & VAR18.VAR17) != VAR16.VAR17 || VAR20.VAR17 == VAR19.VAR17 || VAR20.VAR17 == VAR21.VAR17)
    {
        return -1;
    }
    if (VAR14 && !FUN4(VAR14, &VAR22))
    {
        return -1;
    }
    VAR23 = FUN7(&VAR34, VAR2, VAR3, VAR4);
    snprintf(VAR23->VAR35, sizeof(VAR23->VAR35), "", FUN8(VAR16), VAR5 ? "" : "");
    VAR25 = FUN9(VAR24, VAR23, VAR23);
    VAR25->VAR36 = FUN10(VAR5, VAR16, VAR18, VAR19, VAR8, VAR9, VAR10, VAR20, VAR21, VAR15, VAR25);
    FUN11(&VAR37, VAR25, VAR38);
    for (VAR31 = VAR39; VAR31; VAR31 = VAR31->VAR40)
    {
        if (VAR31->VAR41 & VAR42)
        {
            if (FUN12(VAR25, VAR31->VAR43, VAR31->VAR41 & VAR44) < 0)
                goto VAR45;
        }
        else
        {
            if (FUN13(VAR25, VAR31->VAR43, VAR31->VAR41 & VAR44) < 0)
                goto VAR45;
        }
    }
    if (!VAR13)
    {
        VAR13 = VAR46;
    }
    if (VAR13)
    {
        if (FUN14(VAR25, VAR13, VAR22) < 0)
            goto VAR45;
    }
    return 0;
VAR45:
    FUN15(VAR23);
    return -1;
}