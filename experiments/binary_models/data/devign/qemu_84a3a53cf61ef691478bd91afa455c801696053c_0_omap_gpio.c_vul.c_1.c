static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    struct VAR5 *VAR6 = FUN3(VAR4);
    if (!VAR6->VAR7)
    {
        FUN4("");
    }
    FUN5(VAR4, VAR8, 16);
    FUN6(VAR4, VAR6->VAR9.VAR10, 16);
    FUN7(VAR2, &VAR6->VAR9.VAR11);
    FUN8(&VAR6->VAR12, FUN9(VAR6), &VAR13, &VAR6->VAR9, "", 0x1000);
    FUN10(VAR2, &VAR6->VAR12);
    return 0;
}