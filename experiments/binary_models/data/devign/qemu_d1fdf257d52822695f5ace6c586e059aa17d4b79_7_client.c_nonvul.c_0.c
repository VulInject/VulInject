int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, VAR6 *VAR7, const char *VAR8, VAR1 **VAR9, VAR10 *VAR11, VAR12 **VAR13)
{
    char VAR14[256];
    uint64_t VAR15, VAR16;
    int VAR17;
    bool VAR18 = true;
    FUN2("", VAR7, VAR8 ? VAR8 : "");
    VAR17 = -VAR19;
    if (VAR9)
    {
        *VAR9 = NULL;
    }
    if (VAR7 && !VAR9)
    {
        FUN3(VAR13, "");
        goto VAR20;
    }
    if (FUN4(VAR2, VAR14, 8, VAR13) < 0)
    {
        FUN5(VAR13, "");
        goto VAR20;
    }
    VAR14[8] = '';
    if (strlen(VAR14) == 0)
    {
        FUN3(VAR13, "");
        goto VAR20;
    }
    FUN2("", FUN6(VAR14[0]) ? VAR14[0] : '', FUN6(VAR14[1]) ? VAR14[1] : '', FUN6(VAR14[2]) ? VAR14[2] : '', FUN6(VAR14[3]) ? VAR14[3] : '', FUN6(VAR14[4]) ? VAR14[4] : '', FUN6(VAR14[5]) ? VAR14[5] : '', FUN6(VAR14[6]) ? VAR14[6] : '', FUN6(VAR14[7]) ? VAR14[7] : '');
    if (memcmp(VAR14, "", 8) != 0)
    {
        FUN3(VAR13, "");
        goto VAR20;
    }
    if (FUN4(VAR2, &VAR15, sizeof(VAR15), VAR13) < 0)
    {
        FUN5(VAR13, "");
        goto VAR20;
    }
    VAR15 = FUN7(VAR15);
    FUN2("" VAR21, VAR15);
    if (VAR15 == VAR22)
    {
        uint32_t VAR23 = 0;
        uint16_t VAR24;
        bool VAR25 = false;
        if (FUN4(VAR2, &VAR24, sizeof(VAR24), VAR13) < 0)
        {
            FUN5(VAR13, "");
            goto VAR20;
        }
        VAR24 = FUN8(VAR24);
        FUN2("" VAR26, VAR24);
        if (VAR24 & VAR27)
        {
            VAR25 = true;
            FUN2("");
            VAR23 |= VAR28;
        }
        if (VAR24 & VAR29)
        {
            VAR18 = false;
            FUN2("");
            VAR23 |= VAR30;
        }
        VAR23 = FUN9(VAR23);
        if (FUN10(VAR2, &VAR23, sizeof(VAR23), VAR13) < 0)
        {
            FUN5(VAR13, "");
            goto VAR20;
        }
        if (VAR7)
        {
            if (VAR25)
            {
                *VAR9 = FUN11(VAR2, VAR7, VAR8, VAR13);
                if (!*VAR9)
                {
                    goto VAR20;
                }
                VAR2 = *VAR9;
            }
            else
            {
                FUN3(VAR13, "");
                goto VAR20;
            }
        }
        if (!VAR3)
        {
            FUN2(""\"");
            VAR3 = "";
        }
        if (VAR25)
        {
            if (FUN12(VAR2, VAR3, VAR13) < 0)
            {
                goto VAR20;
            }
        }
        if (FUN13(VAR2, VAR31, -1, VAR3, VAR13) < 0)
        {
            goto VAR20;
        }
        if (FUN4(VAR2, &VAR16, sizeof(VAR16), VAR13) < 0)
        {
            FUN5(VAR13, "");
            goto VAR20;
        }
        *VAR11 = FUN7(VAR16);
        if (FUN4(VAR2, VAR5, sizeof(*VAR5), VAR13) < 0)
        {
            FUN5(VAR13, "");
            goto VAR20;
        }
        FUN14(VAR5);
    }
    else if (VAR15 == VAR32)
    {
        uint32_t VAR33;
        if (VAR3)
        {
            FUN3(VAR13, "");
            goto VAR20;
        }
        if (VAR7)
        {
            FUN3(VAR13, "");
            goto VAR20;
        }
        if (FUN4(VAR2, &VAR16, sizeof(VAR16), VAR13) < 0)
        {
            FUN5(VAR13, "");
            goto VAR20;
        }
        *VAR11 = FUN7(VAR16);
        FUN2("" VAR34, *VAR11);
        if (FUN4(VAR2, &VAR33, sizeof(VAR33), VAR13) < 0)
        {
            FUN5(VAR13, "");
            goto VAR20;
        }
        FUN15(&VAR33);
        if (VAR33 & ~0xffff)
        {
            FUN3(VAR13, "" VAR26, VAR33);
            goto VAR20;
        }
        *VAR5 = VAR33;
    }
    else
    {
        FUN3(VAR13, "");
        goto VAR20;
    }
    FUN2("" VAR34 "" VAR35, *VAR11, *VAR5);
    if (VAR18 && FUN16(VAR2, 124, VAR13) < 0)
    {
        FUN5(VAR13, "");
        goto VAR20;
    }
    VAR17 = 0;
VAR20:
    return VAR17;
}