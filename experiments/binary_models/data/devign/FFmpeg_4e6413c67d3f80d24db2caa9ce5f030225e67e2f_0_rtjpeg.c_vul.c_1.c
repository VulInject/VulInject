int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7)
{
    GetBitContext VAR8;
    int VAR9 = VAR2->VAR9 / 16, VAR10 = VAR2->VAR10 / 16;
    int VAR11, VAR12;
    VAR5 *VAR13 = VAR4->VAR14[0], *VAR15 = VAR4->VAR14[0] + 8 * VAR4->VAR16[0];
    VAR5 *VAR17 = VAR4->VAR14[1], *VAR18 = VAR4->VAR14[2];
    FUN2(&VAR8, VAR6, VAR7 * 8);
    for (VAR12 = 0; VAR12 < VAR10; VAR12++)
    {
        for (VAR11 = 0; VAR11 < VAR9; VAR11++)
        {
            VAR19 *VAR20 = VAR2->VAR20;
            if (FUN3(&VAR8, VAR20, VAR2->VAR21, VAR2->VAR22) > 0)
                VAR2->VAR23->FUN4(VAR13, VAR4->VAR16[0], VAR20);
            VAR13 += 8;
            if (FUN3(&VAR8, VAR20, VAR2->VAR21, VAR2->VAR22) > 0)
                VAR2->VAR23->FUN4(VAR13, VAR4->VAR16[0], VAR20);
            VAR13 += 8;
            if (FUN3(&VAR8, VAR20, VAR2->VAR21, VAR2->VAR22) > 0)
                VAR2->VAR23->FUN4(VAR15, VAR4->VAR16[0], VAR20);
            VAR15 += 8;
            if (FUN3(&VAR8, VAR20, VAR2->VAR21, VAR2->VAR22) > 0)
                VAR2->VAR23->FUN4(VAR15, VAR4->VAR16[0], VAR20);
            VAR15 += 8;
            if (FUN3(&VAR8, VAR20, VAR2->VAR21, VAR2->VAR24) > 0)
                VAR2->VAR23->FUN4(VAR17, VAR4->VAR16[1], VAR20);
            VAR17 += 8;
            if (FUN3(&VAR8, VAR20, VAR2->VAR21, VAR2->VAR24) > 0)
                VAR2->VAR23->FUN4(VAR18, VAR4->VAR16[2], VAR20);
            VAR18 += 8;
        }
        VAR13 += 2 * 8 * (VAR4->VAR16[0] - VAR9);
        VAR15 += 2 * 8 * (VAR4->VAR16[0] - VAR9);
        VAR17 += 8 * (VAR4->VAR16[1] - VAR9);
        VAR18 += 8 * (VAR4->VAR16[2] - VAR9);
    }
    return FUN5(&VAR8) / 8;
}