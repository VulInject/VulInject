static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    static int VAR7;
    VAR4->VAR8 = &VAR6->VAR9;
    FUN4(VAR4, &VAR10);
    FUN5(VAR6);
    if (FUN6() && !VAR7)
    {
        VAR7 = 1;
        FUN7();
    }
}