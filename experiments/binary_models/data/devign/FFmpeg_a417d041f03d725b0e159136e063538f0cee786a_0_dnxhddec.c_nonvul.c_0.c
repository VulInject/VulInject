static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9, VAR10;
    int VAR11, VAR12, VAR13;
    const VAR14 *VAR15;
    if (VAR5 & 2)
    {
        VAR12 = 1 + (VAR5 & 1);
        VAR15 = VAR2->VAR16->VAR17;
    }
    else
    {
        VAR12 = 0;
        VAR15 = VAR2->VAR16->VAR18;
    }
    VAR2->VAR19[VAR12] += FUN2(VAR2);
    VAR4[0] = VAR2->VAR19[VAR12];
    for (VAR7 = 1;; VAR7++)
    {
        VAR9 = FUN3(&VAR2->VAR20, VAR2->VAR21.VAR22, VAR23, 2);
        VAR11 = VAR2->VAR16->VAR24[VAR9];
        if (!VAR11)
        {
            return;
        }
        VAR13 = FUN4(&VAR2->VAR20, 1);
        if (VAR2->VAR16->VAR25[VAR9])
        {
            VAR11 += FUN5(&VAR2->VAR20, VAR2->VAR16->VAR26) << 6;
        }
        if (VAR2->VAR16->VAR27[VAR9])
        {
            VAR10 = FUN3(&VAR2->VAR20, VAR2->VAR28.VAR22, VAR23, 2);
            VAR7 += VAR2->VAR16->VAR29[VAR10];
        }
        if (VAR7 > 63)
        {
            FUN6(VAR2->VAR30, VAR31, "", VAR5, VAR7);
            return;
        }
        VAR8 = VAR2->VAR32.VAR33[VAR7];
        VAR11 = (2 * VAR11 + 1) * VAR6 * VAR15[VAR7];
        if (VAR15[VAR7] != 32)
            VAR11 += 32;
        VAR11 >>= 6;
        VAR11 = (VAR11 ^ VAR13) - VAR13;
        VAR4[VAR8] = VAR11;
    }
}