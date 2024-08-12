void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    DisasContext VAR10;
    int VAR11 = 0;
    int VAR12, VAR13 = -1;
    int VAR14 = VAR4->VAR15 & VAR16;
    uint32_t VAR17 = VAR4->VAR18;
    uint32_t VAR19 = (VAR17 & VAR20) + VAR21;
    if (VAR14 == 0)
    {
        VAR14 = VAR16;
    }
    VAR10.VAR22 = VAR9->VAR22;
    VAR10.VAR23 = VAR7->VAR23;
    VAR10.VAR4 = VAR4;
    VAR10.VAR18 = VAR17;
    VAR10.VAR24 = VAR4->VAR25 & VAR26;
    VAR10.VAR27 = (VAR4->VAR25 & VAR28) ? 0 : VAR10.VAR24;
    VAR10.VAR29 = VAR9->VAR30[VAR31];
    VAR10.VAR32 = VAR9->VAR30[VAR33];
    VAR10.VAR34 = VAR35;
    VAR10.VAR36 = 0;
    VAR10.VAR37 = VAR4->VAR25 & VAR38;
    VAR10.VAR39 = VAR4->VAR25 & VAR40;
    VAR10.VAR41 = (VAR4->VAR25 & VAR42) >> VAR43;
    VAR10.VAR44 = ((VAR4->VAR25 & VAR45) >> VAR46);
    FUN3(&VAR10);
    FUN4(&VAR10);
    if (VAR10.VAR39)
    {
        VAR10.VAR47 = FUN5();
    }
    FUN6(VAR4);
    if (VAR4->VAR25 & VAR48)
    {
        FUN7(VAR49, VAR10.VAR18);
        FUN8(&VAR10, VAR50);
    }
    do
    {
        FUN9(VAR9, &VAR10);
        if (VAR5)
        {
            VAR12 = FUN10();
            if (VAR13 < VAR12)
            {
                VAR13++;
                while (VAR13 < VAR12)
                {
                    VAR51.VAR52[VAR13++] = 0;
                }
            }
            VAR51.VAR53[VAR13] = VAR10.VAR18;
            VAR51.VAR52[VAR13] = 1;
            VAR51.VAR54[VAR13] = VAR11;
        }
        if (FUN11(FUN12(VAR55 | VAR56)))
        {
            FUN13(VAR10.VAR18);
        }
        ++VAR10.VAR36;
        if (VAR11 + 1 == VAR14 && (VAR4->VAR15 & VAR57))
        {
            FUN14();
        }
        if (VAR10.VAR39)
        {
            VAR58 *VAR59 = FUN15();
            FUN16(VAR10.VAR47, VAR60[VAR61], 1);
            FUN17(VAR62, VAR10.VAR47, 0, VAR59);
            FUN18(VAR10.VAR47, VAR60[VAR61]);
            if (VAR10.VAR37)
            {
                FUN19(&VAR10, VAR63);
            }
            FUN20(VAR59);
        }
        if (VAR10.VAR37)
        {
            FUN21(VAR9, &VAR10);
        }
        FUN22(VAR9, &VAR10);
        ++VAR11;
        if (VAR10.VAR39)
        {
            FUN18(VAR60[VAR61], VAR10.VAR47);
        }
        if (VAR7->VAR23)
        {
            FUN7(VAR49, VAR10.VAR18);
            FUN8(&VAR10, VAR50);
            break;
        }
    } while (VAR10.VAR34 == VAR35 && VAR11 < VAR14 && VAR10.VAR18 < VAR19 && VAR10.VAR18 + FUN23(VAR9, &VAR10) <= VAR19 && !FUN24());
    FUN25(&VAR10);
    FUN26(&VAR10);
    if (VAR10.VAR39)
    {
        FUN27(VAR10.VAR47);
    }
    if (VAR4->VAR15 & VAR57)
    {
        FUN28();
    }
    if (VAR10.VAR34 == VAR35)
    {
        FUN29(&VAR10, VAR10.VAR18, 0);
    }
    FUN30(VAR4, VAR11);
    if (FUN12(VAR64))
    {
        FUN31("");
        FUN31("", FUN32(VAR17));
        FUN33(VAR9, VAR17, VAR10.VAR18 - VAR17, 0);
        FUN31("");
    }
    if (VAR5)
    {
        VAR12 = FUN10();
        memset(VAR51.VAR52 + VAR13 + 1, 0, (VAR12 - VAR13) * sizeof(VAR51.VAR52[0]));
    }
    else
    {
        VAR4->VAR65 = VAR10.VAR18 - VAR17;
        VAR4->VAR39 = VAR11;
    }
}