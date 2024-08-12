static void FUN1(void *VAR1)
{
    struct VAR2 *VAR2 = VAR1;
    VAR3 *VAR4;
    FUN2();
    while ((VAR4 = FUN3(&VAR5)))
    {
        FUN4(&VAR5, VAR4, VAR6);
        FUN5(VAR4, NULL);
    }
    FUN6(VAR2->VAR7);
    FUN7(VAR2);
}