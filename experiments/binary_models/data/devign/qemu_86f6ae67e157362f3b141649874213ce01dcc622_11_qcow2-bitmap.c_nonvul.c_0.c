static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, uint32_t VAR5, VAR6 *VAR7)
{
    int VAR8 = 0;
    VAR9 *VAR10 = VAR2->VAR11;
    uint64_t VAR12, VAR13;
    uint64_t VAR14 = FUN2(VAR7);
    uint64_t VAR15 = FUN3(VAR14, VAR16);
    VAR17 *VAR18 = NULL;
    uint64_t VAR19, VAR20 = FUN4(VAR10, FUN5(VAR7, 0, VAR14));
    if (VAR20 != VAR5 || VAR20 > VAR21)
    {
        return -VAR22;
    }
    VAR18 = FUN6(VAR10->VAR23);
    VAR13 = FUN7(VAR10, VAR7);
    for (VAR19 = 0, VAR12 = 0; VAR19 < VAR20; ++VAR19, VAR12 += VAR13)
    {
        uint64_t VAR24 = FUN8(VAR15 - VAR12, VAR13);
        uint64_t VAR25 = VAR4[VAR19];
        uint64_t VAR26 = VAR25 & VAR27;
        assert(FUN9(VAR25, VAR10->VAR23) == 0);
        if (VAR26 == 0)
        {
            if (VAR25 & VAR28)
            {
                FUN10(VAR7, VAR12 * VAR16, VAR24 * VAR16, false);
            }
            else
            {
            }
        }
        else
        {
            VAR8 = FUN11(VAR2->VAR29, VAR26, VAR18, VAR10->VAR23);
            if (VAR8 < 0)
            {
                goto VAR30;
            }
            FUN12(VAR7, VAR18, VAR12 * VAR16, VAR24 * VAR16, false);
        }
    }
    VAR8 = 0;
    FUN13(VAR7);
VAR30:
    FUN14(VAR18);
    return VAR8;
}