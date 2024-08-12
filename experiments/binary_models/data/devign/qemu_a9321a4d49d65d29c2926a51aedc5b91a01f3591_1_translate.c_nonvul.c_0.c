static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    DisasContext VAR6, *VAR7 = &VAR6;
    target_ulong VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    int VAR13, VAR14;
    uint64_t VAR15;
    target_ulong VAR16;
    target_ulong VAR17;
    int VAR18;
    int VAR19;
    VAR16 = VAR4->VAR20;
    VAR17 = VAR4->VAR17;
    VAR15 = VAR4->VAR15;
    VAR7->VAR21 = (VAR15 >> VAR22) & 1;
    VAR7->VAR23 = (VAR15 >> VAR24) & 1;
    VAR7->VAR25 = (VAR15 >> VAR26) & 1;
    VAR7->VAR27 = (VAR15 >> VAR28) & 1;
    VAR7->VAR29 = 0;
    VAR7->VAR30 = (VAR15 >> VAR31) & 1;
    VAR7->VAR32 = (VAR15 >> VAR33) & 3;
    VAR7->VAR34 = (VAR15 >> VAR35) & 3;
    VAR7->VAR36 = (VAR15 >> VAR37) & 1;
    VAR7->VAR38 = VAR2->VAR38;
    VAR7->VAR39 = VAR40;
    VAR7->VAR17 = VAR17;
    VAR7->VAR4 = VAR4;
    VAR7->VAR41 = 0;
    VAR7->VAR42 = 0;
    if (VAR15 & VAR43)
    {
        VAR7->VAR42 = (FUN2(VAR2) + 1) << 2;
    }
    VAR7->VAR44 = VAR2->VAR44;
    VAR7->VAR45 = VAR2->VAR45;
    VAR7->VAR46 = VAR2->VAR46;
    VAR7->VAR47 = VAR2->VAR47;
    VAR7->VAR48 = VAR2->VAR48;
    VAR7->VAR49 = (VAR15 >> VAR50) & 1;
    VAR7->VAR51 = (VAR15 >> VAR52) & 1;
    VAR7->VAR15 = VAR15;
    VAR7->VAR53 = !(VAR7->VAR36 || VAR2->VAR38 || (VAR15 & VAR54) || (VAR15 & VAR43));
    if (!VAR7->VAR27 && (VAR7->VAR30 || !VAR7->VAR21 || !VAR7->VAR23))
        FUN3("");
    VAR55[0] = FUN4();
    VAR55[1] = FUN4();
    VAR56 = FUN4();
    VAR57 = FUN4();
    VAR58 = FUN4();
    VAR59 = FUN5();
    VAR60 = FUN6();
    VAR61 = FUN6();
    VAR62 = FUN4();
    VAR63 = FUN4();
    VAR64 = FUN7();
    VAR65 = FUN7();
    VAR10 = VAR66 + VAR67;
    VAR7->VAR68 = VAR69;
    VAR8 = VAR16;
    VAR14 = -1;
    VAR18 = 0;
    VAR19 = VAR4->VAR70 & VAR71;
    if (VAR19 == 0)
        VAR19 = VAR71;
    FUN8();
    for (;;)
    {
        if (FUN9(!FUN10(&VAR2->VAR72)))
        {
            FUN11(VAR12, &VAR2->VAR72, VAR73)
            {
                if (VAR12->VAR20 == VAR8 && !((VAR12->VAR15 & VAR74) && (VAR4->VAR15 & VAR75)))
                {
                    FUN12(VAR7, VAR8 - VAR7->VAR17);
                    break;
                }
            }
        }
        if (VAR5)
        {
            VAR13 = VAR76 - VAR66;
            if (VAR14 < VAR13)
            {
                VAR14++;
                while (VAR14 < VAR13)
                    VAR77[VAR14++] = 0;
            }
            VAR78[VAR14] = VAR8;
            VAR79[VAR14] = VAR7->VAR39;
            VAR77[VAR14] = 1;
            VAR80[VAR14] = VAR18;
        }
        if (VAR18 + 1 == VAR19 && (VAR4->VAR70 & VAR81))
            FUN13();
        VAR8 = FUN14(VAR7, VAR8);
        VAR18++;
        if (VAR7->VAR68)
            break;
        if (VAR7->VAR36 || VAR7->VAR38 || (VAR15 & VAR54))
        {
            FUN15(VAR8 - VAR7->VAR17);
            FUN16(VAR7);
            break;
        }
        if (VAR76 >= VAR10 || (VAR8 - VAR16) >= (VAR82 - 32) || VAR18 >= VAR19)
        {
            FUN15(VAR8 - VAR7->VAR17);
            FUN16(VAR7);
            break;
        }
        if (VAR83)
        {
            FUN15(VAR8 - VAR7->VAR17);
            FUN16(VAR7);
            break;
        }
    }
    if (VAR4->VAR70 & VAR81)
        FUN17();
    FUN18(VAR4, VAR18);
    *VAR76 = VAR84;
    if (VAR5)
    {
        VAR13 = VAR76 - VAR66;
        VAR14++;
        while (VAR14 <= VAR13)
            VAR77[VAR14++] = 0;
    }
    if (FUN19(VAR85))
    {
        int VAR86;
        FUN20("");
        FUN20("", FUN21(VAR16));
        if (VAR7->VAR51)
            VAR86 = 2;
        else
            VAR86 = !VAR7->VAR23;
        FUN22(VAR16, VAR8 - VAR16, VAR86);
        FUN20("");
    }
    if (!VAR5)
    {
        VAR4->VAR87 = VAR8 - VAR16;
        VAR4->VAR88 = VAR18;
    }
}