static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    int64_t VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = VAR2->VAR12;
    if (VAR13 && VAR11->VAR14 == 0 && VAR2->VAR15[0]->VAR16->VAR17 == 1)
    {
        enum AVCodecID VAR16;
        VAR5 = FUN2(VAR2->VAR18->VAR19, VAR2->VAR18->VAR20 - VAR2->VAR18->VAR19, &VAR16);
        if (VAR5 > VAR21)
        {
            VAR2->VAR15[0]->VAR16->VAR22 = VAR16;
            VAR11->VAR14 = 1;
        }
        else
        {
            VAR11->VAR14 = -1;
        }
    }
    if (VAR13 && VAR11->VAR14 == 1)
        return FUN3(VAR2, VAR4);
    if (VAR11->VAR23 > 0)
    {
        int64_t VAR24, VAR25;
    VAR26:
        VAR24 = VAR2->VAR15[0]->VAR27;
        VAR25 = VAR2->VAR15[1]->VAR27;
        if (VAR24 != VAR28 && VAR25 != VAR28)
        {
            VAR11->VAR29 = VAR11->VAR30 ? FUN4(VAR25, VAR2->VAR15[1]->VAR31, VAR24, VAR2->VAR15[0]->VAR31) > 0 : 0;
            VAR11->VAR30 = 1;
        }
        VAR11->VAR29 = !VAR11->VAR29;
        VAR11->VAR29 |= VAR11->VAR32;
        VAR11->VAR29 &= !VAR11->VAR33;
        if (VAR11->VAR29)
        {
            uint64_t VAR34 = FUN5(VAR2->VAR18);
            uint64_t VAR35 = VAR11->VAR23 + VAR11->VAR36 * VAR11->VAR37;
            if (FUN6(VAR2->VAR18, VAR35, VAR38) < 0)
            {
                VAR5 = VAR39;
                goto VAR40;
            }
            VAR6 = FUN7(VAR2->VAR18);
            VAR5 = FUN8(VAR2->VAR18, VAR4, VAR6);
            if (VAR5 < 0)
                goto VAR40;
            VAR4->VAR41 -= 3;
            VAR4->VAR42 = VAR11->VAR36 * VAR11->VAR43 + VAR11->VAR44;
            VAR11->VAR44++;
            if (VAR11->VAR43 > 0)
                VAR11->VAR44 %= VAR11->VAR43;
            if (!VAR11->VAR44)
                VAR11->VAR36++;
            VAR4->VAR45 = 1;
        VAR40:
            FUN6(VAR2->VAR18, VAR34, VAR38);
            if (VAR5 == VAR39)
            {
                VAR11->VAR33 = 1;
                goto VAR26;
            }
            return VAR5;
        }
    }
    VAR9 = VAR2->VAR15[0];
    VAR7 = VAR11->VAR46 - FUN5(VAR2->VAR18);
    if (VAR11->VAR47)
        VAR7 = VAR48;
    if (VAR7 <= 0)
    {
        if (VAR49 && VAR11->VAR50)
            VAR7 = FUN9(VAR2->VAR18, VAR51) - 24;
        else
            VAR7 = FUN10(VAR11, VAR2->VAR18, FUN11('', '', '', ''));
        if (VAR7 < 0)
        {
            VAR11->VAR32 = 1;
            if (VAR11->VAR23 > 0 && !VAR11->VAR33)
                goto VAR26;
            return VAR39;
        }
        VAR11->VAR46 = FUN5(VAR2->VAR18) + VAR7;
    }
    VAR6 = VAR52;
    if (VAR9->VAR16->VAR53 > 1)
    {
        if (VAR6 < VAR9->VAR16->VAR53)
            VAR6 = VAR9->VAR16->VAR53;
        VAR6 = (VAR6 / VAR9->VAR16->VAR53) * VAR9->VAR16->VAR53;
    }
    VAR6 = FUN12(VAR6, VAR7);
    VAR5 = FUN8(VAR2->VAR18, VAR4, VAR6);
    if (VAR5 < 0)
        return VAR5;
    VAR4->VAR45 = 0;
    return VAR5;
}