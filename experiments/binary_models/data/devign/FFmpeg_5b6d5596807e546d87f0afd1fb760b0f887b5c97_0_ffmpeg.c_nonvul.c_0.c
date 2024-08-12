static void FUN1(const char *VAR1)
{
    if (!strcmp(VAR1, ""))
    {
        VAR2 = 1;
        FUN2(VAR1);
        VAR1 = "";
    }
    VAR3 = FUN3(VAR1);
    VAR4 = FUN4(VAR1, NULL, NULL);
    if (!VAR3 && !VAR4)
    {
        fprintf(VAR5, "", VAR1);
        FUN5(1);
    }
}