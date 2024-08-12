static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOV_atom_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR9[VAR2->VAR8->VAR10 - 1];
    VAR11 *VAR12 = VAR7->VAR13;
    int VAR14, VAR15, VAR16;
    FUN2(VAR4);
    VAR14 = FUN2(VAR4);
    if (VAR14 >= VAR17 / sizeof(*VAR12->VAR18))
        return -1;
    VAR12->VAR19 = VAR14;
    VAR12->VAR18 = FUN3(VAR14 * sizeof(*VAR12->VAR18));
    for (VAR15 = 0; VAR15 < VAR12->VAR19; VAR15++)
    {
        VAR20 *VAR21 = &VAR12->VAR18[VAR15];
        uint32_t VAR22 = FUN2(VAR4);
        offset_t VAR23 = FUN4(VAR4) + VAR22 - 4;
        VAR21->VAR24 = FUN5(VAR4);
        FUN2(VAR4);
        FUN6(VAR2->VAR8, "", (char *)&VAR21->VAR24, VAR22);
        if (VAR21->VAR24 == FUN7('', '', '', '') && VAR22 > 150)
        {
            uint16_t VAR25, VAR26;
            char VAR27[28];
            int16_t VAR24;
            FUN8(VAR4, 10);
            VAR25 = FUN9(VAR4);
            VAR25 = FUN10(VAR25, 27);
            FUN11(VAR4, VAR27, 27);
            VAR27[VAR25] = 0;
            FUN12(VAR2->VAR8, VAR28, "", VAR27, VAR25);
            FUN8(VAR4, 112);
            for (VAR24 = 0; VAR24 != -1 && FUN4(VAR4) < VAR23;)
            {
                VAR24 = FUN13(VAR4);
                VAR26 = FUN13(VAR4);
                FUN12(VAR2->VAR8, VAR28, "", VAR24, VAR26);
                if (VAR26 & 1)
                    VAR26 += 1;
                if (VAR24 == 2)
                {
                    VAR21->VAR29 = FUN3(VAR26 + 1);
                    FUN11(VAR4, VAR21->VAR29, VAR26);
                    if (!FUN14(VAR21->VAR29, VAR27, VAR25))
                    {
                        VAR26 -= VAR25;
                        memmove(VAR21->VAR29, VAR21->VAR29 + VAR25, VAR26);
                        VAR21->VAR29[VAR26] = 0;
                    }
                    for (VAR16 = 0; VAR16 < VAR26; VAR16++)
                        if (VAR21->VAR29[VAR16] == '')
                            VAR21->VAR29[VAR16] = '';
                    FUN12(VAR2->VAR8, VAR28, "", VAR21->VAR29);
                }
                else
                    FUN8(VAR4, VAR26);
            }
        }
        FUN15(VAR4, VAR23, VAR30);
    }
    return 0;
}