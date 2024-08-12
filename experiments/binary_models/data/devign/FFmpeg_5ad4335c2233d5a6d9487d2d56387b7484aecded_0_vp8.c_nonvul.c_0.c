void FUN1(VAR1 *VAR2, VAR3 *VAR4[3], VAR5 *VAR6, int VAR7, int VAR8)
{
    int VAR9 = VAR7 << 4, VAR10 = VAR8 << 4;
    int VAR11 = 16 * VAR2->VAR12, VAR13 = 16 * VAR2->VAR14;
    VAR15 *VAR16 = VAR2->VAR17[VAR6->VAR18];
    VAR19 *VAR20 = VAR6->VAR20;
    switch (VAR6->VAR21)
    {
    case VAR22:
        FUN2(VAR2, VAR4, VAR16, VAR9, VAR10, 0, 0, 16, 16, VAR11, VAR13, &VAR6->VAR23);
        break;
    case VAR24:
    {
        int VAR25, VAR26;
        VP56mv VAR27;
        for (VAR26 = 0; VAR26 < 4; VAR26++)
        {
            for (VAR25 = 0; VAR25 < 4; VAR25++)
            {
                FUN3(VAR2, VAR4[0] + 4 * VAR26 * VAR2->VAR28 + VAR25 * 4, VAR16->VAR29[0], &VAR20[4 * VAR26 + VAR25], 4 * VAR25 + VAR9, 4 * VAR26 + VAR10, 4, 4, VAR11, VAR13, VAR2->VAR28, VAR2->VAR30[2]);
            }
        }
        VAR9 >>= 1;
        VAR10 >>= 1;
        VAR11 >>= 1;
        VAR13 >>= 1;
        for (VAR26 = 0; VAR26 < 2; VAR26++)
        {
            for (VAR25 = 0; VAR25 < 2; VAR25++)
            {
                VAR27.VAR25 = VAR6->VAR20[2 * VAR26 * 4 + 2 * VAR25].VAR25 + VAR6->VAR20[2 * VAR26 * 4 + 2 * VAR25 + 1].VAR25 + VAR6->VAR20[(2 * VAR26 + 1) * 4 + 2 * VAR25].VAR25 + VAR6->VAR20[(2 * VAR26 + 1) * 4 + 2 * VAR25 + 1].VAR25;
                VAR27.VAR26 = VAR6->VAR20[2 * VAR26 * 4 + 2 * VAR25].VAR26 + VAR6->VAR20[2 * VAR26 * 4 + 2 * VAR25 + 1].VAR26 + VAR6->VAR20[(2 * VAR26 + 1) * 4 + 2 * VAR25].VAR26 + VAR6->VAR20[(2 * VAR26 + 1) * 4 + 2 * VAR25 + 1].VAR26;
                VAR27.VAR25 = (VAR27.VAR25 + 2 + (VAR27.VAR25 >> (VAR31 - 1))) >> 2;
                VAR27.VAR26 = (VAR27.VAR26 + 2 + (VAR27.VAR26 >> (VAR31 - 1))) >> 2;
                if (VAR2->VAR32 == 3)
                {
                    VAR27.VAR25 &= ~7;
                    VAR27.VAR26 &= ~7;
                }
                FUN4(VAR2, VAR4[1] + 4 * VAR26 * VAR2->VAR33 + VAR25 * 4, VAR4[2] + 4 * VAR26 * VAR2->VAR33 + VAR25 * 4, VAR16->VAR29[1], VAR16->VAR29[2], &VAR27, 4 * VAR25 + VAR9, 4 * VAR26 + VAR10, 4, 4, VAR11, VAR13, VAR2->VAR33, VAR2->VAR30[2]);
            }
        }
        break;
    }
    case VAR34:
        FUN2(VAR2, VAR4, VAR16, VAR9, VAR10, 0, 0, 16, 8, VAR11, VAR13, &VAR20[0]);
        FUN2(VAR2, VAR4, VAR16, VAR9, VAR10, 0, 8, 16, 8, VAR11, VAR13, &VAR20[1]);
        break;
    case VAR35:
        FUN2(VAR2, VAR4, VAR16, VAR9, VAR10, 0, 0, 8, 16, VAR11, VAR13, &VAR20[0]);
        FUN2(VAR2, VAR4, VAR16, VAR9, VAR10, 8, 0, 8, 16, VAR11, VAR13, &VAR20[1]);
        break;
    case VAR36:
        FUN2(VAR2, VAR4, VAR16, VAR9, VAR10, 0, 0, 8, 8, VAR11, VAR13, &VAR20[0]);
        FUN2(VAR2, VAR4, VAR16, VAR9, VAR10, 8, 0, 8, 8, VAR11, VAR13, &VAR20[1]);
        FUN2(VAR2, VAR4, VAR16, VAR9, VAR10, 0, 8, 8, 8, VAR11, VAR13, &VAR20[2]);
        FUN2(VAR2, VAR4, VAR16, VAR9, VAR10, 8, 8, 8, 8, VAR11, VAR13, &VAR20[3]);
        break;
    }
}