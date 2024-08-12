static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = NULL;
    VAR4 *VAR5 = VAR1;
    FUN2();
    FUN3();
    FUN4(&VAR3);
    if (VAR3)
    {
        FUN5(VAR3);
        VAR3 = NULL;
        VAR6 = false;
    }
    FUN6();
    FUN2();
    FUN7();
    if (VAR6)
    {
        FUN8();
    }
    else
    {
        FUN9(VAR7);
    }
    FUN10(VAR5->VAR8);
    FUN11(VAR5);
}