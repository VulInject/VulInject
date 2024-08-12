static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, int VAR5, bool VAR6, const char *VAR7, const char *VAR8, bool VAR9, const char *VAR10, int VAR11, const char *VAR12, const char *VAR13, const char *VAR14, const char *VAR15, const char *VAR16, const char *VAR17, const char *VAR18, const char *VAR19, const char *VAR20, const char **VAR21)
{
    struct in_addr VAR22 = {.VAR23 = FUN2(0x0a000200)};
    struct in_addr VAR24 = {.VAR23 = FUN2(0xffffff00)};
    struct in_addr VAR25 = {.VAR23 = FUN2(0x0a000202)};
    struct in_addr VAR26 = {.VAR23 = FUN2(0x0a00020f)};
    struct in_addr VAR27 = {.VAR23 = FUN2(0x0a000203)};
    struct in6_addr VAR28;
    struct in6_addr VAR29;
    struct in6_addr VAR30;
    struct in_addr VAR31 = {.VAR23 = 0};
    VAR1 *VAR32;
    VAR33 *VAR34;
    char VAR35[20];
    uint32_t VAR36;
    int VAR37;
    char *VAR38;
    struct VAR39 *VAR40;
    if (!VAR6 && (VAR7 || VAR8 || VAR17))
    {
        return -1;
    }
    if (!VAR9 && (VAR10 || VAR12 || VAR18))
    {
        return -1;
    }
    if (!VAR6 && !VAR9)
    {
        return -1;
    }
    if (!VAR14)
    {
        VAR14 = VAR41;
    }
    if (!VAR15)
    {
        VAR15 = VAR42;
    }
    if (VAR7)
    {
        if (FUN3(VAR35, sizeof(VAR35), &VAR7, '') < 0)
        {
            if (!FUN4(VAR7, &VAR22))
            {
                return -1;
            }
            VAR36 = FUN5(VAR22.VAR23);
            if (!(VAR36 & 0x80000000))
            {
                VAR24.VAR23 = FUN2(0xff000000);
            }
            else if ((VAR36 & 0xfff00000) == 0xac100000)
            {
                VAR24.VAR23 = FUN2(0xfff00000);
            }
            else if ((VAR36 & 0xc0000000) == 0x80000000)
            {
                VAR24.VAR23 = FUN2(0xffff0000);
            }
            else if ((VAR36 & 0xffff0000) == 0xc0a80000)
            {
                VAR24.VAR23 = FUN2(0xffff0000);
            }
            else if ((VAR36 & 0xffff0000) == 0xc6120000)
            {
                VAR24.VAR23 = FUN2(0xfffe0000);
            }
            else if ((VAR36 & 0xe0000000) == 0xe0000000)
            {
                VAR24.VAR23 = FUN2(0xffffff00);
            }
            else
            {
                VAR24.VAR23 = FUN2(0xfffffff0);
            }
        }
        else
        {
            if (!FUN4(VAR35, &VAR22))
            {
                return -1;
            }
            VAR37 = FUN6(VAR7, &VAR38, 10);
            if (*VAR38 != '')
            {
                if (!FUN4(VAR7, &VAR24))
                {
                    return -1;
                }
            }
            else if (VAR37 < 4 || VAR37 > 32)
            {
                return -1;
            }
            else
            {
                VAR24.VAR23 = FUN2(0xffffffff << (32 - VAR37));
            }
        }
        VAR22.VAR23 &= VAR24.VAR23;
        VAR25.VAR23 = VAR22.VAR23 | (FUN2(0x0202) & ~VAR24.VAR23);
        VAR26.VAR23 = VAR22.VAR23 | (FUN2(0x020f) & ~VAR24.VAR23);
        VAR27.VAR23 = VAR22.VAR23 | (FUN2(0x0203) & ~VAR24.VAR23);
    }
    if (VAR8 && !FUN4(VAR8, &VAR25))
    {
        return -1;
    }
    if ((VAR25.VAR23 & VAR24.VAR23) != VAR22.VAR23)
    {
        return -1;
    }
    if (VAR17 && !FUN4(VAR17, &VAR27))
    {
        return -1;
    }
    if ((VAR27.VAR23 & VAR24.VAR23) != VAR22.VAR23 || VAR27.VAR23 == VAR25.VAR23)
    {
        return -1;
    }
    if (VAR16 && !FUN4(VAR16, &VAR26))
    {
        return -1;
    }
    if ((VAR26.VAR23 & VAR24.VAR23) != VAR22.VAR23 || VAR26.VAR23 == VAR25.VAR23 || VAR26.VAR23 == VAR27.VAR23)
    {
        return -1;
    }
    if (VAR20 && !FUN4(VAR20, &VAR31))
    {
        return -1;
    }
    if (VAR10)
    {
        return -1;
    }
    memset(&VAR28, 0, sizeof(VAR28));
    VAR28.VAR43[0] = 0xfe;
    VAR28.VAR43[1] = 0xc0;
    if (!VAR10)
    {
        VAR10 = "";
    }
    if (!FUN7(VAR44, VAR10, &VAR28))
    {
        return -1;
    }
    if (!VAR11)
    {
        VAR11 = 64;
    }
    if (VAR11 < 0 || VAR11 > 126)
    {
        return -1;
    }
    if (VAR12)
    {
        return -1;
        if (!FUN7(VAR44, VAR12, &VAR29))
        {
            return -1;
        }
        if (!FUN8(&VAR28, &VAR29, VAR11))
        {
            return -1;
        }
    }
    else
    {
        VAR29 = VAR28;
        VAR29.VAR43[15] |= 2;
    }
    if (VAR18)
    {
        return -1;
        if (!FUN7(VAR44, VAR18, &VAR30))
        {
            return -1;
        }
        if (!FUN8(&VAR28, &VAR30, VAR11))
        {
            return -1;
        }
    }
    else
    {
        VAR30 = VAR28;
        VAR30.VAR43[15] |= 3;
    }
    VAR32 = FUN9(&VAR45, VAR2, VAR3, VAR4);
    snprintf(VAR32->VAR46, sizeof(VAR32->VAR46), "", FUN10(VAR22), VAR5 ? "" : "");
    VAR34 = FUN11(VAR33, VAR32, VAR32);
    VAR34->VAR47 = FUN12(VAR5, VAR6, VAR22, VAR24, VAR25, VAR9, VAR28, VAR11, VAR29, VAR13, VAR14, VAR15, VAR26, VAR27, VAR30, VAR21, VAR34);
    FUN13(&VAR48, VAR34, VAR49);
    for (VAR40 = VAR50; VAR40; VAR40 = VAR40->VAR51)
    {
        if (VAR40->VAR52 & VAR53)
        {
            if (FUN14(VAR34, VAR40->VAR54, VAR40->VAR52 & VAR55) < 0)
                goto VAR56;
        }
        else
        {
            if (FUN15(VAR34, VAR40->VAR54, VAR40->VAR52 & VAR55) < 0)
                goto VAR56;
        }
    }
    if (!VAR19)
    {
        VAR19 = VAR57;
    }
    if (VAR19)
    {
        if (FUN16(VAR34, VAR19, VAR31) < 0)
            goto VAR56;
    }
    VAR34->VAR58.VAR59 = VAR60;
    FUN17(&VAR34->VAR58);
    return 0;
VAR56:
    FUN18(VAR32);
    return -1;
}