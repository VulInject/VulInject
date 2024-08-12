int FUN1(void *VAR1, VAR2 **VAR3)
{
    VAR4 *VAR5 = NULL;
    VAR2 *VAR6 = NULL;
    int VAR7 = 0;
    while ((VAR5 = FUN2(*VAR3, "", VAR5, VAR8)))
    {
        VAR7 = FUN3(VAR1, VAR5->VAR9, VAR5->VAR10, 0);
        if (VAR7 == VAR11)
            FUN4(&VAR6, VAR5->VAR9, VAR5->VAR10, 0);
        else if (VAR7 < 0)
        {
            FUN5(VAR1, VAR12, "", VAR5->VAR9, VAR5->VAR10);
            break;
        }
        VAR7 = 0;
    }
    FUN6(VAR3);
    *VAR3 = VAR6;
    return VAR7;