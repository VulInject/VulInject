static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7->VAR8;
    VAR3 *VAR9 = FUN2(VAR4, ~0);
    int VAR10;
    VAR9->VAR11 = VAR6->VAR11;
    VAR9->VAR12 = VAR6->VAR12;
    VAR9->VAR13[0] += VAR6->VAR14 * VAR9->VAR15[0];
    VAR9->VAR13[0] += (VAR6->VAR16 * VAR6->VAR17) >> 3;
    if (!(VAR18[VAR2->VAR19].VAR20 & VAR21))
    {
        for (VAR10 = 1; VAR10 < 3; VAR10++)
        {
            if (VAR9->VAR13[VAR10])
            {
                VAR9->VAR13[VAR10] += (VAR6->VAR14 >> VAR6->VAR22) * VAR9->VAR15[VAR10];
                VAR9->VAR13[VAR10] += ((VAR6->VAR16 * VAR6->VAR17) >> 3) >> VAR6->VAR23;
            }
        }
    }
    if (VAR9->VAR13[3])
    {
        VAR9->VAR13[3] += VAR6->VAR14 * VAR9->VAR15[3];
        VAR9->VAR13[3] += (VAR6->VAR16 * VAR6->VAR17) >> 3;
    }
    FUN3(VAR2->VAR7->VAR24[0], VAR9);
}