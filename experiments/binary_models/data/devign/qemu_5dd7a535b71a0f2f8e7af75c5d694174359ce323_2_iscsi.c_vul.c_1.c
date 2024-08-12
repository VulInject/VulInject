static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    if (FUN2(VAR3->VAR4) > VAR5)
    {
        FUN3("");
        FUN4(VAR3->VAR4);
    }
    if (FUN5(VAR3->VAR4, NULL, NULL, 0, NULL) != 0)
    {
        FUN3("");
        return;
    }
    FUN6(VAR3->VAR6, FUN7(VAR7) + VAR8);
    FUN8(VAR3);
}