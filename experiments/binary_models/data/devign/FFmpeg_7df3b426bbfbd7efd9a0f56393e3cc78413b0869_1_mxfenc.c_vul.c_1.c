static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    uint64_t VAR8 = FUN2(VAR7);
    int VAR9;
    FUN3(VAR7, VAR10, 16);
    FUN4(VAR7, 28 + 12 * VAR4->VAR11);
    if (VAR4->VAR12)
        FUN5(VAR7, 1);
    else
        FUN5(VAR7, 0);
    FUN6(VAR7, 0);
    for (VAR9 = 0; VAR9 < VAR4->VAR11; VAR9++)
    {
        FUN5(VAR7, 1);
        FUN6(VAR7, VAR4->VAR13[VAR9]);
    }
    FUN5(VAR7, 0);
    FUN6(VAR7, VAR4->VAR14);
    FUN5(VAR7, FUN2(VAR7) - VAR8 + 4);
}