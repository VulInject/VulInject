static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    FUN2();
    VAR4 = VAR3;
    FUN3(&VAR3->VAR5);
    VAR3->VAR6 = FUN4();
    FUN5(&VAR3->VAR7);
    FUN6(&VAR3->VAR5);
    while (!FUN7(&VAR3->VAR8))
    {
        FUN8(VAR3->VAR9, true);
        if (FUN7(&VAR3->VAR10))
        {
            VAR11 *VAR12;
            FUN9(VAR3->VAR10);
            VAR3->VAR13 = FUN10(VAR3->VAR10, VAR14);
            VAR12 = VAR3->VAR13;
            FUN11(VAR3->VAR13);
            VAR3->VAR13 = NULL;
            FUN12(VAR12);
            FUN13(VAR3->VAR10);
        }
    }
    FUN14();
    return NULL;
}