void FUN1(VAR1 *VAR2)
{
    VAR1 *VAR3[VAR4];
    int VAR5, VAR6;
    assert(VAR2->VAR7->VAR8 != VAR9);
    VAR5 = FUN2(VAR2->VAR10, VAR3, VAR9, VAR4);
    assert(VAR5 != 0);
    if (VAR2->VAR11 && VAR2->VAR11->VAR7->VAR8 == VAR9)
    {
        VAR12 *VAR13 = FUN3(VAR2->VAR11);
        if (VAR13->VAR14)
        {
            return;
        }
        VAR13->VAR14 = true;
        for (VAR6 = 0; VAR6 < VAR5; VAR6++)
        {
            VAR3[VAR6]->VAR11->VAR15 = true;
        }
        if (VAR2->VAR11->VAR7->VAR16)
        {
            VAR2->VAR11->VAR7->FUN4(VAR2->VAR11);
        }
        for (VAR6 = 0; VAR6 < VAR5; VAR6++)
        {
            FUN5(VAR3[VAR6]);
        }
        return;
    }
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
    {
        FUN5(VAR3[VAR6]);
        FUN6(VAR3[VAR6]);
    }
}