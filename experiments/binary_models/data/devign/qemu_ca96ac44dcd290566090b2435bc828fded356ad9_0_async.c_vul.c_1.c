int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4, **VAR5, *VAR6;
    int VAR7;
    VAR2->VAR8++;
    VAR7 = 0;
    for (VAR4 = VAR2->VAR9; VAR4; VAR4 = VAR6)
    {
        FUN2();
        VAR6 = VAR4->VAR6;
        if (!VAR4->VAR10 && FUN3(&VAR4->VAR11, 0))
        {
            if (!VAR4->VAR12)
                VAR7 = 1;
            VAR4->VAR12 = 0;
            VAR4->FUN4(VAR4->VAR13);
        }
    }
    VAR2->VAR8--;
    if (!VAR2->VAR8)
    {
        FUN5(&VAR2->VAR14);
        VAR5 = &VAR2->VAR9;
        while (*VAR5)
        {
            VAR4 = *VAR5;
            if (VAR4->VAR10)
            {
                *VAR5 = VAR4->VAR6;
                FUN6(VAR4);
            }
            else
            {
                VAR5 = &VAR4->VAR6;
            }
        }
        FUN7(&VAR2->VAR14);
    }
    return VAR7;
}