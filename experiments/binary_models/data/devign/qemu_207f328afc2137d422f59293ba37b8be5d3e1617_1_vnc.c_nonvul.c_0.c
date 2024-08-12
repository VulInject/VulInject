static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    VAR5 *VAR6;
    int VAR7 = VAR4 / VAR8;
    int VAR9 = VAR3 / VAR8;
    int VAR10 = 0;
    VAR4 = VAR4 / VAR8 * VAR8;
    VAR3 = VAR3 / VAR8 * VAR8;
    FUN2(VAR6, &VAR2->VAR11, VAR12)
    {
        int VAR13, VAR14;
        if (VAR6->VAR15.VAR16)
        {
            continue;
        }
        if (!VAR6->VAR17[VAR7][VAR9])
        {
            continue;
        }
        VAR6->VAR17[VAR7][VAR9] = 0;
        for (VAR13 = 0; VAR13 < VAR8; ++VAR13)
        {
            for (VAR14 = VAR3 / 16; VAR14 < VAR8 / 16 + VAR3 / 16; ++VAR14)
            {
                FUN3(VAR6->VAR18[VAR4 + VAR13], VAR14);
            }
        }
        VAR10++;
    }
    return VAR10;
}