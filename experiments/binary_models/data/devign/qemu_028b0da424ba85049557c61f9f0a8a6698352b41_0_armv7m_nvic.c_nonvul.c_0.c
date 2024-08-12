static bool FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4 = 0;
    bool VAR5 = FUN2(&VAR2->VAR6->VAR7, VAR8);
    for (VAR3 = VAR9; VAR3 < VAR2->VAR10; VAR3++)
    {
        if (VAR2->VAR11[VAR3].VAR12 || (VAR5 && VAR3 < VAR13 && VAR2->VAR14[VAR3].VAR12))
        {
            VAR4++;
            if (VAR4 == 2)
            {
                return 0;
            }
        }
    }
    return 1;
}