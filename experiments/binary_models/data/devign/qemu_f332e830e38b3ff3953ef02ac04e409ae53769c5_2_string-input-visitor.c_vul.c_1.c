static void FUN1(VAR1 *VAR2, const char *VAR3, char **VAR4, VAR5 **VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    if (VAR8->VAR9)
    {
        *VAR4 = FUN3(VAR8->VAR9);
    }
    else
    {
        *VAR4 = NULL;
        FUN4(VAR6, VAR10, VAR3 ? VAR3 : "", "");
    }
}