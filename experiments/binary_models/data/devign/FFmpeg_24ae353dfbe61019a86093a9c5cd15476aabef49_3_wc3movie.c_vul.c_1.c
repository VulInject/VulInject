static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    unsigned int VAR10;
    unsigned int VAR11;
    int VAR12 = 0;
    int VAR13 = 0;
    unsigned char VAR14[1024];
    unsigned int VAR15;
    int VAR16;
    unsigned char VAR17, VAR18, VAR19;
    int VAR20;
    while (!VAR12)
    {
        VAR10 = FUN2(VAR9);
        VAR11 = (FUN3(VAR9) + 1) & (~1);
        if (FUN4(VAR9))
            return FUN5(VAR21);
        switch (VAR10)
        {
        case VAR22:
            break;
        case VAR23:
            VAR15 = FUN2(VAR9);
            if (VAR15 >= VAR6->VAR24)
                return VAR25;
            VAR20 = VAR15 * VAR26 * 3;
            for (VAR16 = 0; VAR16 < VAR26; VAR16++)
            {
                VAR17 = VAR6->VAR27[VAR20 + VAR16 * 3 + 0];
                VAR18 = VAR6->VAR27[VAR20 + VAR16 * 3 + 1];
                VAR19 = VAR6->VAR27[VAR20 + VAR16 * 3 + 2];
                VAR6->VAR28.VAR29[VAR16] = (VAR17 << 16) | (VAR18 << 8) | (VAR19);
            }
            VAR6->VAR28.VAR30 = 1;
            break;
        case VAR31:
            VAR13 = FUN6(VAR9, VAR4, VAR11);
            VAR4->VAR32 = VAR6->VAR33;
            VAR4->VAR34 = VAR6->VAR34;
            VAR12 = 1;
            break;
        case VAR35:
            FUN7(VAR9, VAR11, VAR36);
            if ((unsigned)VAR11 > sizeof(VAR14) || (VAR13 = FUN8(VAR9, VAR14, VAR11)) != VAR11)
                VAR13 = FUN5(VAR21);
            else
            {
                int VAR16 = 0;
                FUN9(VAR2, VAR37, "");
                FUN9(VAR2, VAR37, "", &VAR14[VAR16 + 1]);
                VAR16 += VAR14[VAR16] + 1;
                FUN9(VAR2, VAR37, "", &VAR14[VAR16 + 1]);
                VAR16 += VAR14[VAR16] + 1;
                FUN9(VAR2, VAR37, "", &VAR14[VAR16 + 1]);
            }
            break;
        case VAR38:
            VAR13 = FUN6(VAR9, VAR4, VAR11);
            VAR4->VAR32 = VAR6->VAR39;
            VAR4->VAR34 = VAR6->VAR34;
            VAR6->VAR34++;
            VAR12 = 1;
            break;
        default:
            FUN9(VAR2, VAR40, "", (VAR41)VAR10, (VAR41)(VAR10 >> 8), (VAR41)(VAR10 >> 16), (VAR41)(VAR10 >> 24), (VAR41)VAR10, (VAR41)(VAR10 >> 8), (VAR41)(VAR10 >> 16), (VAR41)(VAR10 >> 24));
            VAR13 = VAR25;
            VAR12 = 1;
            break;
        }
    }
    return VAR13;
}