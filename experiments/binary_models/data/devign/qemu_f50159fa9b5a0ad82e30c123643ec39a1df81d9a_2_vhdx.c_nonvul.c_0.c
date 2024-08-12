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
    const char *VAR21 = NULL;
    VHDXImageType VAR22;
    VAR4 *VAR23 = NULL;
    while (VAR3 && VAR3->VAR24)
    {
        if (!strcmp(VAR3->VAR24, VAR25))
        {
            VAR7 = VAR3->VAR26.VAR27;
        }
        else if (!strcmp(VAR3->VAR24, VAR28))
        {
            VAR10 = VAR3->VAR26.VAR27;
        }
        else if (!strcmp(VAR3->VAR24, VAR29))
        {
            VAR12 = VAR3->VAR26.VAR27;
        }
        else if (!strcmp(VAR3->VAR24, VAR30))
        {
            VAR21 = VAR3->VAR26.VAR31;
        }
        else if (!strcmp(VAR3->VAR24, VAR32))
        {
            VAR15 = VAR3->VAR26.VAR27 != 0;
        }
        VAR3++;
    }
    if (VAR7 > VAR33)
    {
        FUN2(VAR5, VAR34, "");
        VAR6 = -VAR34;
        goto VAR35;
    }
    if (VAR21 == NULL)
    {
        VAR21 = "";
    }
    if (!strcmp(VAR21, ""))
    {
        VAR22 = VAR36;
    }
    else if (!strcmp(VAR21, ""))
    {
        VAR22 = VAR37;
    }
    else if (!strcmp(VAR21, ""))
    {
        FUN2(VAR5, VAR38, "");
        VAR6 = -VAR38;
        goto VAR35;
    }
    else
    {
        VAR6 = -VAR34;
        goto VAR35;
    }
    if (VAR12 == 0)
    {
        if (VAR7 > 32 * VAR39)
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
    VAR10 = FUN3(VAR10, VAR11);
    VAR12 = FUN3(VAR12, VAR11);
    VAR12 = VAR12 > VAR40 ? VAR40 : VAR12;
    VAR6 = FUN4(VAR1, VAR3, &VAR23);
    if (VAR6 < 0)
    {
        FUN5(VAR5, VAR23);
        goto VAR35;
    }
    VAR6 = FUN6(&VAR20, VAR1, NULL, NULL, VAR41, &VAR23);
    if (VAR6 < 0)
    {
        FUN5(VAR5, VAR23);
        goto VAR35;
    }
    VAR17 = FUN7("" VAR42, -1, NULL, &VAR18, NULL);
    VAR13 = FUN8(VAR43);
    VAR6 = FUN9(VAR20, VAR44, &VAR13, sizeof(VAR13));
    if (VAR6 < 0)
    {
        goto VAR45;
    }
    if (VAR17)
    {
        VAR6 = FUN9(VAR20, VAR44 + sizeof(VAR13), VAR17, VAR18 * sizeof(VAR16));
        if (VAR6 < 0)
        {
            goto VAR45;
        }
    }
    VAR6 = FUN10(VAR20, VAR7, VAR10);
    if (VAR6 < 0)
    {
        goto VAR45;
    }
    VAR6 = FUN11(VAR20, VAR7, VAR12, 512, VAR10, VAR15, VAR22, &VAR14);
    if (VAR6 < 0)
    {
        goto VAR45;
    }
    VAR6 = FUN12(VAR20, VAR7, VAR12, 512, VAR14, VAR22);
    if (VAR6 < 0)
    {
        goto VAR45;
    }
VAR45:
    FUN13(VAR20);
VAR35:
    FUN14(VAR17);
    return VAR6;
}