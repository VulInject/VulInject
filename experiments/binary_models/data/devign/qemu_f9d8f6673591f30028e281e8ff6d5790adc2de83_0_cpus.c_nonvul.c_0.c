static void *FUN1(void *VAR1)
{
    fprintf(VAR2, "");
    FUN2(1);
    VAR3 *VAR4 = VAR1;
    sigset_t VAR5;
    int VAR6;
    FUN3();
    FUN4(VAR4->VAR7);
    VAR4->VAR8 = FUN5();
    VAR4->VAR9 = 1;
    FUN6(&VAR5);
    FUN7(&VAR5, VAR10);
    VAR4->VAR11 = true;
    FUN8(&VAR12);
    VAR13 = VAR4;
    while (1)
    {
        VAR13 = NULL;
        FUN9();
        do
        {
            int VAR14;
            VAR6 = FUN10(&VAR5, &VAR14);
        } while (VAR6 == -1 && (VAR15 == VAR16 || VAR15 == VAR17));
        if (VAR6 == -1)
        {
            FUN11("");
            FUN2(1);
        }
        FUN3();
        VAR13 = VAR4;
        FUN12(VAR4);
    }
    return NULL;
}