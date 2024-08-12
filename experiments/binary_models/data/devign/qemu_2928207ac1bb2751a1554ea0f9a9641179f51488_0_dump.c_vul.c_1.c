static int FUN1(VAR1 *VAR2, int VAR3, bool VAR4, DumpGuestMemoryFormat VAR5, bool VAR6, bool VAR7, int64_t VAR8, int64_t VAR9, VAR10 **VAR11)
{
    VAR12 *VAR13;
    int VAR14;
    VAR10 *VAR15 = NULL;
    int VAR16;
    if (VAR4 && VAR5 != VAR17)
    {
        assert(!VAR6 && !VAR7);
    }
    if (FUN2())
    {
        FUN3(VAR18);
        VAR2->VAR19 = true;
    }
    else
    {
        VAR2->VAR19 = false;
    }
    FUN4();
    VAR14 = 0;
    FUN5(VAR13) { VAR14++; }
    VAR2->VAR3 = VAR3;
    VAR2->VAR7 = VAR7;
    VAR2->VAR8 = VAR8;
    VAR2->VAR9 = VAR9;
    FUN6(&VAR2->VAR20);
    FUN7(&VAR2->VAR20);
    VAR2->VAR21 = FUN8(VAR2);
    if (VAR2->VAR21 == -1)
    {
        FUN9(VAR11, VAR22, "");
        goto VAR23;
    }
    VAR16 = FUN10(&VAR2->VAR24, &VAR2->VAR20);
    if (VAR16 < 0)
    {
        FUN9(VAR11, VAR25);
        goto VAR23;
    }
    VAR2->VAR26 = FUN11(VAR2->VAR24.VAR27, VAR2->VAR24.VAR28, VAR14);
    if (VAR2->VAR26 < 0)
    {
        FUN9(VAR11, VAR25);
        goto VAR23;
    }
    FUN12(&VAR2->VAR29);
    if (VAR6)
    {
        FUN13(&VAR2->VAR29, &VAR2->VAR20, &VAR15);
        if (VAR15 != NULL)
        {
            FUN14(VAR11, VAR15);
            goto VAR23;
        }
    }
    else
    {
        FUN15(&VAR2->VAR29, &VAR2->VAR20);
    }
    VAR2->VAR14 = VAR14;
    FUN16(VAR2);
    uint64_t VAR30;
    VAR30 = FUN17(FUN17(VAR2->VAR31, VAR32), VAR33);
    VAR2->VAR34 = VAR30 * VAR33;
    if (VAR4 && VAR5 != VAR17)
    {
        switch (VAR5)
        {
        case VAR35:
            VAR2->VAR36 = VAR37;
            break;
        case VAR38:
            if (FUN18() != VAR39)
            {
                FUN19(VAR11, "");
                goto VAR23;
            }
            VAR2->VAR36 = VAR40;
            break;
        case VAR41:
            VAR2->VAR36 = VAR42;
            break;
        default:
            VAR2->VAR36 = 0;
        }
        return 0;
    }
    if (VAR2->VAR7)
    {
        FUN20(&VAR2->VAR29, VAR2->VAR8, VAR2->VAR9);
    }
    VAR2->VAR43 = 1;
    if (VAR2->VAR29.VAR44 < VAR45 - 2)
    {
        VAR2->VAR43 += VAR2->VAR29.VAR44;
        VAR2->VAR46 = false;
    }
    else
    {
        VAR2->VAR46 = true;
        VAR2->VAR43 = VAR47;
        VAR2->VAR48 = 1;
        if (VAR2->VAR29.VAR44 <= VAR49 - 1)
        {
            VAR2->VAR48 += VAR2->VAR29.VAR44;
        }
        else
        {
            VAR2->VAR48 = VAR49;
        }
    }
    if (VAR2->VAR24.VAR27 == VAR50)
    {
        if (VAR2->VAR46)
        {
            VAR2->VAR51 = sizeof(VAR52) + sizeof(VAR53) * VAR2->VAR48 + sizeof(VAR54) + VAR2->VAR26;
        }
        else
        {
            VAR2->VAR51 = sizeof(VAR52) + sizeof(VAR53) * VAR2->VAR43 + VAR2->VAR26;
        }
    }
    else
    {
        if (VAR2->VAR46)
        {
            VAR2->VAR51 = sizeof(VAR55) + sizeof(VAR56) * VAR2->VAR48 + sizeof(VAR57) + VAR2->VAR26;
        }
        else
        {
            VAR2->VAR51 = sizeof(VAR55) + sizeof(VAR56) * VAR2->VAR43 + VAR2->VAR26;
        }
    }
    return 0;
VAR23:
    FUN21(&VAR2->VAR20);
    if (VAR2->VAR19)
    {
        FUN22();
    }
    return -1;
}