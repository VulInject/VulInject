static void FUN1(VAR1 *VAR2, int64_t VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7;
    int64_t VAR8, VAR9, VAR10[2];
    VAR11 *VAR12;
    int VAR13, VAR14, VAR15;
    GetBitContext VAR16;
    FUN2(VAR2->VAR17, VAR3, VAR18);
    FUN3(VAR2->VAR17, &VAR7, &VAR8);
    if (VAR7 != VAR19)
    {
        FUN4(VAR2, VAR20, "");
        if (!(VAR12 = FUN5(VAR8 + VAR21)))
            FUN6(VAR2->VAR17, VAR12, VAR8);
        FUN7(&VAR16, VAR12, VAR8 * 8);
        VAR8 = FUN8(&VAR16);
        if (VAR8 > VAR22 / 4 || VAR8 > VAR5->VAR23 / 1152)
        {
            FUN4(VAR2, VAR20, "");
            VAR15 = FUN9(&VAR16, 4);
            for (VAR13 = 0; VAR13 < 2; VAR13++)
            {
                VAR9 = FUN8(&VAR16) + VAR5->VAR24;
                VAR10[1 - VAR13] = VAR9;
                FUN10(VAR2->VAR25[0], VAR9, VAR13, 0, 0, VAR26);
                for (; VAR13 < VAR8; VAR13++)
                {
                    VAR14 = FUN11(&VAR16, 1, 33) << 12;
                    VAR14 += FUN9(&VAR16, 12);
                    if (VAR14 & 1)
                        VAR14 = -(VAR14 & ~1);
                    VAR9 = (VAR14 >> 1) + VAR10[0] * 2 - VAR10[1];
                    FUN10(VAR2->VAR25[0], VAR9, VAR13 << VAR15, 0, 0, VAR26);
                    VAR10[1] = VAR10[0];
                    VAR10[0] = VAR9;
                    FUN12(VAR12);