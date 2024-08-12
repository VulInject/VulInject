static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8 = &VAR6->VAR8;
    static bool VAR9;
    VAR4->VAR10 = VAR8;
    FUN4(VAR4, &VAR11);
    VAR8->VAR12 = 0;
    if (FUN5() && !VAR9)
    {
        VAR9 = true;
        FUN6();
    }
}