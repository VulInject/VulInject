void FUN1(VAR1 *VAR2, char **VAR3)
{
    VAR4 *VAR5;
    if (!*VAR3)
    {
        VAR5 = FUN2(VAR2->VAR6);
        if (VAR5->VAR3)
        {
            *VAR3 = FUN3(VAR5->VAR3);
        }
    }
}