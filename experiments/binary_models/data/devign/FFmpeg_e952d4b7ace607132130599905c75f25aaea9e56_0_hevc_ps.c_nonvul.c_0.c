static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9;
    if (VAR6->VAR10)
    {
        VAR6->VAR11 = FUN2(VAR2) + 2;
    }
    VAR6->VAR12 = FUN3(VAR2);
    VAR6->VAR13 = FUN3(VAR2);
    if (VAR6->VAR13)
    {
        VAR6->VAR14 = FUN2(VAR2);
        VAR6->VAR15 = FUN2(VAR2);
        if (VAR6->VAR15 > 5)
        {
            FUN4(VAR4, VAR16, "");
            return VAR17;
        }
        for (VAR9 = 0; VAR9 <= VAR6->VAR15; VAR9++)
        {
            VAR6->VAR18[VAR9] = FUN5(VAR2);
            if (VAR6->VAR18[VAR9])
            {
                FUN4(VAR4, VAR19, "");
            }
            VAR6->VAR20[VAR9] = FUN5(VAR2);
            if (VAR6->VAR20[VAR9])
            {
                FUN4(VAR4, VAR19, "");
            }
        }
    }
    VAR6->VAR21 = FUN2(VAR2);
    VAR6->VAR22 = FUN2(VAR2);
    return (0);
}