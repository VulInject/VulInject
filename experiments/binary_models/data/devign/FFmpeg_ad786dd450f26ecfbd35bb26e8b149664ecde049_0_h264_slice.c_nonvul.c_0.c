int FUN1(VAR1 *VAR2, unsigned VAR3)
{
    VAR4 *const VAR5 = VAR2->VAR5;
    VAR1 *VAR6;
    int VAR7;
    if (VAR2->VAR5->VAR8)
        return 0;
    if (VAR3 == 1)
    {
        return FUN2(VAR5, &VAR2);
    }
    else
    {
        for (VAR7 = 1; VAR7 < VAR3; VAR7++)
        {
            VAR6 = VAR2->VAR9[VAR7];
            VAR6->VAR10.VAR11 = 0;
        }
        VAR5->FUN3(VAR5, VAR12, VAR2->VAR9, NULL, VAR3, sizeof(void *));
        VAR6 = VAR2->VAR9[VAR3 - 1];
        VAR2->VAR13 = VAR6->VAR13;
        VAR2->VAR14 = VAR6->VAR14;
        VAR2->VAR15 = VAR6->VAR15;
        VAR2->VAR16 = VAR6->VAR16;
        for (VAR7 = 1; VAR7 < VAR3; VAR7++)
            VAR2->VAR10.VAR11 += VAR2->VAR9[VAR7]->VAR10.VAR11;
    }
    return 0;
}