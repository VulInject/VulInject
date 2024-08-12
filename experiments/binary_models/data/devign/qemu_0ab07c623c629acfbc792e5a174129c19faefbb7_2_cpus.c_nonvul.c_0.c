static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4;
    FUN2(&VAR5);
    FUN3(VAR3->VAR6);
    VAR4 = FUN4(VAR3);
    if (VAR4 < 0)
    {
        fprintf(VAR7, "", strerror(-VAR4));
        FUN5(1);
    }
    FUN6(VAR3);
    VAR3->VAR8 = 1;
    FUN7(&VAR9);
    while (!VAR10)
    {
        FUN8(&VAR11, &VAR5, 100);
    }
    while (1)
    {
        if (FUN9(VAR3))
        {
            FUN10(VAR3);
        }
        FUN11(VAR3);
    }
    return NULL;
}