FUN1(const struct VAR1 *VAR2, abi_long VAR3)
{
    char *VAR4 = NULL;
    if (VAR3 == -1)
    {
        VAR4 = FUN2(VAR5);
    }
    if ((VAR3 == -1) && VAR4)
    {
        FUN3("", VAR5, VAR4);
    }
    else
    {
        FUN3("" VAR6 "", VAR3);
    }
}