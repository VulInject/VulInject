void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    VAR7 *VAR8;
    FUN2(VAR2);
    for (VAR6 = 0; VAR6 < VAR4->VAR9; VAR6++)
    {
        VAR8 = VAR4->VAR10[VAR6];
        if (VAR8)
        {
            if (VAR8->VAR11 && VAR8->VAR12)
                VAR8->VAR11->close(VAR8->VAR12);
        }
    }
    FUN3(VAR4->VAR10);
    if (VAR4->VAR13)
    {
        FUN4(VAR4->VAR13);
        VAR4->VAR13 = NULL;
    }
    FUN3(VAR4->VAR14);
    FUN3(VAR4->VAR15);