int FUN1(VAR1 *VAR2, enum AVSampleFormat VAR3, enum AVSampleFormat VAR4)
{
    int VAR5;
    double VAR6 = 0;
    if (VAR2->VAR7.VAR8 > VAR9 && VAR2->VAR7.VAR8 <= VAR10)
        return FUN2(VAR11);
    VAR3 = FUN3(VAR3);
    VAR4 = FUN3(VAR4);
    if (VAR4 == VAR12 || VAR4 == VAR13)
    {
        if (VAR3 == VAR14)
            VAR6 = 1.0 / (1L << 31);
        if (VAR3 == VAR15)
            VAR6 = 1.0 / (1L << 15);
        if (VAR3 == VAR16)
            VAR6 = 1.0 / (1L << 7);
    }
    if (VAR4 == VAR14 && VAR3 == VAR15)
        VAR6 = 1L << 16;
    if (VAR4 == VAR14 && VAR3 == VAR16)
        VAR6 = 1L << 24;
    if (VAR4 == VAR15 && VAR3 == VAR16)
        VAR6 = 1L << 8;
    VAR6 *= VAR2->VAR7.VAR6;
    VAR2->VAR7.VAR17 = 0;
    VAR2->VAR7.VAR18 = VAR6;
    VAR2->VAR7.VAR19 = VAR6;
    VAR2->VAR7.VAR20 = 1 / VAR6;
    memset(VAR2->VAR7.VAR21, 0, sizeof(VAR2->VAR7.VAR21));
    for (VAR5 = 0; VAR22[VAR5].VAR23; VAR5++)
    {
        const VAR24 *VAR25 = &VAR22[VAR5];
        if (FUN4(VAR2->VAR26 - VAR25->VAR27) / VAR25->VAR27 <= .05 && VAR25->VAR28 == VAR2->VAR7.VAR8)
        {
            int VAR29;
            VAR2->VAR7.VAR30 = VAR25->VAR31;
            for (VAR29 = 0; VAR29 < VAR25->VAR31; VAR29++)
                VAR2->VAR7.VAR32[VAR29] = VAR25->VAR23[VAR29];
            VAR2->VAR7.VAR20 *= 1 - FUN5(VAR25->VAR33 * VAR34 * 0.005) * 2 / (1 << (8 * FUN6(VAR3)));
            break;
        }
    }
    if (!VAR22[VAR5].VAR23 && VAR2->VAR7.VAR8 > VAR10)
    {
        FUN7(VAR2, VAR35, "");
        VAR2->VAR7.VAR8 = VAR9;
    }
    FUN8(!VAR2->VAR36.VAR37);
    VAR2->VAR7.VAR38 = VAR2->VAR36;
    VAR2->VAR7.VAR39 = VAR2->VAR36;
    if (VAR2->VAR7.VAR8 > VAR10)
    {
        VAR2->VAR7.VAR38.VAR40 = 4;
        VAR2->VAR7.VAR38.VAR41 = VAR42;
        VAR2->VAR7.VAR18 = 1;
    }
    return 0;
}