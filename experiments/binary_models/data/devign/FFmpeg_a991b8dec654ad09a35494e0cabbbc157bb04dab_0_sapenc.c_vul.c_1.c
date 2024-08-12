static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    for (VAR6 = 0; VAR6 < VAR2->VAR7; VAR6++)
    {
        VAR1 *VAR8 = VAR2->VAR9[VAR6]->VAR5;
        if (!VAR8)
            continue;
        FUN2(VAR8);
        FUN3(VAR8->VAR10);
        FUN4(&VAR8->VAR9[0]->VAR11);
        FUN4(&VAR8->VAR11);
        FUN5(VAR8->VAR9[0]);
        FUN5(VAR8);
        VAR2->VAR9[VAR6]->VAR5 = NULL;
    }
    if (VAR4->VAR12 && VAR4->VAR13 && VAR4->VAR14)
    {
        VAR4->VAR13[0] |= 4;
        FUN6(VAR4->VAR14, VAR4->VAR13, VAR4->VAR15);
    }
    FUN7(&VAR4->VAR13);
    if (VAR4->VAR14)
        FUN8(VAR4->VAR14);
    FUN9();
    return 0;