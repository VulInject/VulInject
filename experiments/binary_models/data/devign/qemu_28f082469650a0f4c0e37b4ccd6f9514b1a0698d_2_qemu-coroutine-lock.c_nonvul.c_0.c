static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    FUN2();
    while ((VAR5 = FUN3(&VAR3->VAR6)))
    {
        FUN4(&VAR3->VAR6, VAR5, VAR7);
        FUN5(VAR5, NULL);
    }
    FUN6(VAR3->VAR8);
    FUN7(VAR2, VAR3);
}