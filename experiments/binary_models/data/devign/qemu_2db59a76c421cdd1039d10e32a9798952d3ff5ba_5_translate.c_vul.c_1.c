void FUN1(VAR1 *VAR2, VAR3 *VAR4, bool VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR2->VAR9;
    DisasContext VAR10;
    int VAR11 = 0;
    int VAR12, VAR13 = -1;
    VAR14 *VAR15 = VAR16.VAR17 + VAR18;
    int VAR19 = VAR4->VAR20 & VAR21;
    uint32_t VAR22 = VAR4->VAR23;
    uint32_t VAR24 = (VAR22 & VAR25) + VAR26;
    if (VAR19 == 0)
    {
        VAR19 = VAR21;
    }
    VAR10.VAR27 = VAR9->VAR27;
    VAR10.VAR28 = VAR7->VAR28;
    VAR10.VAR4 = VAR4;
    VAR10.VAR23 = VAR22;
    VAR10.VAR29 = VAR4->VAR30 & VAR31;
    VAR10.VAR32 = (VAR4->VAR30 & VAR33) ? 0 : VAR10.VAR29;
    VAR10.VAR34 = VAR9->VAR35[VAR36];
    VAR10.VAR37 = VAR9->VAR35[VAR38];
    VAR10.VAR39 = VAR40;
    VAR10.VAR41 = 0;
    VAR10.VAR42 = VAR4->VAR30 & VAR43;
    VAR10.VAR44 = VAR4->VAR30 & VAR45;
    VAR10.VAR46 = (VAR4->VAR30 & VAR47) >> VAR48;
    FUN3(&VAR10);
    FUN4(&VAR10);
    FUN5(&VAR10);
    if (VAR10.VAR44)
    {
        VAR10.VAR49 = FUN6();
    }
    FUN7();
    if (VAR4->VAR30 & VAR50)
    {
        FUN8(VAR51, VAR10.VAR23);
        FUN9(&VAR10, VAR52);
    }
    do
    {
        FUN10(VAR9, &VAR10);
        if (VAR5)
        {
            VAR12 = VAR16.VAR53 - VAR16.VAR17;
            if (VAR13 < VAR12)
            {
                VAR13++;
                while (VAR13 < VAR12)
                {
                    VAR16.VAR54[VAR13++] = 0;
                }
            }
            VAR16.VAR55[VAR13] = VAR10.VAR23;
            VAR16.VAR54[VAR13] = 1;
            VAR16.VAR56[VAR13] = VAR11;
        }
        if (FUN11(FUN12(VAR57 | VAR58)))
        {
            FUN13(VAR10.VAR23);
        }
        ++VAR10.VAR41;
        if (VAR11 + 1 == VAR19 && (VAR4->VAR20 & VAR59))
        {
            FUN14();
        }
        if (VAR10.VAR44)
        {
            int VAR60 = FUN15();
            FUN16(VAR10.VAR49, VAR61[VAR62], 1);
            FUN17(VAR63, VAR10.VAR49, 0, VAR60);
            FUN18(VAR10.VAR49, VAR61[VAR62]);
            if (VAR10.VAR42)
            {
                FUN19(&VAR10, VAR64);
            }
            FUN20(VAR60);
        }
        if (VAR10.VAR42)
        {
            FUN21(VAR9, &VAR10);
        }
        FUN22(VAR9, &VAR10);
        ++VAR11;
        if (VAR10.VAR44)
        {
            FUN18(VAR61[VAR62], VAR10.VAR49);
        }
        if (VAR7->VAR28)
        {
            FUN8(VAR51, VAR10.VAR23);
            FUN9(&VAR10, VAR52);
            break;
        }
    } while (VAR10.VAR39 == VAR40 && VAR11 < VAR19 && VAR10.VAR23 < VAR24 && VAR10.VAR23 + FUN23(VAR9, &VAR10) <= VAR24 && VAR16.VAR53 < VAR15);
    FUN24(&VAR10);
    FUN25(&VAR10);
    if (VAR10.VAR44)
    {
        FUN26(VAR10.VAR49);
    }
    if (VAR4->VAR20 & VAR59)
    {
        FUN27();
    }
    if (VAR10.VAR39 == VAR40)
    {
        FUN28(&VAR10, VAR10.VAR23, 0);
    }
    FUN29(VAR4, VAR11);
    *VAR16.VAR53 = VAR65;
    if (FUN12(VAR66))
    {
        FUN30("");
        FUN30("", FUN31(VAR22));
        FUN32(VAR9, VAR22, VAR10.VAR23 - VAR22, 0);
        FUN30("");
    }
    if (VAR5)
    {
        VAR12 = VAR16.VAR53 - VAR16.VAR17;
        memset(VAR16.VAR54 + VAR13 + 1, 0, (VAR12 - VAR13) * sizeof(VAR16.VAR54[0]));
    }
    else
    {
        VAR4->VAR67 = VAR10.VAR23 - VAR22;
        VAR4->VAR44 = VAR11;
    }
}