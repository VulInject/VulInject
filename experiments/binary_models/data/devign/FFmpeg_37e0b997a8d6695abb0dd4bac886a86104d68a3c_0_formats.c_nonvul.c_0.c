VAR1 *FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    VAR1 *VAR4;
    unsigned VAR5, VAR6, VAR7 = 0;
    VAR4 = FUN2(sizeof(VAR1));
    VAR4->VAR8 = FUN3(sizeof(*VAR4->VAR8) * FUN4(VAR2->VAR9, VAR3->VAR9));
    for (VAR5 = 0; VAR5 < VAR2->VAR9; VAR5++)
        for (VAR6 = 0; VAR6 < VAR3->VAR9; VAR6++)
            if (VAR2->VAR8[VAR5] == VAR3->VAR8[VAR6])
                VAR4->VAR8[VAR7++] = VAR2->VAR8[VAR5];
    if (!(VAR4->VAR9 = VAR7))
    {
        FUN5(VAR4->VAR8);
        FUN5(VAR4);
        return NULL;
    }
    VAR4->VAR10 = FUN3(sizeof(VAR1 **) * (VAR2->VAR11 + VAR3->VAR11));
    FUN6(VAR4, VAR2);
    FUN6(VAR4, VAR3);
    FUN5(VAR2->VAR10);
    FUN5(VAR2->VAR8);
    FUN5(VAR2);
    FUN5(VAR3->VAR10);
    FUN5(VAR3->VAR8);
    FUN5(VAR3);
    return VAR4;
}