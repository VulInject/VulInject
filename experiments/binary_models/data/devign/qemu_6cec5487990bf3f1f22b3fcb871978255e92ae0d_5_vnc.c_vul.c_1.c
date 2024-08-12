static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    if (VAR4 > FUN2(VAR2->VAR8))
        VAR4 = FUN2(VAR2->VAR8);
    if (VAR5 > FUN3(VAR2->VAR8))
        VAR5 = FUN3(VAR2->VAR8);
    if (VAR4 + VAR6 >= FUN2(VAR2->VAR8))
        VAR6 = FUN2(VAR2->VAR8) - VAR4;
    if (VAR5 + VAR7 >= FUN3(VAR2->VAR8))
        VAR7 = FUN3(VAR2->VAR8) - VAR5;
    int VAR9;
    VAR2->VAR10 = 1;
    if (!VAR3)
    {
        char *VAR11 = VAR2->VAR12 + VAR5 * FUN4(VAR2->VAR8);
        for (VAR9 = 0; VAR9 < VAR7; VAR9++)
        {
            FUN5(VAR2->VAR13[VAR5 + VAR9], (FUN2(VAR2->VAR8) / 16), VAR14);
            memset(VAR11, 42, FUN2(VAR2->VAR8) * VAR2->VAR15);
            VAR11 += FUN4(VAR2->VAR8);
        }
    }
}