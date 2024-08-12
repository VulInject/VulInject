static int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9;
    int VAR10;
    VAR8 = FUN2(VAR2, VAR3, VAR4);
    FUN3(VAR2->VAR11, "" VAR12 "", VAR2->VAR13, VAR3, VAR8);
    if (VAR8 < 0)
        return -1;
    VAR6->VAR14 = VAR8;
    FUN3(VAR2->VAR11, "", VAR2->VAR13, VAR6->VAR14);
    if (VAR6->VAR15)
    {
        VAR9 = 0;
        for (VAR10 = 0; VAR10 < VAR6->VAR16; VAR10++)
        {
            int VAR17 = VAR9 + VAR6->VAR15[VAR10].VAR18;
            if (VAR17 > VAR6->VAR14)
            {
                VAR6->VAR19 = VAR10;
                VAR6->VAR20 = VAR6->VAR14 - VAR9;
                break;
            }
            VAR9 = VAR17;
        }
    }
    return VAR8;
}