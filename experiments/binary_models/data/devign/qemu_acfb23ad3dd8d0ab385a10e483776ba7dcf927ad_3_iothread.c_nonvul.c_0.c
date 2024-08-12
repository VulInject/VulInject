static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    bool VAR4;
    FUN2(&VAR3->VAR5);
    VAR3->VAR6 = FUN3();
    FUN4(&VAR3->VAR7);
    FUN5(&VAR3->VAR5);
    while (!VAR3->VAR8)
    {
        FUN6(VAR3->VAR9);
        VAR4 = true;
        while (!VAR3->VAR8 && FUN7(VAR3->VAR9, VAR4))
        {
            VAR4 = false;
        }
        FUN8(VAR3->VAR9);
    }
    return NULL;
}