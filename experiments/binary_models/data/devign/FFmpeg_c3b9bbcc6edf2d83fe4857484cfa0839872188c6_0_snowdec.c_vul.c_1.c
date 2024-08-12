static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    const int VAR6 = VAR2->VAR7 << VAR2->VAR8;
    const int VAR9 = VAR2->VAR8 - VAR3;
    const int VAR10 = (VAR4 + VAR5 * VAR6) << VAR9;
    int VAR11 = (VAR4 + 1) << VAR9;
    const VAR12 *VAR13 = VAR4 ? &VAR2->VAR14[VAR10 - 1] : &VAR15;
    const VAR12 *VAR16 = VAR5 ? &VAR2->VAR14[VAR10 - VAR6] : &VAR15;
    const VAR12 *VAR17 = VAR5 && VAR4 ? &VAR2->VAR14[VAR10 - VAR6 - 1] : VAR13;
    const VAR12 *VAR18 = VAR5 && VAR11 < VAR6 && ((VAR4 & 1) == 0 || VAR3 == 0) ? &VAR2->VAR14[VAR10 - VAR6 + (1 << VAR9)] : VAR17;
    int VAR19 = 2 * VAR13->VAR3 + 2 * VAR16->VAR3 + VAR17->VAR3 + VAR18->VAR3;
    int VAR20;
    if (VAR2->VAR21)
    {
        FUN2(VAR2, VAR3, VAR4, VAR5, VAR15.VAR22[0], VAR15.VAR22[1], VAR15.VAR22[2], VAR15.VAR23, VAR15.VAR24, VAR15.VAR25, VAR26);
        return 0;
    }
    if (VAR3 == VAR2->VAR8 || FUN3(&VAR2->VAR27, &VAR2->VAR28[4 + VAR19]))
    {
        int VAR29, VAR23, VAR24;
        int VAR30 = VAR13->VAR22[0];
        int VAR31 = VAR13->VAR22[1];
        int VAR32 = VAR13->VAR22[2];
        unsigned VAR25 = 0;
        int VAR33 = FUN4(2 * VAR13->VAR25) + FUN4(2 * VAR16->VAR25);
        int VAR34 = FUN4(2 * FUN5(VAR13->VAR23 - VAR16->VAR23)) + 0 * FUN4(2 * FUN5(VAR18->VAR23 - VAR16->VAR23));
        int VAR35 = FUN4(2 * FUN5(VAR13->VAR24 - VAR16->VAR24)) + 0 * FUN4(2 * FUN5(VAR18->VAR24 - VAR16->VAR24));
        VAR29 = FUN3(&VAR2->VAR27, &VAR2->VAR28[1 + VAR13->VAR29 + VAR16->VAR29]) ? VAR26 : 0;
        if (VAR29)
        {
            FUN6(VAR2, &VAR23, &VAR24, 0, VAR13, VAR16, VAR18);
            VAR30 += FUN7(&VAR2->VAR27, &VAR2->VAR28[32], 1);
            if (VAR2->VAR36 > 2)
            {
                VAR31 += FUN7(&VAR2->VAR27, &VAR2->VAR28[64], 1);
                VAR32 += FUN7(&VAR2->VAR27, &VAR2->VAR28[96], 1);
            }
        }
        else
        {
            if (VAR2->VAR37 > 1)
                VAR25 = FUN7(&VAR2->VAR27, &VAR2->VAR28[128 + 1024 + 32 * VAR33], 0);
            if (VAR25 >= VAR2->VAR37)
            {
                FUN8(VAR2->VAR38, VAR39, "");
                return VAR40;
            }
            FUN6(VAR2, &VAR23, &VAR24, VAR25, VAR13, VAR16, VAR18);
            VAR23 += FUN7(&VAR2->VAR27, &VAR2->VAR28[128 + 32 * (VAR34 + 16 * !!VAR25)], 1);
            VAR24 += FUN7(&VAR2->VAR27, &VAR2->VAR28[128 + 32 * (VAR35 + 16 * !!VAR25)], 1);
        }
        FUN2(VAR2, VAR3, VAR4, VAR5, VAR30, VAR31, VAR32, VAR23, VAR24, VAR25, VAR29);
    }
    else
    {
        if ((VAR20 = FUN1(VAR2, VAR3 + 1, 2 * VAR4 + 0, 2 * VAR5 + 0)) < 0 || (VAR20 = FUN1(VAR2, VAR3 + 1, 2 * VAR4 + 1, 2 * VAR5 + 0)) < 0 || (VAR20 = FUN1(VAR2, VAR3 + 1, 2 * VAR4 + 0, 2 * VAR5 + 1)) < 0 || (VAR20 = FUN1(VAR2, VAR3 + 1, 2 * VAR4 + 1, 2 * VAR5 + 1)) < 0)
            return VAR20;
    }
    return 0;
}