static void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    if (!strcmp(VAR3, ""))
    {
        VAR7->VAR8 = 3;
    }
    else if (!strcmp(VAR3, ""))
    {
        VAR7->VAR8 = 2;
    }
    else if (!strcmp(VAR3, ""))
    {
        VAR7->VAR8 = 0;
    }
    else
    {
        FUN3(VAR5, "");
        FUN4(VAR5, "");
    }
}