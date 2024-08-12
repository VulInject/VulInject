int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5, const char *VAR6, VAR1 **VAR7, VAR8 *VAR9, VAR10 **VAR11)
{
    char VAR12[256];
    uint64_t VAR13;
    int VAR14;
    bool VAR15 = true;
    FUN2(VAR5, VAR6 ? VAR6 : "");
    VAR14 = -VAR16;
    if (VAR7)
    {
        *VAR7 = NULL;
    }
    if (VAR5 && !VAR7)
    {
        FUN3(VAR11, "");
        goto VAR17;
    }
    if (FUN4(VAR2, VAR12, 8, VAR11) < 0)
    {
        FUN5(VAR11, "");
        goto VAR17;
    }
    VAR12[8] = '';
    if (strlen(VAR12) == 0)
    {
        FUN3(VAR11, "");
        goto VAR17;
    }
    VAR13 = FUN6(VAR12);
    FUN7(VAR13);
    if (memcmp(VAR12, "", 8) != 0)
    {
        FUN3(VAR11, "");
        goto VAR17;
    }
    if (FUN4(VAR2, &VAR13, sizeof(VAR13), VAR11) < 0)
    {
        FUN5(VAR11, "");
        goto VAR17;
    }
    VAR13 = FUN8(VAR13);
    FUN7(VAR13);
    if (VAR13 == VAR18)
    {
        uint32_t VAR19 = 0;
        uint16_t VAR20;
        bool VAR21 = false;
        if (FUN4(VAR2, &VAR20, sizeof(VAR20), VAR11) < 0)
        {
            FUN5(VAR11, "");
            goto VAR17;
        }
        VAR20 = FUN9(VAR20);
        FUN10(VAR20);
        if (VAR20 & VAR22)
        {
            VAR21 = true;
            VAR19 |= VAR23;
        }
        if (VAR20 & VAR24)
        {
            VAR15 = false;
            VAR19 |= VAR25;
        }
        VAR19 = FUN11(VAR19);
        if (FUN12(VAR2, &VAR19, sizeof(VAR19), VAR11) < 0)
        {
            FUN5(VAR11, "");
            goto VAR17;
        }
        if (VAR5)
        {
            if (VAR21)
            {
                *VAR7 = FUN13(VAR2, VAR5, VAR6, VAR11);
                if (!*VAR7)
                {
                    goto VAR17;
                }
                VAR2 = *VAR7;
            }
            else
            {
                FUN3(VAR11, "");
                goto VAR17;
            }
        }
        if (!VAR3)
        {
            FUN14();
            VAR3 = "";
        }
        if (VAR21)
        {
            int VAR26;
            if (VAR27)
            {
                VAR26 = FUN15(VAR2, VAR28, VAR11);
                if (VAR26 < 0)
                {
                    goto VAR17;
                }
                VAR9->VAR27 = VAR26 == 1;
            }
            VAR26 = FUN16(VAR2, VAR3, VAR9, VAR11);
            if (VAR26 < 0)
            {
                goto VAR17;
            }
            if (VAR26 > 0)
            {
                return 0;
            }
            if (FUN17(VAR2, VAR3, VAR11) < 0)
            {
                goto VAR17;
            }
        }
        if (FUN18(VAR2, VAR29, -1, VAR3, VAR11) < 0)
        {
            goto VAR17;
        }
        if (FUN4(VAR2, &VAR9->VAR30, sizeof(VAR9->VAR30), VAR11) < 0)
        {
            FUN5(VAR11, "");
            goto VAR17;
        }
        FUN19(&VAR9->VAR30);
        if (FUN4(VAR2, &VAR9->VAR31, sizeof(VAR9->VAR31), VAR11) < 0)
        {
            FUN5(VAR11, "");
            goto VAR17;
        }
        FUN20(&VAR9->VAR31);
    }
    else if (VAR13 == VAR32)
    {
        uint32_t VAR33;
        if (VAR3)
        {
            FUN3(VAR11, "");
            goto VAR17;
        }
        if (VAR5)
        {
            FUN3(VAR11, "");
            goto VAR17;
        }
        if (FUN4(VAR2, &VAR9->VAR30, sizeof(VAR9->VAR30), VAR11) < 0)
        {
            FUN5(VAR11, "");
            goto VAR17;
        }
        FUN19(&VAR9->VAR30);
        if (FUN4(VAR2, &VAR33, sizeof(VAR33), VAR11) < 0)
        {
            FUN5(VAR11, "");
            goto VAR17;
        }
        FUN21(&VAR33);
        if (VAR33 & ~0xffff)
        {
            FUN3(VAR11, "" VAR34, VAR33);
            goto VAR17;
        }
        VAR9->VAR31 = VAR33;
    }
    else
    {
        FUN3(VAR11, "");
        goto VAR17;
    }
    FUN22(VAR9->VAR30, VAR9->VAR31);
    if (VAR15 && FUN23(VAR2, 124, VAR11) < 0)
    {
        FUN5(VAR11, "");
        goto VAR17;
    }
    VAR14 = 0;
VAR17:
    return VAR14;