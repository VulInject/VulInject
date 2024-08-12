static void FUN1(const char *VAR1)
{
    if (strcmp(VAR1, ""))
        VAR2 = FUN2(VAR1);
    else
    {
        FUN3(VAR3, VAR4);
        FUN4(0);
    }
}