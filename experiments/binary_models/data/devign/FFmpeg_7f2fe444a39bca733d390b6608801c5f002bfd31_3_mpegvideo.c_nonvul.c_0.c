void FUN1(VAR1 *VAR2)
{
    if (VAR2->VAR3 != VAR4 && !VAR2->VAR5)
    {
        if (VAR2->VAR6 == NULL || VAR2->VAR6->VAR7->VAR8 != VAR9 || VAR2->VAR10 == 500)
        {
            FUN2(VAR2->VAR11[0], VAR2->VAR12, VAR2->VAR13 * 16, VAR2->VAR14 * 16, VAR15);
            FUN2(VAR2->VAR11[1], VAR2->VAR12 / 2, VAR2->VAR13 * 8, VAR2->VAR14 * 8, VAR15 / 2);
            FUN2(VAR2->VAR11[2], VAR2->VAR12 / 2, VAR2->VAR13 * 8, VAR2->VAR14 * 8, VAR15 / 2);
        }
        else
        {
            FUN2(VAR2->VAR11[0], VAR2->VAR12, VAR2->VAR16, VAR2->VAR17, VAR15);
            FUN2(VAR2->VAR11[1], VAR2->VAR12 / 2, VAR2->VAR16 / 2, VAR2->VAR17 / 2, VAR15 / 2);
            FUN2(VAR2->VAR11[2], VAR2->VAR12 / 2, VAR2->VAR16 / 2, VAR2->VAR17 / 2, VAR15 / 2);
        }
    }
    FUN3();
    if (VAR2->VAR3 != VAR4)
    {
        VAR2->VAR18 = VAR2->VAR3;
        VAR2->VAR19 = VAR2->VAR20;
        VAR2->VAR21 = VAR2->VAR22;
        VAR2->VAR23++;
        if (VAR2->VAR23 > 2)
            VAR2->VAR23 = 2;
    }
}