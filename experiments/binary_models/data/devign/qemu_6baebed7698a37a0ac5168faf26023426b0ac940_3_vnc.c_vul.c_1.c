static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7;
    VAR8 *VAR9;
    VAR9 = FUN2(VAR2->VAR10) + VAR4 * FUN3(VAR2->VAR10) + VAR3 * FUN4(VAR2->VAR10);
    for (VAR7 = 0; VAR7 < VAR6; VAR7++)
    {
        VAR2->FUN5(VAR2, VAR9, VAR5 * FUN4(VAR2->VAR10));
        VAR9 += FUN3(VAR2->VAR10);
    }
}