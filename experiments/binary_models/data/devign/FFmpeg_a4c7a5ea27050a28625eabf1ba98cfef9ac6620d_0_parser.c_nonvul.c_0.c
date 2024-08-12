void FUN1(VAR1 *VAR2, int VAR3, int remove)
{
    int VAR4;
    VAR2->VAR5 = VAR2->VAR6 = VAR7;
    VAR2->VAR8 = 0;
    for (VAR4 = 0; VAR4 < VAR9; VAR4++)
    {
        if (VAR2->VAR10 + VAR3 >= VAR2->VAR11[VAR4] && (VAR2->VAR12 < VAR2->VAR11[VAR4] || !VAR2->VAR12) && VAR2->VAR13[VAR4])
        {
            VAR2->VAR5 = VAR2->VAR14[VAR4];
            VAR2->VAR6 = VAR2->VAR15[VAR4];
            VAR2->VAR8 = VAR2->VAR16 - VAR2->VAR11[VAR4];
            if (remove)
                VAR2->VAR11[VAR4] = VAR17;
        }
    }
}