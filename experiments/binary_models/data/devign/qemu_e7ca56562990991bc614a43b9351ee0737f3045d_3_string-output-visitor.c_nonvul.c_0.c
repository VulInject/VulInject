static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    if (VAR4->VAR5)
    {
        FUN3(VAR4->VAR5, true);
    }
    FUN4(VAR4->VAR6, VAR7, NULL);
    FUN5(VAR4->VAR6);
    FUN6(VAR4);
}