static void FUN1(const char *VAR1)
{
    void *VAR2;
    void (*VAR3)(void);
    VAR2 = dlopen(VAR1, VAR4);
    if (!VAR2)
    {
        fprintf(VAR5, "", VAR1, FUN2());
    }
    VAR3 = FUN3(VAR2, "");
    if (!VAR3)
    {
        fprintf(VAR5, "", VAR1);
        FUN4(VAR2);
    }
    FUN5();