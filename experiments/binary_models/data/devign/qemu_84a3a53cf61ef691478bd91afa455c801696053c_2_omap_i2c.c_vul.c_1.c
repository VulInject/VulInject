static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR4);
    if (!VAR6->VAR7)
    {
        FUN4("");
    }
    if (VAR6->VAR8 >= VAR9 && !VAR6->VAR10)
    {
        FUN4("");
    }
    FUN5(VAR2, &VAR6->VAR11);
    FUN5(VAR2, &VAR6->VAR12[0]);
    FUN5(VAR2, &VAR6->VAR12[1]);
    FUN6(&VAR6->VAR13, FUN7(VAR6), &VAR14, VAR6, "", (VAR6->VAR8 < VAR9) ? 0x800 : 0x1000);
    FUN8(VAR2, &VAR6->VAR13);
    VAR6->VAR15 = FUN9(VAR4, NULL);
    return 0;
}