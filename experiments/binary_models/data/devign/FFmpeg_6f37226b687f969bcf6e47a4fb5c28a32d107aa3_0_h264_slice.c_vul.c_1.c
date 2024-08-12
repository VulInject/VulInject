static int FUN1(VAR1 *VAR2, int VAR3)
{
    const VAR4 *VAR5 = VAR2->VAR6;
    int VAR7 = FUN2(FUN3(VAR3) + 32, 32);
    FUN4(&VAR2->VAR8, &VAR2->VAR9, 16 * 6 * VAR7);
    FUN4(&VAR2->VAR10, &VAR2->VAR11, VAR7 * 2 * 21);
    FUN4(&VAR2->VAR12[0], &VAR2->VAR13[0], VAR5->VAR14 * 16 * 3 * sizeof(VAR15) * 2);
    FUN4(&VAR2->VAR12[1], &VAR2->VAR13[1], VAR5->VAR14 * 16 * 3 * sizeof(VAR15) * 2);
    if (!VAR2->VAR8 || !VAR2->VAR10 || !VAR2->VAR12[0] || !VAR2->VAR12[1])
    {
        FUN5(&VAR2->VAR8);
        FUN5(&VAR2->VAR10);
        FUN5(&VAR2->VAR12[0]);
        FUN5(&VAR2->VAR12[1]);
        VAR2->VAR9 = 0;
        VAR2->VAR11 = 0;
        VAR2->VAR13[0] = 0;
        VAR2->VAR13[1] = 0;
        return FUN6(VAR16);
    }
    return 0;
}