int FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    VAR6 *VAR7 = NULL;
    FUN2(FUN3(VAR2), VAR5 ? FUN4(VAR5) : "", VAR3, &VAR7);
    if (VAR7)
    {
        FUN5(VAR7);
        FUN6(VAR7);
        return -1;
    }
    return 0;
}