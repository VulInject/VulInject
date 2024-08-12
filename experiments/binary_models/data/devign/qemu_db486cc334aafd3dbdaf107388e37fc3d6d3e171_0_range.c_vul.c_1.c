VAR1 *FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR1 *VAR5, *VAR6 = NULL;
    VAR3 *VAR7, *VAR8;
    if (!VAR2)
    {
        VAR2 = FUN2(VAR2, VAR4, VAR9);
        return VAR2;
    }
    VAR8 = VAR4;
    VAR5 = VAR2;
    while (VAR5 && VAR5 != VAR6 && VAR8)
    {
        VAR7 = VAR5->VAR4;
        if (FUN3(VAR7, VAR8))
        {
            FUN4(VAR7, VAR8);
            VAR5 = FUN5(VAR5, VAR6);
            VAR6 = FUN6(VAR5);
            if (VAR6)
            {
                VAR8 = VAR6->VAR4;
            }
            else
            {
                VAR8 = NULL;
            }
        }
        else
        {
            VAR5 = FUN6(VAR5);
        }
    }
    if (!VAR5)
    {
        VAR2 = FUN2(VAR2, VAR4, VAR9);
    }
    return VAR2;
}