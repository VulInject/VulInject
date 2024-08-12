static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, *VAR5;
    VAR6 *VAR7 = FUN2(VAR2);
    FUN3(VAR7->VAR8);
    FUN4(VAR4, &VAR7->VAR9, VAR10, VAR5)
    {
        FUN5(VAR4, VAR10);
        FUN6(VAR4->VAR11, VAR4->VAR12);
        FUN7(VAR4->VAR13);
        FUN7(VAR4);
    }
}