static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, const char *VAR6, int VAR7, const char *VAR8, const char *VAR9, const char *VAR10, const char *VAR11, const char *VAR12, const char *VAR13, const char *VAR14, const char *VAR15, const char *VAR16)
{
    struct in_addr VAR17 = {.VAR18 = FUN2(0x0a000200)};
    struct in_addr VAR19 = {.VAR18 = FUN2(0xffffff00)};
    struct in_addr VAR20 = {.VAR18 = FUN2(0x0a000202)};
    struct in_addr VAR21 = {.VAR18 = FUN2(0x0a00020f)};
    struct in_addr VAR22 = {.VAR18 = FUN2(0x0a000203)};
    struct in_addr VAR23 = {.VAR18 = 0};
    VAR24 *VAR25;
    char VAR26[20];
    uint32_t VAR27;
    int VAR28;
    char *VAR29;
    struct VAR30 *VAR31;
    if (!VAR11)
    {
        VAR11 = VAR32;
    }
    if (!VAR12)
    {
        VAR12 = VAR33;
    }
    if (VAR8)
    {
        if (FUN3(VAR26, sizeof(VAR26), &VAR8, '') < 0)
        {
            if (!FUN4(VAR8, &VAR17))
            {
                return -1;
            }
            VAR27 = FUN5(VAR17.VAR18);
            if (!(VAR27 & 0x80000000))
            {
                VAR19.VAR18 = FUN2(0xff000000);
            }
            else if ((VAR27 & 0xfff00000) == 0xac100000)
            {
                VAR19.VAR18 = FUN2(0xfff00000);
            }
            else if ((VAR27 & 0xc0000000) == 0x80000000)
            {
                VAR19.VAR18 = FUN2(0xffff0000);
            }
            else if ((VAR27 & 0xffff0000) == 0xc0a80000)
            {
                VAR19.VAR18 = FUN2(0xffff0000);
            }
            else if ((VAR27 & 0xffff0000) == 0xc6120000)
            {
                VAR19.VAR18 = FUN2(0xfffe0000);
            }
            else if ((VAR27 & 0xe0000000) == 0xe0000000)
            {
                VAR19.VAR18 = FUN2(0xffffff00);
            }
            else
            {
                VAR19.VAR18 = FUN2(0xfffffff0);
            }
        }
        else
        {
            if (!FUN4(VAR26, &VAR17))
            {
                return -1;
            }
            VAR28 = FUN6(VAR8, &VAR29, 10);
            if (*VAR29 != '')
            {
                if (!FUN4(VAR8, &VAR19))
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
                VAR19.VAR18 = FUN2(0xffffffff << (32 - VAR28));
            }
        }
        VAR17.VAR18 &= VAR19.VAR18;
        VAR20.VAR18 = VAR17.VAR18 | (FUN2(0x0202) & ~VAR19.VAR18);
        VAR21.VAR18 = VAR17.VAR18 | (FUN2(0x020f) & ~VAR19.VAR18);
        VAR22.VAR18 = VAR17.VAR18 | (FUN2(0x0203) & ~VAR19.VAR18);
    }
    if (VAR9 && !FUN4(VAR9, &VAR20))
    {
        return -1;
    }
    if ((VAR20.VAR18 & VAR19.VAR18) != VAR17.VAR18)
    {
        return -1;
    }
    if (VAR13 && !FUN4(VAR13, &VAR21))
    {
        return -1;
    }
    if ((VAR21.VAR18 & VAR19.VAR18) != VAR17.VAR18 || VAR21.VAR18 == VAR20.VAR18 || VAR21.VAR18 == VAR22.VAR18)
    {
        return -1;
    }
    if (VAR14 && !FUN4(VAR14, &VAR22))
    {
        return -1;
    }
    if ((VAR22.VAR18 & VAR19.VAR18) != VAR17.VAR18 || VAR22.VAR18 == VAR20.VAR18)
    {
        return -1;
    }
    if (VAR16 && !FUN4(VAR16, &VAR23))
    {
        return -1;
    }
    VAR25 = FUN7(sizeof(VAR24));
    VAR25->VAR34 = FUN8(VAR7, VAR17, VAR19, VAR20, VAR10, VAR11, VAR12, VAR21, VAR22, VAR25);
    FUN9(&VAR35, VAR25, VAR36);
    for (VAR31 = VAR37; VAR31; VAR31 = VAR31->VAR38)
    {
        if (VAR31->VAR39 & VAR40)
        {
            FUN10(VAR25, VAR2, VAR31->VAR41, VAR31->VAR39 & VAR42);
        }
        else
        {
            FUN11(VAR25, VAR2, VAR31->VAR41, VAR31->VAR39 & VAR42);
        }
    }
    if (!VAR15)
    {
        VAR15 = VAR43;
    }
    if (VAR15)
    {
        FUN12(VAR25, VAR2, VAR15, VAR23);
    }
    VAR25->VAR44 = FUN13(VAR4, VAR5, VAR6, NULL, VAR45, NULL, VAR46, VAR25);
    snprintf(VAR25->VAR44->VAR47, sizeof(VAR25->VAR44->VAR47), "", FUN14(VAR17), VAR7 ? '' : '');
    return 0;
}