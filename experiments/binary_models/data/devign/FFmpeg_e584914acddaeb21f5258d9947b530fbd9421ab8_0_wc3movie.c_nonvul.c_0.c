static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    unsigned int VAR10;
    unsigned int VAR11;
    int VAR12 = 0;
    int VAR13 = 0;
    unsigned char VAR14[VAR15];
    unsigned char VAR16[1024];
    unsigned int VAR17;
    int VAR18;
    unsigned char VAR19, VAR20, VAR21;
    int VAR22;
    while (!VAR12)
    {
        if ((VAR13 = FUN2(VAR9, VAR14, VAR15)) != VAR15)
            return FUN3(VAR23);
        VAR10 = FUN4(&VAR14[0]);
        VAR11 = (FUN5(&VAR14[4]) + 1) & (~1);
        switch (VAR10)
        {
        case VAR24:
            break;
        case VAR25:
            if ((VAR13 = FUN2(VAR9, VAR14, 4)) != 4)
                return FUN3(VAR23);
            VAR17 = FUN4(&VAR14[0]);
            if (VAR17 >= VAR6->VAR26)
                return VAR27;
            VAR22 = VAR17 * VAR28 * 3;
            for (VAR18 = 0; VAR18 < VAR28; VAR18++)
            {
                VAR19 = VAR6->VAR29[VAR22 + VAR18 * 3 + 0];
                VAR20 = VAR6->VAR29[VAR22 + VAR18 * 3 + 1];
                VAR21 = VAR6->VAR29[VAR22 + VAR18 * 3 + 2];
                VAR6->VAR30.VAR31[VAR18] = (VAR19 << 16) | (VAR20 << 8) | (VAR21);
            }
            VAR6->VAR30.VAR32 = 1;
            break;
        case VAR33:
            VAR13 = FUN6(VAR9, VAR4, VAR11);
            VAR4->VAR34 = VAR6->VAR35;
            VAR4->VAR36 = VAR6->VAR36;
            if (VAR13 != VAR11)
                VAR13 = FUN3(VAR23);
            VAR12 = 1;
            break;
        case VAR37:
            FUN7(VAR9, VAR11, VAR38);
            if ((unsigned)VAR11 > sizeof(VAR16) || (VAR13 = FUN2(VAR9, VAR16, VAR11)) != VAR11)
                VAR13 = FUN3(VAR23);
            else
            {
                int VAR18 = 0;
                FUN8(VAR2, VAR39, "");
                FUN8(VAR2, VAR39, "", &VAR16[VAR18 + 1]);
                VAR18 += VAR16[VAR18] + 1;
                FUN8(VAR2, VAR39, "", &VAR16[VAR18 + 1]);
                VAR18 += VAR16[VAR18] + 1;
                FUN8(VAR2, VAR39, "", &VAR16[VAR18 + 1]);
            }
            break;
        case VAR40:
            VAR13 = FUN6(VAR9, VAR4, VAR11);
            VAR4->VAR34 = VAR6->VAR41;
            VAR4->VAR36 = VAR6->VAR36;
            if (VAR13 != VAR11)
                VAR13 = FUN3(VAR23);
            VAR6->VAR36++;
            VAR12 = 1;
            break;
        default:
            FUN8(VAR2, VAR42, "", VAR14[0], VAR14[1], VAR14[2], VAR14[3], VAR14[0], VAR14[1], VAR14[2], VAR14[3]);
            VAR13 = VAR27;
            VAR12 = 1;
            break;
        }
    }
    return VAR13;
}