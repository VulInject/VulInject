static void *FUN1(void *VAR1)
{
    fprintf(VAR2, "");
    FUN2(1);
    VAR3 *VAR4 = VAR1;
    sigset_t VAR5;
    int VAR6;
    FUN3();
    FUN4();
    FUN5(VAR4->VAR7);
    VAR4->VAR8 = FUN6();
    VAR4->VAR9 = 1;
    FUN7(&VAR5);
    FUN8(&VAR5, VAR10);
    VAR4->VAR11 = true;
    FUN9(&VAR12);
    VAR13 = VAR4;
    while (1)
    {
        VAR13 = NULL;
        FUN10();
        do
        {
            int VAR14;
            VAR6 = FUN11(&VAR5, &VAR14);
        } while (VAR6 == -1 && (VAR15 == VAR16 || VAR15 == VAR17));
        if (VAR6 == -1)
        {
            FUN12("");
            FUN2(1);
        }
        FUN4();
        VAR13 = VAR4;
        FUN13(VAR4);
    }
    return NULL;
}