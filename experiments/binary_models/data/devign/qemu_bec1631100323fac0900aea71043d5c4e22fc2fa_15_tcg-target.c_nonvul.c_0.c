static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, const int *VAR5)
{
    TCGArg VAR6[6];
    VAR7 *VAR8, *VAR9;
    memcpy(VAR6, VAR4 + 1, 5 * sizeof(VAR3));
    if (VAR4[0] == VAR4[1] || VAR4[0] == VAR4[2] || (!VAR5[3] && VAR4[0] == VAR4[3]) || (!VAR5[4] && VAR4[0] == VAR4[4]))
    {
        VAR8 = FUN2();
        VAR9 = FUN2();
        VAR6[5] = FUN3(VAR8);
        FUN4(VAR2, VAR6, VAR5 + 1, 1);
        FUN5(VAR2, VAR10, VAR4[0], 0);
        FUN6(VAR2, VAR11, VAR9, 1);
        FUN7(VAR2, VAR8, VAR2->VAR12);
        FUN5(VAR2, VAR10, VAR4[0], 1);
        FUN7(VAR2, VAR9, VAR2->VAR12);
    }
    else
    {
        FUN5(VAR2, VAR10, VAR4[0], 0);
        VAR9 = FUN2();
        VAR6[4] = FUN8(VAR6[4]);
        VAR6[5] = FUN3(VAR9);
        FUN4(VAR2, VAR6, VAR5 + 1, 1);
        FUN9(VAR2, VAR13, VAR4[0], 1, 0);
        FUN7(VAR2, VAR9, VAR2->VAR12);
    }
}