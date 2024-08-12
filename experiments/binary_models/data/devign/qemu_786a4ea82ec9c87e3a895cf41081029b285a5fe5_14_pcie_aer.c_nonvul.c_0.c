static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7 + VAR2->VAR8.VAR6;
    uint8_t VAR9 = FUN2(VAR4->VAR10);
    uint32_t VAR11 = FUN3(VAR6 + VAR12);
    int VAR13;
    assert(VAR4->VAR10);
    assert(!(VAR4->VAR10 & (VAR4->VAR10 - 1)));
    VAR11 &= ~(VAR14 | VAR15);
    VAR11 |= FUN4(VAR9);
    if (VAR4->VAR16 & VAR17)
    {
        for (VAR13 = 0; VAR13 < FUN5(VAR4->VAR18); ++VAR13)
        {
            VAR5 *VAR19 = VAR6 + VAR20 + VAR13 * sizeof VAR4->VAR18[0];
            FUN6(VAR19, VAR4->VAR18[VAR13]);
        }
    }
    else
    {
        assert(!(VAR4->VAR16 & VAR21));
        memset(VAR6 + VAR20, 0, VAR22);
    }
    if ((VAR4->VAR16 & VAR21) && (FUN3(VAR2->VAR7 + VAR2->VAR8.VAR23 + VAR24) & VAR25))
    {
        for (VAR13 = 0; VAR13 < FUN5(VAR4->VAR26); ++VAR13)
        {
            VAR5 *VAR27 = VAR6 + VAR28 + VAR13 * sizeof VAR4->VAR26[0];
            FUN6(VAR27, VAR4->VAR26[VAR13]);
        }
        VAR11 |= VAR15;
    }
    else
    {
        memset(VAR6 + VAR28, 0, VAR29);
    }
    FUN7(VAR6 + VAR12, VAR11);
}