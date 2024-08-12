float FUN1(VAR1 *VAR2, int VAR3)
{
    float VAR4;
    int VAR5, VAR6;
    float VAR7;
    double VAR8;
    double VAR9;
    double VAR10;
    int VAR11 = VAR2->VAR11;
    int64_t VAR12;
    VAR13 *VAR14 = &VAR2->VAR15;
    VAR16 *VAR17 = VAR2->VAR18;
    RateControlEntry VAR19, *VAR20;
    double VAR21;
    double VAR22;
    int VAR23;
    const int VAR24 = VAR2->VAR24;
    VAR25 *const VAR26 = &VAR2->VAR27;
    FUN2();
    if ((VAR2->VAR28 & VAR29) && VAR2->VAR18->VAR30 == VAR31)
        return FUN3(VAR2, VAR3);
    FUN4(&VAR5, &VAR6, VAR2, VAR24);
    VAR10 = FUN5(VAR2->VAR18);
    if (VAR11 > 2 && !VAR3)
    {
        const int VAR32 = VAR2->VAR33 == VAR34 ? VAR14->VAR35 : VAR14->VAR36;
        FUN6(VAR2->VAR37 >= VAR2->VAR38);
        FUN7(&VAR14->VAR39[VAR2->VAR33], VAR14->VAR40, FUN8(VAR32), VAR2->VAR37 - VAR2->VAR38);
    }
    if (VAR2->VAR28 & VAR29)
    {
        assert(VAR11 >= 0);
        if (VAR11 >= VAR14->VAR41)
        {
            FUN9(VAR2, VAR42, "");
            return -1;
        }
        VAR20 = &VAR14->VAR43[VAR11];
        VAR12 = VAR20->VAR44;
    }
    else
    {
        VAR25 *VAR45;
        VAR20 = &VAR19;
        if (VAR2->VAR24 == VAR46 || VAR2->VAR47)
            VAR45 = VAR2->VAR48;
        else
            VAR45 = VAR2->VAR49;
        if (!VAR45 || VAR45->VAR50.VAR51 == VAR52)
            VAR12 = (VAR53)(VAR2->VAR54 * (double)VAR11 / VAR10);
        else
            VAR12 = (VAR53)(VAR2->VAR54 * (double)VAR45->VAR50.VAR51 / VAR10);
    }
    VAR8 = VAR2->VAR55 - VAR12;
    VAR7 = (VAR17->VAR56 - VAR8) / VAR17->VAR56;
    if (VAR7 <= 0.0)
        VAR7 = 0.001;
    VAR23 = VAR24 == VAR34 ? VAR26->VAR57 : VAR26->VAR58;
    VAR9 = 0;
    if (VAR2->VAR28 & VAR29)
    {
        if (VAR24 != VAR34)
            assert(VAR24 == VAR20->VAR59);
        VAR4 = VAR20->VAR60 / VAR7; FUN10 ( VAR2 , ""%c VAR61:%VAR62<%2.1f<%VAR62 %d VAR63:%d VAR64:%d VAR65:%f VAR66:%2.2f ""VAR67:%d VAR23:%""/%"" VAR68:%d VAR10:%VAR62\VAR69" , FUN11 ( VAR24 ) , VAR5 , VAR4 , VAR6 , VAR11 , ( int ) VAR12 / 1000 , ( int ) VAR2 -> VAR55 / 1000 , VAR7 , VAR9 , VAR2 -> VAR37 , VAR26 -> VAR57 , VAR26 -> VAR58 , VAR2 -> VAR54 / 1000 , ( int ) VAR10 ) ; } if ( VAR4 < VAR5 ) VAR4 = VAR5 ; else if ( VAR4 > VAR6 ) VAR4 = VAR6 ; if ( VAR2 -> VAR70 ) FUN12 ( VAR2 , VAR4 ) ; else VAR4 = ( int ) ( VAR4 + 0.5 ) ; if ( ! VAR3 ) { VAR14 -> VAR40 = VAR4 ; VAR14 -> VAR36 = VAR26 -> VAR58 ; VAR14 -> VAR35 = VAR26 -> VAR57 ; } return VAR4 ; }