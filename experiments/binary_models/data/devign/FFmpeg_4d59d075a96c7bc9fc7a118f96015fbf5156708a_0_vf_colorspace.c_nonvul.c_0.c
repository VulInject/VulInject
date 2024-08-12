static void FUN1(void)
{
    FUN2(void, VAR1 *VAR2[3], ptrdiff_t VAR3[3], VAR4 *VAR5[3], ptrdiff_t VAR6, int VAR7, int VAR8, const int16_t VAR9[3][3][8], const int16_t VAR10[8]);
    ColorSpaceDSPContext VAR11;
    int VAR12, VAR13, VAR14;
    FUN3(VAR4, VAR15, [VAR16 * VAR17 * 2]);
    FUN3(VAR4, VAR18, [VAR16 * VAR17 * 2]);
    FUN3(VAR4, VAR19, [VAR16 * VAR17 * 2]);
    VAR4 *VAR5[3] = {VAR15, VAR18, VAR19};
    FUN3(VAR1, VAR20, [VAR16 * VAR17 * 2]);
    FUN3(VAR1, VAR21, [VAR16 * VAR17 * 2]);
    FUN3(VAR1, VAR22, [VAR16 * VAR17 * 2]);
    FUN3(VAR1, VAR23, [VAR16 * VAR17 * 2]);
    FUN3(VAR1, VAR24, [VAR16 * VAR17 * 2]);
    FUN3(VAR1, VAR25, [VAR16 * VAR17 * 2]);
    VAR1 *VAR26[3] = {VAR20, VAR21, VAR22}, *VAR27[3] = {VAR23, VAR24, VAR25};
    FUN3(VAR4, VAR28, [8]);
    FUN3(VAR4, VAR29, [3 * 3 * 8]);
    FUN4(*VAR9)[3][8] = (FUN4(*)[3][8])VAR29;
    FUN5(&VAR11);
    for (VAR14 = 0; VAR14 < 8; VAR14++)
    {
        VAR28[VAR14] = 16;
        VAR9[0][0][VAR14] = FUN6(0.3 * (1 << 14));
        VAR9[0][1][VAR14] = FUN6(0.6 * (1 << 14));
        VAR9[0][2][VAR14] = FUN6(0.1 * (1 << 14));
        VAR9[1][0][VAR14] = FUN6(-0.15 * (1 << 14));
        VAR9[1][1][VAR14] = FUN6(-0.35 * (1 << 14));
        VAR9[1][2][VAR14] = FUN6(0.5 * (1 << 14));
        VAR9[2][0][VAR14] = FUN6(0.5 * (1 << 14));
        VAR9[2][1][VAR14] = FUN6(-0.42 * (1 << 14));
        VAR9[2][2][VAR14] = FUN6(-0.08 * (1 << 14));
    }
    for (VAR12 = 0; VAR12 < 3; VAR12++)
    {
        for (VAR13 = 0; VAR13 < 3; VAR13++)
        {
            if (FUN7(VAR11.VAR30[VAR12][VAR13], "", VAR31[VAR13], VAR12 * 2 + 8))
            {
                int VAR32 = !!VAR13, VAR33 = VAR13 == 2;
                int VAR34 = VAR16 << !!VAR12;
                int VAR35 = VAR34 >> VAR32;
                FUN8();
                FUN9(VAR26, (VAR36[3]){VAR34, VAR35, VAR35}, VAR5, VAR16, VAR16, VAR17, VAR9, VAR28);
                FUN10(VAR27, (VAR36[3]){VAR34, VAR35, VAR35}, VAR5, VAR16, VAR16, VAR17, VAR9, VAR28);
                if (memcmp(VAR26[0], VAR27[0], VAR17 * VAR34) || memcmp(VAR26[1], VAR27[1], VAR17 * VAR35 >> VAR33) || memcmp(VAR26[2], VAR27[2], VAR17 * VAR35 >> VAR33))
                {
                    FUN11();
                }
            }
        }
    }
    FUN12("");
}