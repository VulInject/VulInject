static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    FUN2(VAR6, VAR7, [16]);
    VAR8 *VAR9 = &VAR2->VAR9;
    VAR10 *VAR11 = &VAR9->VAR11;
    int VAR12 = VAR13[VAR2->VAR14[VAR9->VAR15]], VAR16 = VAR13[VAR9->VAR15];
    VAR17 *VAR18 = VAR9->VAR19[0];
    VAR6 *VAR20 = VAR9->VAR21[0];
    int VAR22, VAR23, VAR24, VAR25;
    memset(VAR7, 0, 16 * sizeof(*VAR7));
    VAR25 = FUN3(VAR7, VAR11, VAR2->VAR26, 3, 0, VAR12, VAR12, VAR16);
    if (VAR25)
        VAR2->VAR27.FUN4(VAR7);
    else
        VAR2->VAR27.FUN5(VAR7);
    VAR24 = VAR28[VAR4[0]];
    VAR24 = FUN6(VAR24, VAR2->VAR29[6 - 4], VAR2->VAR29[6 - 1]);
    VAR2->VAR30.VAR31[VAR24](VAR18, VAR9->VAR32);
    for (VAR23 = 0; VAR23 < 4; VAR23++)
    {
        for (VAR22 = 0; VAR22 < 4; VAR22++, VAR5 >>= 1)
        {
            int VAR33 = VAR7[VAR22 + VAR23 * 4];
            if (VAR5 & 1)
            {
                VAR25 = FUN3(VAR20, VAR11, VAR2->VAR26, VAR2->VAR34, 0, VAR16, VAR16, VAR16);
            }
            else
                VAR25 = 0;
            if (VAR25)
            {
                VAR20[0] = VAR33;
                VAR2->VAR27.FUN7(VAR18 + 4 * VAR22, VAR9->VAR32, VAR20);
            }
            else
                VAR2->VAR27.FUN8(VAR18 + 4 * VAR22, VAR9->VAR32, VAR33);
        }
        VAR18 += 4 * VAR9->VAR32;
    }
    VAR24 = VAR28[VAR4[0]];
    if (VAR24 == VAR35)
        VAR24 = VAR36;
    VAR24 = FUN6(VAR24, VAR2->VAR29[6 - 4], VAR2->VAR29[6 - 1]);
    VAR12 = VAR13[VAR37[1][VAR9->VAR15]];
    VAR16 = VAR13[VAR37[0][VAR9->VAR15]];
    for (VAR23 = 1; VAR23 < 3; VAR23++)
    {
        VAR18 = VAR9->VAR19[VAR23];
        VAR2->VAR30.VAR38[VAR24](VAR18, VAR9->VAR39);
        for (VAR22 = 0; VAR22 < 4; VAR22++, VAR5 >>= 1)
        {
            VAR17 *VAR40;
            if (!(VAR5 & 1))
                continue;
            VAR40 = VAR18 + (VAR22 & 1) * 4 + (VAR22 & 2) * 2 * VAR9->VAR39;
            FUN9(VAR2, VAR40, VAR9->VAR39, VAR2->VAR41, 1, VAR12, VAR16);
        }
    }
}