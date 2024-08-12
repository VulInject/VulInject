static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    FUN3(VAR4);
    FUN4(&VAR4->VAR2, NULL);
    FUN5(VAR4);
    if (VAR4->VAR5.VAR6)
    {
        FUN6(VAR4->VAR5.VAR6);
    }
    FUN7(VAR4);
    FUN8(VAR4);
}