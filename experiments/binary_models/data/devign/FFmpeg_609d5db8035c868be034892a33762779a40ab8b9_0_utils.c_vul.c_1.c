void FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (!VAR2)
        return;
    FUN2(VAR2);
    if (VAR2->VAR4 && VAR2->VAR4->VAR5 && VAR2->VAR6)
        FUN2(VAR2->VAR6);
    if (VAR2->VAR7 && VAR2->VAR7->VAR5 && VAR2->VAR6)
        FUN2(VAR2->VAR6);
    for (VAR3 = VAR2->VAR8 - 1; VAR3 >= 0; VAR3--)
    {
        FUN3(VAR2, VAR2->VAR9[VAR3]);
    }
    for (VAR3 = VAR2->VAR10 - 1; VAR3 >= 0; VAR3--)
    {
        FUN4(&VAR2->VAR11[VAR3]->VAR12);
        FUN5(&VAR2->VAR11[VAR3]->VAR13);
        FUN5(&VAR2->VAR11[VAR3]);
    }
    FUN5(&VAR2->VAR11);
    FUN5(&VAR2->VAR6);
    while (VAR2->VAR14--)
    {
        FUN4(&VAR2->VAR15[VAR2->VAR14]->VAR12);
        FUN5(&VAR2->VAR15[VAR2->VAR14]);
    }
    FUN5(&VAR2->VAR15);
    FUN4(&VAR2->VAR12);
    FUN5(&VAR2->VAR9);
    FUN5(&VAR2->VAR16);
    FUN6(VAR2);