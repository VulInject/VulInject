static void FUN1(VAR1 *VAR2, DiracArith VAR3[8], VAR4 *VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9;
    VAR5->VAR10 = FUN2(VAR5, VAR6, VAR7, VAR8, VAR11);
    VAR5->VAR10 ^= FUN3(VAR3, VAR12);
    if (VAR2->VAR13 == 2)
    {
        VAR5->VAR10 |= FUN2(VAR5, VAR6, VAR7, VAR8, VAR14);
        VAR5->VAR10 ^= FUN3(VAR3, VAR15) << 1;
    }
    if (!VAR5->VAR10)
    {
        FUN4(VAR5, VAR6, VAR7, VAR8);
        for (VAR9 = 0; VAR9 < 3; VAR9++)
            VAR5->VAR16.VAR17[VAR9] += FUN5(VAR3 + 1 + VAR9, VAR18, VAR19);
        return;
    }
    if (VAR2->VAR20)
    {
        VAR5->VAR10 |= FUN2(VAR5, VAR6, VAR7, VAR8, VAR21);
        VAR5->VAR10 ^= FUN3(VAR3, VAR22) << 2;
    }
    for (VAR9 = 0; VAR9 < VAR2->VAR13; VAR9++)
        if (VAR5->VAR10 & (VAR9 + 1))
        {
            if (VAR5->VAR10 & VAR21)
            {
                FUN6(VAR2, VAR5, VAR7, VAR8, VAR9);
            }
            else
            {
                FUN7(VAR5, VAR6, VAR7, VAR8, VAR9);
                VAR5->VAR16.VAR23[VAR9][0] += FUN5(VAR3 + 4 + 2 * VAR9, VAR24, VAR25);
                VAR5->VAR16.VAR23[VAR9][1] += FUN5(VAR3 + 5 + 2 * VAR9, VAR24, VAR25);
            }
        }
}