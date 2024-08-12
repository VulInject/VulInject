static VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    VAR5 *const VAR6 = &VAR3->VAR6;
    int VAR7;
    if (VAR6->VAR8->VAR9 & VAR10)
        FUN2(VAR3->VAR6.VAR8, VAR11, "", VAR4, VAR3->VAR12);
    for (VAR7 = 0; VAR7 < VAR3->VAR12; VAR7++)
    {
        VAR1 *VAR13 = VAR3->VAR14[VAR7];
        if (VAR6->VAR8->VAR9 & VAR10)
            FUN2(VAR3->VAR6.VAR8, VAR11, "", VAR7, VAR13->VAR4, VAR13);
        if (VAR13->VAR4 == VAR4)
        {
            VAR3->VAR14[VAR7] = NULL;
            memmove(&VAR3->VAR14[VAR7], &VAR3->VAR14[VAR7 + 1], (VAR3->VAR12 - VAR7 - 1) * sizeof(VAR1 *));
            VAR3->VAR12--;
            return VAR13;
        }
    }
    return NULL;
}