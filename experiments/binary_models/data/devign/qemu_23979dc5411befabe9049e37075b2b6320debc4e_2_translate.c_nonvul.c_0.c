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
    VAR7 = VAR24 + VAR25;
    VAR13->VAR26 = VAR27;
    VAR13->VAR28 = 0;
    VAR13->VAR29 = !!(VAR13->VAR22 & VAR30);
    if (VAR13->VAR29)
    {
        VAR13->VAR28 = VAR31;
    }
    VAR13->VAR20 = VAR8;
    VAR13->VAR32 = VAR2->VAR32;
    VAR13->VAR33 = 0;
    VAR13->VAR34 = 0;
    VAR13->VAR35 = 0;
    if (VAR8 & 3)
        FUN3(VAR2, "", VAR8);
    if (FUN4(VAR36))
    {
        FUN5("");
        FUN6(VAR2, 0);
    }
    VAR14 = (VAR8 & VAR37) + VAR38;
    VAR10 = -1;
    VAR17 = 0;
    VAR18 = VAR4->VAR39 & VAR40;
    if (VAR18 == 0)
        VAR18 = VAR40;
    FUN7();
    do
    {
        if (FUN4(VAR36))
        {
            FUN8(VAR41[VAR42], VAR13->VAR20);
            FUN9();
        }
        FUN10(VAR2, VAR13);
        if (VAR5)
        {
            VAR9 = VAR43 - VAR24;
            if (VAR10 < VAR9)
            {
                VAR10++;
                while (VAR10 < VAR9)
                    VAR44[VAR10++] = 0;
            }
            VAR45[VAR10] = VAR13->VAR20;
            VAR44[VAR10] = 1;
            VAR46[VAR10] = VAR17;
        }
        FUN11("", VAR13->VAR20);
        if (VAR17 + 1 == VAR18 && (VAR4->VAR39 & VAR47))
            FUN12();
        VAR13->VAR48 = 1;
        FUN13(VAR13);
        if (VAR13->VAR48)
            VAR13->VAR22 &= ~VAR49;
        VAR13->VAR20 += 4;
        VAR17++;
        if (VAR13->VAR29)
        {
            VAR13->VAR29--;
            if (!VAR13->VAR29)
            {
                if (VAR13->VAR22 & VAR50)
                    FUN14(VAR13);
                if (VAR13->VAR22 & VAR51)
                    FUN15(VAR13);
                if (VAR13->VAR22 & VAR52)
                    FUN16(VAR13);
                VAR13->VAR22 &= ~VAR30;
                if (VAR13->VAR28 == VAR31)
                {
                    FUN17(VAR13, VAR53, FUN18(VAR13->VAR20));
                    VAR13->VAR26 = VAR54;
                }
                else if (VAR13->VAR28 == VAR55)
                {
                    int VAR56;
                    FUN19(VAR13);
                    VAR56 = FUN20();
                    FUN21(VAR57, VAR58, 0, VAR56);
                    FUN22(VAR13, 1, VAR13->VAR20);
                    FUN23(VAR56);
                    FUN22(VAR13, 0, VAR13->VAR59);
                    VAR13->VAR26 = VAR60;
                }
                break;
            }
        }
        if (VAR2->VAR32)
            break;
    } while (!VAR13->VAR26 && !VAR13->VAR33 && VAR43 < VAR7 && !VAR61 && (VAR13->VAR20 < VAR14) && VAR17 < VAR18);
    VAR16 = VAR13->VAR20;
    if (VAR13->VAR28 == VAR55)
    {
        if (VAR13->VAR22 & VAR30)
        {
            VAR13->VAR26 = VAR62;
            FUN8(VAR41[VAR42], VAR16);
            FUN24(VAR13);
        }
        else
            VAR16 = VAR13->VAR59;
    }
    if (VAR4->VAR39 & VAR47)
        FUN25();
    if (VAR13->VAR26 == VAR27 && (VAR13->VAR33 || VAR15 != VAR13->VAR22))
    {
        VAR13->VAR26 = VAR62;
        FUN8(VAR41[VAR42], VAR16);
    }
    FUN19(VAR13);
    if (FUN26(VAR2->VAR32))
    {
        FUN27(VAR13, VAR63);
        if (VAR13->VAR26 == VAR27)
            FUN8(VAR41[VAR42], VAR16);
    }
    else
    {
        switch (VAR13->VAR26)
        {
        case VAR27:
            FUN22(VAR13, 1, VAR16);
            break;
        default:
        case VAR54:
        case VAR62:
            FUN28(0);
            break;
        case VAR60:
            break;
        }
    }
    FUN29(VAR4, VAR17);
    *VAR43 = VAR64;
    if (VAR5)
    {
        VAR9 = VAR43 - VAR24;
        VAR10++;
        while (VAR10 <= VAR9)
            VAR44[VAR10++] = 0;
    }
    else
    {
        VAR4->VAR65 = VAR13->VAR20 - VAR8;
        VAR4->VAR66 = VAR17;
    }
    if (FUN4(VAR36))
    {
        FUN5("");
        FUN30(VAR8, VAR13->VAR20 - VAR8, 0);
        FUN5("", VAR13->VAR20 - VAR8, VAR43 - VAR24);
    }
    assert(!VAR13->VAR34);
}