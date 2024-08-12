static void FUN1(void)
{
    unsigned long *VAR1 = VAR2;
    FUN2(&VAR2, NULL);
    if (VAR1)
    {
        FUN3();
        FUN4();
        FUN5(VAR1);
    }
    FUN6();
    if (VAR3.VAR4)
    {
        FUN7(VAR3.VAR4);
        FUN5(VAR3.VAR5);
        FUN5(VAR3.VAR6);
        VAR3.VAR4 = NULL;
        VAR3.VAR5 = NULL;
        VAR3.VAR6 = NULL;
    }
    FUN8();
}