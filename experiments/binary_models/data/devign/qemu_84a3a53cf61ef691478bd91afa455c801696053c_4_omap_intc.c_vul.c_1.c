static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    struct VAR5 *VAR6 = FUN3(VAR4);
    if (!VAR6->VAR7)
    {
        FUN4("");
    }
    if (!VAR6->VAR8)
    {
        FUN4("");
    }
    VAR6->VAR9 = 1;
    VAR6->VAR10 = 3;
    FUN5(VAR2, &VAR6->VAR11[0]);
    FUN5(VAR2, &VAR6->VAR11[1]);
    FUN6(VAR4, VAR12, VAR6->VAR10 * 32);
    FUN7(&VAR6->VAR13, FUN8(VAR6), &VAR14, VAR6, "", 0x1000);
    FUN9(VAR2, &VAR6->VAR13);
    return 0;
}