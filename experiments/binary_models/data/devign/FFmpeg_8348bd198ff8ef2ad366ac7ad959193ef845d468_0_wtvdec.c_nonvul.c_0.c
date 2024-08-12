static VAR1 *FUN1(VAR2 *VAR3, VAR1 *VAR4, int VAR5, ff_asf_guid VAR6, ff_asf_guid VAR7, ff_asf_guid VAR8, uint64_t VAR9)
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
            int VAR24 = FUN8(VAR14, VAR4->VAR25, VAR9);
            if (VAR24 < 0)
                return NULL;
        }
        else
        {
            if (FUN2(VAR8, VAR26))
                FUN3(VAR3, VAR19, "" VAR27 "", FUN9(VAR8));
            FUN4(VAR14, VAR9);
        }
        if (!memcmp(VAR7 + 4, (const VAR28[]){VAR29}, 12))
        {
            VAR4->VAR25->VAR30 = FUN10(FUN11(VAR7), VAR4->VAR25->VAR31);
        }
        else if (!FUN2(VAR7, VAR32))
        {
            if (VAR4->VAR25->VAR33 && VAR4->VAR25->VAR34 >= 22)
                FUN12(VAR4);
            else
                FUN3(VAR3, VAR19, "");
        }
        else
        {
            VAR4->VAR25->VAR30 = FUN13(VAR35, VAR7);
            if (VAR4->VAR25->VAR30 == VAR36)
                FUN3(VAR3, VAR19, "" VAR27 "", FUN9(VAR7));
        }
        return VAR4;
    }
    else if (!FUN2(VAR6, VAR37))
    {
        VAR4 = FUN7(VAR3, VAR4, VAR5, VAR38);
        if (!VAR4)
            return NULL;
        if (!FUN2(VAR8, VAR39))
        {
            int VAR40 = FUN14(VAR3, VAR4);
            FUN4(VAR14, FUN15(VAR9 - VAR40, 0));
        }
        else if (!FUN2(VAR8, VAR41))
        {
            uint64_t VAR40 = FUN14(VAR3, VAR4);
            if (VAR9 - VAR40 >= 20)
            {
                uint32_t VAR42;
                VAR40 += 20;
                FUN4(VAR14, 4);
                VAR42 = FUN16(VAR14);
                VAR42 = FUN17(VAR42, VAR9 - VAR40);
                FUN4(VAR14, 12);
                if (VAR42 && FUN18(VAR4->VAR25, VAR14, VAR42) < 0)
                {
                    FUN19(VAR3, VAR4);
                    return NULL;
                }
                VAR40 += VAR42;
            }
            FUN4(VAR14, FUN15(VAR9 - VAR40, 0));
        }
        else
        {
            if (FUN2(VAR8, VAR26))
                FUN3(VAR3, VAR19, "" VAR27 "", FUN9(VAR8));
            FUN4(VAR14, VAR9);
        }
        if (!memcmp(VAR7 + 4, (const VAR28[]){VAR29}, 12))
        {
            VAR4->VAR25->VAR30 = FUN20(VAR43, FUN11(VAR7));
        }
        else
        {
            VAR4->VAR25->VAR30 = FUN13(VAR44, VAR7);
        }
        if (VAR4->VAR25->VAR30 == VAR36)
            FUN3(VAR3, VAR19, "" VAR27 "", FUN9(VAR7));
        return VAR4;
    }
    else if (!FUN2(VAR6, VAR45) && !FUN2(VAR7, VAR46))
    {
        VAR4 = FUN7(VAR3, VAR4, VAR5, VAR47);
        if (!VAR4)
            return NULL;
        if (FUN2(VAR8, VAR26))
            FUN3(VAR3, VAR19, "" VAR27 "", FUN9(VAR8));
        FUN4(VAR14, VAR9);
        VAR4->VAR25->VAR30 = VAR48;
        return VAR4;
    }
    else if (!FUN2(VAR6, VAR49) && (!FUN2(VAR7, VAR50) || !FUN2(VAR7, VAR51)))
    {
        VAR4 = FUN7(VAR3, VAR4, VAR5, VAR47);
        if (!VAR4)
            return NULL;
        if (FUN2(VAR8, VAR26))
            FUN3(VAR3, VAR19, "" VAR27 "", FUN9(VAR8));
        FUN4(VAR14, VAR9);
        VAR4->VAR25->VAR30 = !FUN2(VAR7, VAR50) ? VAR52 : VAR53;
        return VAR4;
    }
    else if (!FUN2(VAR6, VAR54) && !FUN2(VAR7, VAR55))
    {
        if (FUN2(VAR8, VAR26))
            FUN3(VAR3, VAR19, "" VAR27 "", FUN9(VAR8));
        FUN4(VAR14, VAR9);
        return NULL;
    }
    FUN3(VAR3, VAR19, "" VAR27 "" VAR27 "" VAR27 "", FUN9(VAR6), FUN9(VAR7), FUN9(VAR8));
    FUN4(VAR14, VAR9);
    return NULL;
}