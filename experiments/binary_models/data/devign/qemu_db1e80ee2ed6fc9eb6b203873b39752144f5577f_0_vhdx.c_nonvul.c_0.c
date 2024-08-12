static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    int VAR6 = 0;
    uint64_t VAR7 = (VAR8)2 * VAR9;
    uint32_t VAR10 = 1 * VAR11;
    uint32_t VAR12 = 0;
    uint64_t VAR13;
    uint64_t VAR14;
    bool VAR15 = false;
    VAR16 *VAR17 = NULL;
    glong VAR18;
    VAR19 *VAR20;
    char *VAR21 = NULL;
    VHDXImageType VAR22;
    VAR4 *VAR23 = NULL;
    VAR7 = FUN2(FUN3(VAR3, VAR24, 0), VAR25);
    VAR10 = FUN3(VAR3, VAR26, 0);
    VAR12 = FUN3(VAR3, VAR27, 0);
    VAR21 = FUN4(VAR3, VAR28);
    VAR15 = FUN5(VAR3, VAR29, true);
    if (VAR7 > VAR30)
    {
        FUN6(VAR5, VAR31, "");
        VAR6 = -VAR31;
        goto VAR32;
    }
    if (VAR21 == NULL)
    {
        VAR21 = FUN7("");
    }
    if (!strcmp(VAR21, ""))
    {
        VAR22 = VAR33;
    }
    else if (!strcmp(VAR21, ""))
    {
        VAR22 = VAR34;
    }
    else if (!strcmp(VAR21, ""))
    {
        FUN6(VAR5, VAR35, "");
        VAR6 = -VAR35;
        goto VAR32;
    }
    else
    {
        VAR6 = -VAR31;
        goto VAR32;
    }
    if (VAR12 == 0)
    {
        if (VAR7 > 32 * VAR36)
        {
            VAR12 = 64 * VAR11;
        }
        else if (VAR7 > (VAR8)100 * VAR9)
        {
            VAR12 = 32 * VAR11;
        }
        else if (VAR7 > 1 * VAR9)
        {
            VAR12 = 16 * VAR11;
        }
        else
        {
            VAR12 = 8 * VAR11;
        }
    }
    VAR10 = FUN2(VAR10, VAR11);
    VAR12 = FUN2(VAR12, VAR11);
    VAR12 = VAR12 > VAR37 ? VAR37 : VAR12;
    VAR6 = FUN8(VAR1, VAR3, &VAR23);
    if (VAR6 < 0)
    {
        FUN9(VAR5, VAR23);
        goto VAR32;
    }
    VAR20 = FUN10(VAR1, NULL, NULL, VAR38 | VAR39, &VAR23);
    if (VAR20 == NULL)
    {
        FUN9(VAR5, VAR23);
        VAR6 = -VAR40;
        goto VAR32;
    }
    FUN11(VAR20, true);
    VAR17 = FUN12("" VAR41, -1, NULL, &VAR18, NULL);
    VAR13 = FUN13(VAR42);
    VAR6 = FUN14(VAR20, VAR43, &VAR13, sizeof(VAR13), 0);
    if (VAR6 < 0)
    {
        goto VAR44;
    }
    if (VAR17)
    {
        VAR6 = FUN14(VAR20, VAR43 + sizeof(VAR13), VAR17, VAR18 * sizeof(VAR16), 0);
        if (VAR6 < 0)
        {
            goto VAR44;
        }
    }
    VAR6 = FUN15(VAR20, VAR7, VAR10);
    if (VAR6 < 0)
    {
        goto VAR44;
    }
    VAR6 = FUN16(VAR20, VAR7, VAR12, 512, VAR10, VAR15, VAR22, &VAR14);
    if (VAR6 < 0)
    {
        goto VAR44;
    }
    VAR6 = FUN17(VAR20, VAR7, VAR12, 512, VAR14, VAR22);
    if (VAR6 < 0)
    {
        goto VAR44;
    }
VAR44:
    FUN18(VAR20);
VAR32:
    FUN19(VAR21);
    FUN19(VAR17);
    return VAR6;
}