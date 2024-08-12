static void FUN1(gconstpointer VAR1)
{
    VAR2 *VAR3;
    const char *VAR4 = VAR1;
    char *VAR5;
    VAR5 = FUN2("", VAR4);
    VAR3 = FUN3(VAR5);
    if (VAR3)
    {
        FUN4(VAR3);
    }
    FUN5(VAR5);
}