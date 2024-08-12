static VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    VAR1 *VAR5, *VAR6;
    int VAR7, VAR8;
    VAR6 = NULL;
    VAR8 = 0;
    for (VAR5 = VAR9; VAR5 != NULL; VAR5 = VAR5->VAR10)
    {
        if (!VAR4 && !(VAR5->VAR11 & VAR12))
            continue;
        VAR7 = 0;
        if (VAR5->VAR13)
        {
            VAR7 = VAR5->FUN2(VAR3);
        }
        else if (VAR5->VAR14)
        {
            if (FUN3(VAR3->VAR15, VAR5->VAR14))
            {
                VAR7 = 50;
            }
        }
        if (VAR7 > VAR8)
        {
            VAR8 = VAR7;
            VAR6 = VAR5;
        }
    }
    return VAR6;
}