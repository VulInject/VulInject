static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    if (VAR4->VAR5)
    {
        FUN3(VAR4->VAR5);
    }
    FUN4(VAR2);
    if (VAR4->VAR6[0])
        FUN5(VAR4->VAR6, VAR4->VAR7, VAR4->VAR8);
    FUN6(VAR4, 0);
    FUN7(VAR4, 0);
    close(VAR4->VAR8);