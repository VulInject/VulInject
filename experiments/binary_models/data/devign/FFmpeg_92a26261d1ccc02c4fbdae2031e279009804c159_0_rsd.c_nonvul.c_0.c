static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7[0]->VAR6;
    int VAR8, VAR9 = 1024;
    if (FUN2(VAR2->VAR10))
        return VAR11;
    if (VAR6->VAR12 == VAR13 || VAR6->VAR12 == VAR14)
    {
        VAR8 = FUN3(VAR2->VAR10, VAR4, VAR6->VAR15);
    }
    else if (VAR6->VAR16 == FUN4('', '', '', '') && VAR6->VAR17 > 1)
    {
        int VAR18, VAR19;
        VAR8 = FUN5(VAR4, VAR6->VAR15);
        if (VAR8 < 0)
            return VAR8;
        for (VAR18 = 0; VAR18 < 4; VAR18++)
        {
            for (VAR19 = 0; VAR19 < VAR6->VAR17; VAR19++)
            {
                VAR4->VAR20[VAR19 * 8 + VAR18 * 2 + 0] = FUN6(VAR2->VAR10);
                VAR4->VAR20[VAR19 * 8 + VAR18 * 2 + 1] = FUN6(VAR2->VAR10);
            }
        }
        VAR8 = 0;
    }
    else
    {
        VAR8 = FUN3(VAR2->VAR10, VAR4, VAR9);
    }
    VAR4->VAR21 = 0;
    return VAR8;
}