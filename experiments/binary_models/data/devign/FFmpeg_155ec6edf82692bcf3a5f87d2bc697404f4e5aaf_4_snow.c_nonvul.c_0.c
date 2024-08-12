static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    VAR4->VAR2 = VAR2;
    FUN2(&VAR4->VAR12, VAR2);
    VAR4->VAR12.VAR13[0][VAR14 + VAR15 / 4] = VAR4->VAR12.VAR16[0][VAR14 + VAR15 / 4] = VAR17##VAR15##VAR14;
    FUN3(0, 0) FUN3(4, 0) FUN3(8, 0) FUN3(12, 0) FUN3(0, 4) FUN3(4, 4) FUN3(8, 4) FUN3(12, 4) FUN3(0, 8) FUN3(4, 8) FUN3(8, 8) FUN3(12, 8) FUN3(0, 12) FUN3(4, 12) FUN3(8, 12) FUN3(12, 12) VAR4->VAR12.VAR18[0][VAR14 / 4 + VAR15 / 8] = VAR4->VAR12.VAR19[0][VAR14 / 4 + VAR15 / 8] = VAR20##VAR15##VAR14;
    FUN4(0, 0) FUN4(8, 0) FUN4(0, 8) FUN4(8, 8) VAR11 = VAR4->VAR21 = 5;
    VAR4->VAR22 = VAR2->VAR23;
    VAR4->VAR24 = 1;
    VAR4->VAR25 = 1;
    VAR6 = VAR4->VAR2->VAR6;
    VAR7 = VAR4->VAR2->VAR7;
    VAR4->VAR26 = FUN5(VAR6 * VAR7 * sizeof(VAR27));
    VAR4->VAR28 = FUN5(VAR6 * VAR7 * sizeof(VAR27));
    VAR4->VAR29 = (VAR4->VAR2->VAR30 & VAR31) ? 2 : 4;
    VAR4->VAR32 = (VAR4->VAR2->VAR30 & VAR33) ? 1 : 0;
    for (VAR10 = 0; VAR10 < 3; VAR10++)
    {
        int VAR34 = VAR4->VAR2->VAR6;
        int VAR35 = VAR4->VAR2->VAR7;
        if (VAR10)
        {
            VAR34 >>= VAR4->VAR24;
            VAR35 >>= VAR4->VAR25;
        }
        VAR4->VAR36[VAR10].VAR6 = VAR34;
        VAR4->VAR36[VAR10].VAR7 = VAR35;
        for (VAR8 = VAR4->VAR21 - 1; VAR8 >= 0; VAR8--)
        {
            for (VAR9 = VAR8 ? 1 : 0; VAR9 < 4; VAR9++)
            {
                VAR37 *VAR38 = &VAR4->VAR36[VAR10].VAR39[VAR8][VAR9];
                VAR38->VAR40 = VAR4->VAR26;
                VAR38->VAR8 = VAR8;
                VAR38->VAR41 = VAR4->VAR36[VAR10].VAR6 << (VAR4->VAR21 - VAR8);
                VAR38->VAR6 = (VAR34 + !(VAR9 & 1)) >> 1;
                VAR38->VAR7 = (VAR35 + !(VAR9 > 1)) >> 1;
                if (VAR9 & 1)
                    VAR38->VAR40 += (VAR34 + 1) >> 1;
                if (VAR9 > 1)
                    VAR38->VAR40 += VAR38->VAR41 >> 1;
                if (VAR8)
                    VAR38->VAR42 = &VAR4->VAR36[VAR10].VAR39[VAR8 - 1][VAR9];
            }
            VAR34 = (VAR34 + 1) >> 1;
            VAR35 = (VAR35 + 1) >> 1;
        }
    }
    FUN6(VAR4);
    VAR4->VAR2->FUN7(VAR4->VAR2, &VAR4->VAR43);
    return 0;
}