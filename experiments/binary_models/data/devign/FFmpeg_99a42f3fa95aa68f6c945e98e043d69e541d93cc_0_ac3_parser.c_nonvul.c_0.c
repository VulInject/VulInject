int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    memset(VAR4, 0, sizeof(*VAR4));
    VAR4->VAR6 = FUN2(VAR2, 16);
    if (VAR4->VAR6 != 0x0B77)
        return VAR7;
    VAR4->VAR8 = FUN3(VAR2, 29) & 0x1F;
    if (VAR4->VAR8 > 16)
        return VAR9;
    VAR4->VAR10 = 6;
    VAR4->VAR11 = 5;
    VAR4->VAR12 = 6;
    if (VAR4->VAR8 <= 10)
    {
        VAR4->VAR13 = FUN2(VAR2, 16);
        VAR4->VAR14 = FUN2(VAR2, 2);
        if (VAR4->VAR14 == 3)
            return VAR15;
        VAR5 = FUN2(VAR2, 6);
        if (VAR5 > 37)
            return VAR16;
        FUN4(VAR2, 5);
        VAR4->VAR17 = FUN2(VAR2, 3);
        VAR4->VAR18 = FUN2(VAR2, 3);
        if (VAR4->VAR18 == VAR19)
        {
            FUN4(VAR2, 2);
        }
        else
        {
            if ((VAR4->VAR18 & 1) && VAR4->VAR18 != VAR20)
                VAR4->VAR11 = VAR21[FUN2(VAR2, 2)];
            if (VAR4->VAR18 & 4)
                VAR4->VAR12 = VAR22[FUN2(VAR2, 2)];
        }
        VAR4->VAR23 = FUN5(VAR2);
        VAR4->VAR24 = FUN6(VAR4->VAR8, 8) - 8;
        VAR4->VAR25 = VAR26[VAR4->VAR14] >> VAR4->VAR24;
        VAR4->VAR27 = (VAR28[VAR5 >> 1] * 1000) >> VAR4->VAR24;
        VAR4->VAR29 = VAR30[VAR4->VAR18] + VAR4->VAR23;
        VAR4->VAR31 = VAR32[VAR5][VAR4->VAR14] * 2;
        VAR4->VAR33 = VAR34;
        VAR4->VAR35 = 0;
    }
    else
    {
        VAR4->VAR13 = 0;
        VAR4->VAR33 = FUN2(VAR2, 2);
        if (VAR4->VAR33 == VAR36)
            return VAR37;
        VAR4->VAR35 = FUN2(VAR2, 3);
        VAR4->VAR31 = (FUN2(VAR2, 11) + 1) << 1;
        if (VAR4->VAR31 < VAR38)
            return VAR16;
        VAR4->VAR14 = FUN2(VAR2, 2);
        if (VAR4->VAR14 == 3)
        {
            int VAR39 = FUN2(VAR2, 2);
            if (VAR39 == 3)
                return VAR15;
            VAR4->VAR25 = VAR26[VAR39] / 2;
            VAR4->VAR24 = 1;
        }
        else
        {
            VAR4->VAR10 = VAR40[FUN2(VAR2, 2)];
            VAR4->VAR25 = VAR26[VAR4->VAR14];
            VAR4->VAR24 = 0;
        }
        VAR4->VAR18 = FUN2(VAR2, 3);
        VAR4->VAR23 = FUN5(VAR2);
        VAR4->VAR27 = (VAR41)(8.0 * VAR4->VAR31 * VAR4->VAR25 / (VAR4->VAR10 * 256.0));
        VAR4->VAR29 = VAR30[VAR4->VAR18] + VAR4->VAR23;
    }
    VAR4->VAR42 = VAR43[VAR4->VAR18];
    if (VAR4->VAR23)
        VAR4->VAR42 |= VAR44;
    return 0;
}