void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5;
    if (VAR2->VAR2->VAR6)
        VAR2->VAR2->FUN2(VAR2);
    for (VAR3 = 0; VAR3 < VAR2->VAR7; VAR3++)
    {
        if ((VAR5 = VAR2->VAR8[VAR3]))
        {
            if (VAR5->VAR9)
                VAR5->VAR9->VAR10[VAR5->VAR11 - VAR5->VAR9->VAR12] = NULL;
            FUN3(&VAR5->VAR13);
            FUN3(&VAR5->VAR14);
        }
        FUN4(&VAR5);
    }
    for (VAR3 = 0; VAR3 < VAR2->VAR15; VAR3++)
    {
        if ((VAR5 = VAR2->VAR10[VAR3]))
        {
            if (VAR5->VAR16)
                VAR5->VAR16->VAR8[VAR5->VAR17 - VAR5->VAR16->VAR18] = NULL;
            FUN3(&VAR5->VAR13);
            FUN3(&VAR5->VAR14);
        }
        FUN4(&VAR5);
    }
    FUN4(&VAR2->VAR19);
    FUN4(&VAR2->VAR18);
    FUN4(&VAR2->VAR12);
    FUN4(&VAR2->VAR8);
    FUN4(&VAR2->VAR10);
    FUN4(&VAR2->VAR20);
    FUN5(VAR2);
}