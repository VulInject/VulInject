static int FUN1(VAR1 *VAR2, int VAR3, char **VAR4)
{
    FUN2(*VAR4);
    if (!(*VAR4 = FUN3(VAR3 + 1)))
        return FUN4(VAR5);
    if (FUN5(VAR2, (VAR6 *)*VAR4, VAR3) != VAR3)
    {
        FUN6(VAR4);
        return FUN4(VAR7);
    }
    (*VAR4)[VAR3] = '';
    return 0;
}