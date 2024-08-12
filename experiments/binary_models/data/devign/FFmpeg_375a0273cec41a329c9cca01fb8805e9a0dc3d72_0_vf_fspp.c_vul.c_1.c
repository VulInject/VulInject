static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7, int VAR8, int VAR9, VAR3 *VAR10, int VAR11, int VAR12)
{
    int VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    const int VAR19 = VAR12 ? VAR2->VAR20 : (VAR8 + 16);
    const int VAR21 = 6 - VAR2->VAR22;
    const int VAR23 = 4 - VAR2->VAR24 * !VAR12;
    const int VAR25 = 4 - VAR2->VAR26 * !VAR12;
    FUN2(32, VAR27, VAR28)
    [4 * 8 * VAR29 + 4 * 8 * VAR29];
    VAR30 *VAR31 = (VAR30 *)VAR28;
    VAR30 *VAR32 = (VAR30 *)(VAR28 + 4 * 8 * VAR29);
    memset(VAR32, 0, 4 * 8 * VAR29);
    if (!VAR5 || !VAR4)
        return;
    for (VAR15 = 0; VAR15 < VAR9; VAR15++)
    {
        int VAR33 = 8 + 8 * VAR19 + VAR15 * VAR19;
        memcpy(VAR2->VAR5 + VAR33, VAR5 + VAR15 * VAR7, VAR8);
        for (VAR13 = 0; VAR13 < 8; VAR13++)
        {
            VAR2->VAR5[VAR33 - VAR13 - 1] = VAR2->VAR5[VAR33 + VAR13];
            VAR2->VAR5[VAR33 + VAR8 + VAR13] = VAR2->VAR5[VAR33 + VAR8 - VAR13 - 1];
        }
    }
    for (VAR15 = 0; VAR15 < 8; VAR15++)
    {
        memcpy(VAR2->VAR5 + (7 - VAR15) * VAR19, VAR2->VAR5 + (VAR15 + 8) * VAR19, VAR19);
        memcpy(VAR2->VAR5 + (VAR9 + 8 + VAR15) * VAR19, VAR2->VAR5 + (VAR9 - VAR15 + 7) * VAR19, VAR19);
    }
    for (VAR15 = 8; VAR15 < 24; VAR15++)
        memset(VAR2->VAR34 + 8 + VAR15 * VAR19, 0, VAR8 * sizeof(VAR30));
    for (VAR15 = VAR21; VAR15 < VAR9 + 8; VAR15 += VAR21)
    {
        const int VAR35 = VAR15 - 8 + VAR21;
        VAR17 = VAR15 - 4;
        if (VAR17 > VAR9 - 1)
            VAR17 = VAR9 - 1;
        if (VAR17 < 0)
            VAR17 = 0;
        VAR17 = (VAR17 >> VAR25) * VAR11;
        VAR2->FUN3(VAR31, VAR2->VAR5 + VAR15 * VAR19 + 2 - (VAR15 & 1), VAR19, 2);
        for (VAR14 = 0; VAR14 < VAR8 + 8 - 8 * (VAR29 - 1); VAR14 += 8 * (VAR29 - 1))
        {
            VAR2->FUN3(VAR31 + 8 * 8, VAR2->VAR5 + VAR15 * VAR19 + 8 + VAR14 + 2 - (VAR15 & 1), VAR19, 2 * (VAR29 - 1));
            if (VAR2->VAR36)
                VAR2->FUN4((VAR30 *)(&VAR2->VAR37[0]), VAR31 + 0 * 8, VAR32 + 0 * 8, 8 * (VAR29 - 1));
            else
                for (VAR13 = 0; VAR13 < 8 * (VAR29 - 1); VAR13 += 8)
                {
                    VAR18 = VAR13 + VAR14 - 2;
                    if (VAR18 < 0)
                        VAR18 = 0;
                    VAR18 = VAR10[VAR17 + (VAR18 >> VAR23)];
                    VAR18 = FUN5(VAR18, VAR2->VAR38);
                    if (VAR18 != VAR2->VAR39)
                        VAR2->VAR39 = VAR18, VAR2->FUN6((VAR30 *)(&VAR2->VAR40[0]), (VAR30 *)(&VAR2->VAR37[0]), VAR18);
                    VAR2->FUN4((VAR30 *)(&VAR2->VAR37[0]), VAR31 + VAR13 * 8, VAR32 + VAR13 * 8, 8);
                }
            VAR2->FUN7(VAR32 + 0 * 8, VAR2->VAR34 + (VAR15 & 15) * VAR19 + VAR14 + 2 - (VAR15 & 1), VAR19, 2 * (VAR29 - 1));
            memmove(VAR31, VAR31 + (VAR29 - 1) * 64, 8 * 8 * sizeof(VAR30));
            memmove(VAR32, VAR32 + (VAR29 - 1) * 64, 6 * 8 * sizeof(VAR30));
        }
        VAR16 = VAR8 + 8 - VAR14;
        if (VAR16 > 8)
            VAR2->FUN3(VAR31 + 8 * 8, VAR2->VAR5 + VAR15 * VAR19 + 8 + VAR14 + 2 - (VAR15 & 1), VAR19, (VAR16 - 4) >> 2);
        VAR2->FUN4((VAR30 *)(&VAR2->VAR37[0]), VAR31, VAR32, VAR16 & (~1));
        VAR2->FUN7(VAR32 + 0 * 8, VAR2->VAR34 + (VAR15 & 15) * VAR19 + VAR14 + 2 - (VAR15 & 1), VAR19, VAR16 >> 2);
        if (!(VAR35 & 7) && VAR35)
        {
            if (VAR35 & 8)
                VAR2->FUN8(VAR4 + (VAR35 - 8) * VAR6, VAR2->VAR34 + 8 + 8 * VAR19, VAR6, VAR19, VAR8, 8, 5 - VAR2->VAR22);
            else
                VAR2->FUN9(VAR4 + (VAR35 - 8) * VAR6, VAR2->VAR34 + 8 + 0 * VAR19, VAR6, VAR19, VAR8, 8, 5 - VAR2->VAR22);
        }
    }
    if (VAR15 & 7)
    {
        if (VAR15 & 8)
            VAR2->FUN8(VAR4 + ((VAR15 - 8) & ~7) * VAR6, VAR2->VAR34 + 8 + 8 * VAR19, VAR6, VAR19, VAR8, VAR15 & 7, 5 - VAR2->VAR22);
        else
            VAR2->FUN9(VAR4 + ((VAR15 - 8) & ~7) * VAR6, VAR2->VAR34 + 8 + 0 * VAR19, VAR6, VAR19, VAR8, VAR15 & 7, 5 - VAR2->VAR22);
    }
}