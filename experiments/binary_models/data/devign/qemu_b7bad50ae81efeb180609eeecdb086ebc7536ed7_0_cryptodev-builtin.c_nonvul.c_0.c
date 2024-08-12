static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    size_t VAR7;
    int VAR8 = VAR2->VAR9.VAR10.VAR8;
    VAR11 *VAR12;
    for (VAR7 = 0; VAR7 < VAR13; VAR7++)
    {
        if (VAR6->VAR14[VAR7] != NULL)
        {
            FUN3(VAR2, VAR7, 0, VAR4);
        }
    }
    for (VAR7 = 0; VAR7 < VAR8; VAR7++)
    {
        VAR12 = VAR2->VAR9.VAR10.VAR15[VAR7];
        if (VAR12)
        {
            FUN4(VAR12);
            VAR2->VAR9.VAR10.VAR15[VAR7] = NULL;
        }
    }
    FUN5(VAR2, false);
}