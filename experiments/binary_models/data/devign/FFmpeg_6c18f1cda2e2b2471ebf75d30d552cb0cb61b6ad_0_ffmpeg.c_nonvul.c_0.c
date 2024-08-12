static void FUN1(const char *VAR1)
{
    if (strcmp(VAR1, ""))
    {
        VAR2 = FUN2(VAR1);
        if (VAR2 == VAR3)
        {
            FUN3(NULL, VAR4, "", VAR1);
            FUN4(1);
        }
    }
    else
    {
        FUN5(VAR5, VAR6);
        FUN4(0);
    }
}