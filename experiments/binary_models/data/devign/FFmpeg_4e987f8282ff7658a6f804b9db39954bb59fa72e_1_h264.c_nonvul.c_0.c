static inline void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, VAR3 *VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11)
{
    VAR12 *const VAR13 = &VAR2->VAR13;
    int VAR14;
    int VAR15;
    int VAR16 = 1;
    VAR3 *VAR17;
    VAR3 *VAR18;
    if (!VAR10 && VAR19)
    {
        if (VAR13->VAR20 & 1)
        {
            if (!VAR21)
                return;
        }
        else
        {
            VAR16 = VAR21 ? 0 : 1;
        }
    }
    if (VAR2->VAR22 == 2)
    {
        VAR14 = VAR2->VAR23[VAR2->VAR24 - 1 - VAR13->VAR25] == VAR2->VAR26;
        VAR15 = VAR2->VAR27;
    }
    else
    {
        VAR14 = (VAR13->VAR28 > 0);
        VAR15 = (VAR13->VAR20 > !!VAR29);
    }
    VAR4 -= VAR7 + 1 + VAR11;
    VAR5 -= VAR8 + 1 + VAR11;
    VAR6 -= VAR8 + 1 + VAR11;
    VAR17 = VAR2->VAR30[VAR16][VAR13->VAR28 - 1];
    VAR18 = VAR2->VAR30[VAR16][VAR13->VAR28];
    if (VAR11)
    {
        if (VAR9)
        {
            FUN2(VAR31 + 0, VAR32 + 0);
            FUN2(VAR31 + 8, VAR32 + 8);
        }
        else
        {
            FUN3(VAR31, VAR32);
        }
    }
    else if (VAR9)
        FUN2(VAR31, VAR32);
    else
        FUN4(VAR31, VAR32);
    if (VAR15)
    {
        if (VAR14)
        {
            FUN5(VAR17 + (8 << VAR11), VAR4 - (7 << VAR11), 1);
        }
        FUN5(VAR18 + (0 << VAR11), VAR4 + (1 << VAR11), VAR9);
        FUN5(VAR18 + (8 << VAR11), VAR4 + (9 << VAR11), 1);
        if (VAR13->VAR28 + 1 < VAR13->VAR33)
        {
            FUN5(VAR2->VAR30[VAR16][VAR13->VAR28 + 1], VAR4 + (17 << VAR11), 1);
        }
    }
    if (VAR10 || !VAR34 || !(VAR13->VAR35 & VAR36))
    {
        if (VAR15)
        {
            if (VAR14)
            {
                FUN5(VAR17 + (16 << VAR11), VAR5 - (7 << VAR11), 1);
                FUN5(VAR17 + (24 << VAR11), VAR6 - (7 << VAR11), 1);
            }
            FUN5(VAR18 + (16 << VAR11), VAR5 + 1 + VAR11, 1);
            FUN5(VAR18 + (24 << VAR11), VAR6 + 1 + VAR11, 1);
        }
    }
}