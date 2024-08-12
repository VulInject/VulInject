void FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    if (!FUN2(VAR3))
    {
        FUN3(VAR2, "", VAR3);
        return;
    }
    if (FUN4(VAR3, VAR4 ? VAR4 : "") < 0)
    {
        FUN3(VAR2, "", VAR3);
    }
}