static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    int VAR13 = -1;
    int64_t VAR14, VAR15;
    int64_t VAR16, VAR17 = VAR18;
    VAR19 *VAR20 = NULL;
    for (;; FUN2(VAR2->VAR21, 4))
    {
        VAR15 = FUN3(VAR2->VAR21);
        VAR10 = FUN4(VAR2->VAR21);
        VAR11 = FUN5(VAR2->VAR21);
        VAR16 = FUN5(VAR2->VAR21);
        VAR16 |= FUN4(VAR2->VAR21) << 24;
        FUN6(VAR2, "" VAR22 "", VAR10, VAR11, VAR16);
        if (FUN7(VAR2->VAR21))
            return VAR23;
        FUN2(VAR2->VAR21, 3);
        VAR12 = 0;
        if (VAR11 == 0)
            continue;
        VAR14 = VAR11 + FUN3(VAR2->VAR21);
        if (VAR10 == VAR24)
        {
            VAR13 = VAR25;
            VAR12 = FUN4(VAR2->VAR21);
            VAR11--;
        }
        else if (VAR10 == VAR26)
        {
            VAR13 = VAR27;
            VAR12 = FUN4(VAR2->VAR21);
            VAR11--;
            if ((VAR12 & 0xf0) == 0x50)
                goto VAR28;
        }
        else if (VAR10 == VAR29)
        {
            if (VAR11 > 13 + 1 + 4 && VAR16 == 0)
            {
                FUN8(VAR2, VAR14);
                goto VAR28;
            }
            else if (VAR16 != 0)
            {
                VAR13 = VAR30;
            }
            else
            {
                goto VAR28;
            }
        }
        else
        {
            FUN9(VAR2, VAR31, "", VAR10, VAR11, VAR12);
        VAR28:
            FUN10(VAR2->VAR21, VAR14, VAR32);
            continue;
        }
        if (!VAR11)
            continue;
        for (VAR9 = 0; VAR9 < VAR2->VAR33; VAR9++)
        {
            VAR20 = VAR2->VAR34[VAR9];
            if (VAR20->VAR35 == VAR13)
                break;
        }
        if (VAR9 == VAR2->VAR33)
        {
            FUN9(VAR2, VAR36, "");
            VAR20 = FUN11(VAR2, VAR13);
            VAR2->VAR37 &= ~VAR38;
        }
        FUN6(VAR2, "", VAR13, VAR12, VAR20->VAR39);
        if ((VAR20->VAR39 >= VAR40 && !((VAR12 & VAR41) == VAR42 || (VAR13 == VAR25))) || (VAR20->VAR39 >= VAR43 && ((VAR12 & VAR41) == VAR44 && (VAR13 == VAR27))) || VAR20->VAR39 >= VAR45)
        {
            FUN10(VAR2->VAR21, VAR14, VAR32);
            continue;
        }
        if ((VAR12 & VAR41) == VAR42)
            FUN12(VAR20, VAR15, VAR16, VAR11, 0, VAR46);
        break;
    }
    if (VAR2->VAR21->VAR47 && (!VAR2->VAR48 || VAR2->VAR48 == VAR18))
    {
        int VAR11;
        const int64_t VAR15 = FUN3(VAR2->VAR21);
        const int64_t VAR49 = FUN13(VAR2->VAR21);
        FUN10(VAR2->VAR21, VAR49 - 4, VAR32);
        VAR11 = FUN14(VAR2->VAR21);
        FUN10(VAR2->VAR21, VAR49 - 3 - VAR11, VAR32);
        if (VAR11 == FUN5(VAR2->VAR21) + 11)
        {
            uint32_t VAR50 = FUN5(VAR2->VAR21);
            VAR50 |= FUN4(VAR2->VAR21) << 24;
            VAR2->VAR48 = VAR50 * (VAR51)VAR52 / 1000;
        }
        FUN10(VAR2->VAR21, VAR15, VAR32);
    }
    if (VAR13 == VAR25)
    {
        if (!VAR20->VAR53->VAR54 || !VAR20->VAR53->VAR55 || !VAR20->VAR53->VAR56)
        {
            VAR20->VAR53->VAR54 = (VAR12 & VAR57) == VAR58 ? 2 : 1;
            VAR20->VAR53->VAR55 = (44100 << ((VAR12 & VAR59) >> VAR60) >> 3);
            VAR20->VAR53->VAR56 = (VAR12 & VAR61) ? 16 : 8;
        }
        if (!VAR20->VAR53->VAR62)
        {
            FUN15(VAR2, VAR20, VAR12 & VAR63);
        }
    }
    else if (VAR13 == VAR27)
    {
        VAR11 -= FUN16(VAR2, VAR20, VAR12 & VAR64);
    }
    if (VAR20->VAR53->VAR62 == VAR65 || VAR20->VAR53->VAR62 == VAR66 || VAR20->VAR53->VAR62 == VAR67)
    {
        int VAR10 = FUN4(VAR2->VAR21);
        VAR11--;
        if (VAR20->VAR53->VAR62 == VAR66 || VAR20->VAR53->VAR62 == VAR67)
        {
            int32_t VAR68 = (FUN5(VAR2->VAR21) + 0xff800000) ^ 0xff800000;
            VAR17 = VAR16 + VAR68;
            if (VAR68 < 0)
            {
                VAR6->VAR69 = 1;
                FUN9(VAR2, VAR36, "");
            }
            if (VAR6->VAR69)
                VAR16 = VAR18;
        }
        if (VAR10 == 0)
        {
            if ((VAR8 = FUN17(VAR2, VAR20, VAR11)) < 0)
                return VAR8;
            if (VAR20->VAR53->VAR62 == VAR65)
            {
                MPEG4AudioConfig VAR70;
                FUN18(&VAR70, VAR20->VAR53->VAR71, VAR20->VAR53->VAR72);
                VAR20->VAR53->VAR54 = VAR70.VAR54;
                if (VAR70.VAR73)
                    VAR20->VAR53->VAR55 = VAR70.VAR73;
                else
                    VAR20->VAR53->VAR55 = VAR70.VAR55;
                FUN6(VAR2, "", VAR20->VAR53->VAR54, VAR20->VAR53->VAR55);
            }
            VAR8 = FUN19(VAR74);
            goto VAR75;
        }
    }
    if (!VAR11)
    {
        VAR8 = FUN19(VAR74);
        goto VAR75;
    }
    VAR8 = FUN20(VAR2->VAR21, VAR4, VAR11);
    if (VAR8 < 0)
    {
        return FUN19(VAR76);
    }
    VAR4->VAR11 = VAR8;
    VAR4->VAR16 = VAR16;
    VAR4->VAR17 = VAR17 == VAR18 ? VAR16 : VAR17;
    VAR4->VAR77 = VAR20->VAR78;
    if (VAR13 == VAR25 || ((VAR12 & VAR41) == VAR42) || VAR13 == VAR30)
        VAR4->VAR12 |= VAR79;
VAR75:
    FUN2(VAR2->VAR21, 4);
    return VAR8;
}