static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = FUN2(VAR3);
    if (!FUN3(VAR3))
    {
        FUN4(VAR3, VAR3->VAR6);
        return;
    }
    FUN5(VAR3->VAR7, VAR3->VAR8, VAR3->VAR9);
    FUN6(VAR5, VAR3->VAR7);
    FUN7(VAR3->VAR8);
    VAR3->VAR8 = NULL;
}