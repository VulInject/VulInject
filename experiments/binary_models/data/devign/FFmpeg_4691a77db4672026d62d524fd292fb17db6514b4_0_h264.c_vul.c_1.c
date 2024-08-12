static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR5 *VAR6, VAR5 *VAR7, VAR5 *VAR8, unsigned int VAR9, unsigned int VAR10)
{
    VAR11 *const VAR12 = &VAR2->VAR12;
    int VAR13, VAR14;
    int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21;
    VAR13 = VAR3 + VAR4 * VAR12->VAR22;
    if (VAR3 == 0 || VAR4 == 0 || !VAR12->VAR23.VAR24 || (VAR2->VAR25 == 2 && (VAR2->VAR26[VAR13] != VAR2->VAR26[VAR2->VAR27] || VAR2->VAR26[VAR13] != VAR2->VAR26[VAR13 - 1])))
    {
        FUN2(VAR2, VAR3, VAR4, VAR6, VAR7, VAR8, VAR9, VAR10);
        return;
    }
    assert(!VAR28);
    VAR14 = VAR12->VAR29.VAR14[VAR13];
    VAR15 = VAR12->VAR29.VAR30[VAR13];
    VAR16 = VAR12->VAR29.VAR30[VAR13 - 1];
    VAR17 = VAR12->VAR29.VAR30[VAR2->VAR27];
    VAR18 = FUN3(VAR2, VAR15);
    VAR19 = FUN3(VAR2, VAR16);
    VAR20 = FUN3(VAR2, VAR17);
    VAR16 = (VAR15 + VAR16 + 1) >> 1;
    VAR17 = (VAR15 + VAR17 + 1) >> 1;
    VAR19 = (VAR18 + VAR19 + 1) >> 1;
    VAR20 = (VAR18 + VAR20 + 1) >> 1;
    VAR21 = 15 - VAR2->VAR31;
    if (VAR15 <= VAR21 && VAR16 <= VAR21 && VAR17 <= VAR21 && VAR18 <= VAR21 && VAR19 <= VAR21 && VAR20 <= VAR21)
        return;
    if (FUN4(VAR14))
    {
        int16_t VAR32[4] = {4, 4, 4, 4};
        int16_t VAR33[4] = {3, 3, 3, 3};
        if (FUN5(VAR14))
        {
            FUN6(VAR2, &VAR6[4 * 0], VAR9, VAR32, VAR16);
            FUN6(VAR2, &VAR6[4 * 2], VAR9, VAR33, VAR15);
            FUN7(VAR2, &VAR6[4 * 0 * VAR9], VAR9, VAR32, VAR17);
            FUN7(VAR2, &VAR6[4 * 2 * VAR9], VAR9, VAR33, VAR15);
        }
        else
        {
            FUN6(VAR2, &VAR6[4 * 0], VAR9, VAR32, VAR16);
            FUN6(VAR2, &VAR6[4 * 1], VAR9, VAR33, VAR15);
            FUN6(VAR2, &VAR6[4 * 2], VAR9, VAR33, VAR15);
            FUN6(VAR2, &VAR6[4 * 3], VAR9, VAR33, VAR15);
            FUN7(VAR2, &VAR6[4 * 0 * VAR9], VAR9, VAR32, VAR17);
            FUN7(VAR2, &VAR6[4 * 1 * VAR9], VAR9, VAR33, VAR15);
            FUN7(VAR2, &VAR6[4 * 2 * VAR9], VAR9, VAR33, VAR15);
            FUN7(VAR2, &VAR6[4 * 3 * VAR9], VAR9, VAR33, VAR15);
        }
        FUN8(VAR2, &VAR7[2 * 0], VAR10, VAR32, VAR19);
        FUN8(VAR2, &VAR7[2 * 2], VAR10, VAR33, VAR18);
        FUN8(VAR2, &VAR8[2 * 0], VAR10, VAR32, VAR19);
        FUN8(VAR2, &VAR8[2 * 2], VAR10, VAR33, VAR18);
        FUN9(VAR2, &VAR7[2 * 0 * VAR10], VAR10, VAR32, VAR20);
        FUN9(VAR2, &VAR7[2 * 2 * VAR10], VAR10, VAR33, VAR18);
        FUN9(VAR2, &VAR8[2 * 0 * VAR10], VAR10, VAR32, VAR20);
        FUN9(VAR2, &VAR8[2 * 2 * VAR10], VAR10, VAR33, VAR18);
        return;
    }
    else
    {
        FUN10(VAR34, VAR35[2][4][4]);
        FUN11(*VAR36)[4] = (FUN11(*)[4])VAR35;
        int VAR37;
        if (FUN5(VAR14) && (VAR2->VAR38 & 7) == 7)
        {
            VAR37 = 4;
            VAR36[0][0] = VAR36[0][2] = VAR36[1][0] = VAR36[1][2] = 0x0002000200020002ULL;
        }
        else
        {
            int VAR39 = (VAR14 & (VAR40 | VAR41)) ? 3 : (VAR14 & VAR42) ? 1
                                                                                                       : 0;
            int VAR43 = (VAR14 & (VAR40 | VAR41)) && (VAR12->VAR29.VAR14[VAR13 - 1] & (VAR40 | VAR41)) ? 3 : 0;
            int VAR44 = FUN5(VAR14) ? 2 : 1;
            VAR37 = (VAR14 & VAR40) && !(VAR2->VAR38 & 15) ? 1 : 4;
            VAR12->VAR23.FUN12(VAR35, VAR2->VAR45, VAR2->VAR46, VAR2->VAR47, (VAR2->VAR48 == VAR49), VAR37, VAR44, VAR43, VAR39);
        }
        if (FUN4(VAR12->VAR29.VAR14[VAR13 - 1]))
            VAR36[0][0] = 0x0004000400040004ULL;
        if (FUN4(VAR12->VAR29.VAR14[VAR2->VAR27]))
            VAR36[1][0] = 0x0004000400040004ULL;
        if (VAR36[VAR50][VAR51])
        {
            VAR52##FUN13(VAR2, &VAR6[4 * VAR51 * (VAR50 ? VAR9 : 1)], VAR9, VAR35[VAR50][VAR51], VAR51 ? VAR15 : VAR15##VAR50);
            if (!(VAR51 & 1))
            {
                VAR53##FUN13(VAR2, &VAR7[2 * VAR51 * (VAR50 ? VAR10 : 1)], VAR10, VAR35[VAR50][VAR51], VAR51 ? VAR18 : VAR18##VAR50);
                VAR53##FUN13(VAR2, &VAR8[2 * VAR51 * (VAR50 ? VAR10 : 1)], VAR10, VAR35[VAR50][VAR51], VAR51 ? VAR18 : VAR18##VAR50);
            }
        }
        if (VAR37 == 1)
        {
            FUN14(VAR54, 0, 0);
            FUN14(VAR2, 1, 0);
        }
        else if (FUN5(VAR14))
        {
            FUN14(VAR54, 0, 0);
            FUN14(VAR54, 0, 2);
            FUN14(VAR2, 1, 0);
            FUN14(VAR2, 1, 2);
        }
        else
        {
            FUN14(VAR54, 0, 0);
            FUN14(VAR54, 0, 1);
            FUN14(VAR54, 0, 2);
            FUN14(VAR54, 0, 3);
            FUN14(VAR2, 1, 0);
            FUN14(VAR2, 1, 1);
            FUN14(VAR2, 1, 2);
            FUN14(VAR2, 1, 3);
        }
    }
}