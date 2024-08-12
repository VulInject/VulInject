static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13 = &VAR8->VAR14;
    int VAR15, VAR16, VAR17, VAR18, VAR19;
    int VAR20 = 0;
    int64_t VAR21 = 0;
    const int VAR22 = VAR6 == 2 ? 8 + 1 : 1;
    const int64_t VAR23 = FUN2(VAR13) - VAR22;
    VAR16 = VAR2->VAR5[VAR5].VAR16;
    VAR17 = VAR2->VAR5[VAR5].VAR17;
    VAR18 = VAR2->VAR5[VAR5].VAR18;
    VAR19 = VAR2->VAR5[VAR5].VAR24 - 1;
    if (VAR16 & VAR25)
    {
        FUN3(VAR8);
        if (FUN4(VAR2, VAR13, VAR22, 0) < 0)
            return -1;
        if (VAR6 != 2)
            VAR6 = 1;
    }
    if (VAR19 == -1)
        VAR19 = FUN5(VAR13);
    if (VAR19 >= VAR8->VAR26)
    {
        FUN6(VAR8, VAR27, "");
        return -1;
    }
    VAR11 = &VAR2->VAR11[VAR19];
    VAR20 = !!(VAR16 & VAR28);
    if (VAR16 & VAR29)
    {
        if (VAR16 & VAR30)
        {
            VAR21 = FUN5(VAR13);
            if (VAR6 && VAR20)
            {
                FUN7(VAR8->VAR31[VAR19], VAR23, VAR21, VAR23 - VAR2->VAR11[VAR19].VAR32, VAR33);
                VAR2->VAR11[VAR19].VAR32 = VAR23;
                assert(VAR2->VAR34 == VAR23);
            }
        }
        else
        {
            int64_t VAR35 = (1 << VAR11->VAR36) - 1;
            int64_t VAR37 = VAR11->VAR38 - VAR35 / 2;
            VAR21 = ((FUN5(VAR13) - VAR37) & VAR35) + VAR37;
        }
    }
    else
    {
        VAR21 = VAR11->VAR38 + VAR11->VAR39[(VAR16 & 12) >> 2];
    }
    if (VAR17 <= VAR18)
    {
        VAR15 = VAR11->VAR40[VAR18 - VAR17];
    }
    else
    {
        if (VAR16 & VAR41)
            VAR15 = VAR17 * FUN5(VAR13) + VAR18;
        else
            VAR15 = VAR18;
    }
    if (FUN2(VAR13) - VAR2->VAR34 + VAR15 > VAR2->VAR42)
    {
        FUN6(VAR8, VAR27, "");
        return -1;
    }
    FUN8(VAR4, VAR15);
    FUN9(VAR13, VAR4->VAR43, VAR15);
    VAR4->VAR44 = VAR19;
    if (VAR20)
        VAR4->VAR16 |= VAR45;
    VAR4->VAR21 = VAR21 * VAR46 * VAR11->VAR47 / VAR11->VAR48;
    update(VAR2, VAR19, VAR23, VAR6, VAR5, VAR20, VAR15, VAR21);
    return 0;
}