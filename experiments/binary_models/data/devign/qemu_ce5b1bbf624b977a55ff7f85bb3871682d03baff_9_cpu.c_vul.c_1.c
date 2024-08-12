static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    VAR7 *VAR8 = &VAR6->VAR8;
    static bool VAR9;
    VAR4->VAR10 = VAR8;
    FUN4(VAR4, &VAR11);
    VAR8->VAR12 = VAR13;
    VAR8->VAR14[31] = 0;
    VAR8->VAR12 = VAR15;
    VAR8->VAR14[31] = 0x03000000;
    FUN5(VAR4, 1);
    if (FUN6() && !VAR9)
    {
        VAR9 = true;
        FUN7();
    }
}