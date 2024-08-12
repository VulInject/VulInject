FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7;
    uint32_t VAR8;
    int VAR9, VAR10;
    struct DisasContext VAR11;
    struct VAR12 *VAR13 = &VAR11;
    uint32_t VAR14, VAR15;
    target_ulong VAR16;
    int VAR17;
    int VAR18;
    FUN2(VAR19);
    VAR8 = VAR4->VAR20;
    VAR13->VAR2 = VAR2;
    VAR13->VAR4 = VAR4;
    VAR15 = VAR13->VAR21 = VAR13->VAR22 = VAR4->VAR23;
    VAR7 = VAR24.VAR25 + VAR26;
    VAR13->VAR27 = VAR28;
    VAR13->VAR29 = 0;
    VAR13->VAR30 = !!(VAR13->VAR22 & VAR31);
    if (VAR13->VAR30)
    {
        VAR13->VAR29 = VAR32;
    }
    VAR13->VAR20 = VAR8;
    VAR13->VAR33 = VAR2->VAR33;
    VAR13->VAR34 = 0;
    VAR13->VAR35 = 0;
    VAR13->VAR36 = 0;
    if (VAR8 & 3)
        FUN3(VAR2, "", VAR8);
    if (FUN4(VAR37))
    {
        FUN5("");
        FUN6(VAR2, 0);
    }
    VAR14 = (VAR8 & VAR38) + VAR39;
    VAR10 = -1;
    VAR17 = 0;
    VAR18 = VAR4->VAR40 & VAR41;
    if (VAR18 == 0)
        VAR18 = VAR41;
    FUN7();
    do
    {
        if (FUN4(VAR37))
        {
            FUN8(VAR42[VAR43], VAR13->VAR20);
            FUN9();
        }
        FUN10(VAR2, VAR13);
        if (VAR5)
        {
            VAR9 = VAR24.VAR44 - VAR24.VAR25;
            if (VAR10 < VAR9)
            {
                VAR10++;
                while (VAR10 < VAR9)
                    VAR24.VAR45[VAR10++] = 0;
            }
            VAR24.VAR46[VAR10] = VAR13->VAR20;
            VAR24.VAR45[VAR10] = 1;
            VAR24.VAR47[VAR10] = VAR17;
        }
        FUN11("", VAR13->VAR20);
        if (VAR17 + 1 == VAR18 && (VAR4->VAR40 & VAR48))
            FUN12();
        VAR13->VAR49 = 1;
        FUN13(VAR13, FUN14(VAR2, VAR13->VAR20));
        if (VAR13->VAR49)
            VAR13->VAR22 &= ~VAR50;
        VAR13->VAR20 += 4;
        VAR17++;
        if (VAR13->VAR30)
        {
            VAR13->VAR30--;
            if (!VAR13->VAR30)
            {
                if (VAR13->VAR22 & VAR51)
                    FUN15(VAR13);
                if (VAR13->VAR22 & VAR52)
                    FUN16(VAR13);
                if (VAR13->VAR22 & VAR53)
                    FUN17(VAR13);
                VAR13->VAR22 &= ~VAR31;
                if (VAR13->VAR29 == VAR32)
                {
                    FUN18(VAR13, VAR54, FUN19(VAR13->VAR20));
                    VAR13->VAR27 = VAR55;
                }
                else if (VAR13->VAR29 == VAR56)
                {
                    FUN20(VAR13);
                    FUN21(VAR13, 0, VAR13->VAR57);
                    VAR13->VAR27 = VAR58;
                }
                else if (VAR13->VAR29 == VAR59)
                {
                    int VAR60;
                    FUN20(VAR13);
                    VAR60 = FUN22();
                    FUN23(VAR61, VAR62, 0, VAR60);
                    FUN21(VAR13, 1, VAR13->VAR20);
                    FUN24(VAR60);
                    FUN21(VAR13, 0, VAR13->VAR57);
                    VAR13->VAR27 = VAR58;
                }
                break;
            }
        }
        if (VAR2->VAR33)
            break;
    } while (!VAR13->VAR27 && !VAR13->VAR34 && VAR24.VAR44 < VAR7 && !VAR63 && (VAR13->VAR20 < VAR14) && VAR17 < VAR18);
    VAR16 = VAR13->VAR20;
    if (VAR13->VAR29 == VAR56 || VAR13->VAR29 == VAR59)
    {
        if (VAR13->VAR22 & VAR31)
        {
            VAR13->VAR27 = VAR64;
            FUN8(VAR42[VAR43], VAR16);
            FUN25(VAR13);
        }
        else
            VAR16 = VAR13->VAR57;
    }
    if (VAR4->VAR40 & VAR48)
        FUN26();
    if (VAR13->VAR27 == VAR28 && (VAR13->VAR34 || VAR15 != VAR13->VAR22))
    {
        VAR13->VAR27 = VAR64;
        FUN8(VAR42[VAR43], VAR16);
    }
    FUN20(VAR13);
    if (FUN27(VAR2->VAR33))
    {
        TCGv_i32 VAR65 = FUN28(VAR66);
        if (VAR13->VAR27 != VAR55)
        {
            FUN8(VAR42[VAR43], VAR16);
        }
        FUN29(VAR67, VAR65);
        FUN30(VAR65);
    }
    else
    {
        switch (VAR13->VAR27)
        {
        case VAR28:
            FUN21(VAR13, 1, VAR16);
            break;
        default:
        case VAR55:
        case VAR64:
            FUN31(0);
            break;
        case VAR58:
            break;
        }
    }
    FUN32(VAR4, VAR17);
    *VAR24.VAR44 = VAR68;
    if (VAR5)
    {
        VAR9 = VAR24.VAR44 - VAR24.VAR25;
        VAR10++;
        while (VAR10 <= VAR9)
            VAR24.VAR45[VAR10++] = 0;
    }
    else
    {
        VAR4->VAR69 = VAR13->VAR20 - VAR8;
        VAR4->VAR70 = VAR17;
    }
    if (FUN4(VAR37))
    {
        FUN5("");
        FUN33(VAR2, VAR8, VAR13->VAR20 - VAR8, 0);
        FUN5("", VAR13->VAR20 - VAR8, VAR24.VAR44 - VAR24.VAR25);
    }
    assert(!VAR13->VAR35);
}