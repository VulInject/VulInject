bool FUN1(VAR1 *VAR2)
{
    VAR1 *VAR3;
    VAR4 *VAR5 = NULL;
    while ((VAR5 = FUN2(VAR5, &VAR3)) != NULL)
    {
        bool VAR6;
        VAR6 = FUN3(VAR3, VAR2);
        if (VAR6)
        {
            return true;
        }
    }
    return false;
}