static void *FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = VAR1;
    FUN2();
    FUN3(&VAR4);
    while (!FUN4(&VAR5))
    {
        FUN5();
    }
    FUN6();
    while (!FUN4(&VAR6))
    {
        VAR3->VAR7 = FUN7(VAR3->VAR7);
        VAR3->FUN8(VAR3);
    }
    FUN9();
    FUN10();
    return NULL;
}