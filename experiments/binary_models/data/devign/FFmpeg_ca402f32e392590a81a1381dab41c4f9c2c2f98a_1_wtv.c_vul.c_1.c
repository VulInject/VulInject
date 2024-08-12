static VAR1 *FUN1(VAR2 *VAR3, VAR1 *VAR4, int VAR5, ff_asf_guid VAR6, ff_asf_guid VAR7, ff_asf_guid VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR3->VAR12;
    VAR13 *VAR14 = VAR11->VAR14;
    if (!FUN2(VAR7, VAR15) && !FUN2(VAR8, VAR16))
    {
        ff_asf_guid VAR17;
        ff_asf_guid VAR18;
        if (VAR9 < 32)
        {
            FUN3(VAR3, VAR19, "");
            FUN4(VAR14, VAR9);
            return NULL;
        }
        FUN4(VAR14, VAR9 - 32);
        FUN5(VAR14, &VAR17);
        FUN5(VAR14, &VAR18);
        FUN6(VAR14, -VAR9, VAR20);
        VAR4 = FUN1(VAR3, VAR4, VAR5, VAR6, VAR17, VAR18, VAR9 - 32);
        FUN4(VAR14, 32);
        return VAR4;
    }
    else if (!FUN2(VAR6, VAR21))
    {
        VAR4 = FUN7(VAR3, VAR4, VAR5, VAR22);
        if (!VAR4)
            return NULL;
        if (!FUN2(VAR8, VAR23))
        {
            FUN8(VAR14, VAR4->VAR24, VAR9);
        }
        else
        {
            if (FUN2(VAR8, VAR25))
                FUN3(VAR3, VAR19, "" VAR26 "", FUN9(VAR8));
            FUN4(VAR14, VAR9);
        }
        if (!memcmp(VAR7 + 4, (const VAR27[]){VAR28}, 12))
        {
            VAR4->VAR24->VAR29 = FUN10(FUN11(VAR7), VAR4->VAR24->VAR30);
        }
        else if (!FUN2(VAR7, VAR31))
        {
            if (VAR4->VAR24->VAR32 && VAR4->VAR24->VAR33 >= 22)
                FUN12(VAR4);
            else
                FUN3(VAR3, VAR19, "");
        }
        else
        {
            VAR4->VAR24->VAR29 = FUN13(VAR34, VAR7);
            if (VAR4->VAR24->VAR29 == VAR35)
                FUN3(VAR3, VAR19, "" VAR26 "", FUN9(VAR7));
        }
        return VAR4;
    }
    else if (!FUN2(VAR6, VAR36))
    {
        VAR4 = FUN7(VAR3, VAR4, VAR5, VAR37);
        if (!VAR4)
            return NULL;
        if (!FUN2(VAR8, VAR38))
        {
            int VAR39 = FUN14(VAR3, VAR4);
            FUN4(VAR14, FUN15(VAR9 - VAR39, 0));
        }
        else if (!FUN2(VAR8, VAR40))
        {
            int VAR39 = FUN14(VAR3, VAR4);
            FUN4(VAR14, FUN15(VAR9 - VAR39, 0));
        }
        else
        {
            if (FUN2(VAR8, VAR25))
                FUN3(VAR3, VAR19, "" VAR26 "", FUN9(VAR8));
            FUN4(VAR14, VAR9);
        }
        if (!memcmp(VAR7 + 4, (const VAR27[]){VAR28}, 12))
        {
            VAR4->VAR24->VAR29 = FUN16(VAR41, FUN11(VAR7));
        }
        else
        {
            VAR4->VAR24->VAR29 = FUN13(VAR42, VAR7);
        }
        if (VAR4->VAR24->VAR29 == VAR35)
            FUN3(VAR3, VAR19, "" VAR26 "", FUN9(VAR7));
        return VAR4;
    }
    else if (!FUN2(VAR6, VAR43) && !FUN2(VAR7, VAR44))
    {
        VAR4 = FUN7(VAR3, VAR4, VAR5, VAR45);
        if (!VAR4)
            return NULL;
        if (FUN2(VAR8, VAR25))
            FUN3(VAR3, VAR19, "" VAR26 "", FUN9(VAR8));
        FUN4(VAR14, VAR9);
        VAR4->VAR24->VAR29 = VAR46;
        return VAR4;
    }
    else if (!FUN2(VAR6, VAR47) && (!FUN2(VAR7, VAR48) || !FUN2(VAR7, VAR49)))
    {
        VAR4 = FUN7(VAR3, VAR4, VAR5, VAR45);
        if (!VAR4)
            return NULL;
        if (FUN2(VAR8, VAR25))
            FUN3(VAR3, VAR19, "" VAR26 "", FUN9(VAR8));
        FUN4(VAR14, VAR9);
        VAR4->VAR24->VAR29 = VAR50;
        return VAR4;
    }
    else if (!FUN2(VAR6, VAR51) && !FUN2(VAR7, VAR52))
    {
        if (FUN2(VAR8, VAR25))
            FUN3(VAR3, VAR19, "" VAR26 "", FUN9(VAR8));
        FUN4(VAR14, VAR9);
        return NULL;
    }
    FUN3(VAR3, VAR19, "" VAR26 "" VAR26 "" VAR26 "", FUN9(VAR6), FUN9(VAR7), FUN9(VAR8));
    FUN4(VAR14, VAR9);
    return NULL;
}