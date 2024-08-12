void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int VAR5, VAR6;
    FUN2(VAR2);
    for (VAR5 = 0; VAR5 < VAR2->VAR7; VAR5++)
    {
        VAR4 = VAR2->VAR8[VAR5];
        if (VAR4->VAR9)
        {
            FUN3(VAR4->VAR9);
            VAR4->VAR9 = NULL;
        }
        VAR4->VAR10 = VAR11;
        VAR4->VAR12 = VAR11;
        VAR4->VAR13 = VAR11;
        VAR4->VAR14 = VAR15;
        for (VAR6 = 0; VAR6 < VAR16 + 1; VAR6++)
            VAR4->VAR17[VAR6] = VAR11;
    }
}