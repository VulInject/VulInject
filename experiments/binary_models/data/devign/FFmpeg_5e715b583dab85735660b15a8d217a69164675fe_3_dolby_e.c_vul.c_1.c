static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8 = FUN2(VAR2);
    for (VAR6 = VAR3; VAR6 < VAR4; VAR6++)
    {
        if (!VAR2->VAR9[VAR6])
        {
            VAR2->VAR10[VAR5][VAR6].VAR11 = 0;
            continue;
        }
        if ((VAR7 = FUN3(VAR2, VAR2->VAR9[VAR6], VAR8)) < 0)
            return VAR7;
        if ((VAR7 = FUN4(VAR2, VAR6, VAR5)) < 0)
        {
            if (VAR2->VAR12->VAR13 & VAR14)
                return VAR7;
            VAR2->VAR10[VAR5][VAR6].VAR11 = 0;
        }
        FUN5(VAR2, VAR2->VAR9[VAR6]);
    }
    FUN5(VAR2, 1);
    return 0;
}