static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4 = 0, VAR5;
    if (VAR2->VAR6 <= VAR7 && FUN2(&VAR2->VAR8, 7))
    {
        FUN3(VAR2, VAR9, "");
    }
    VAR3 = FUN2(&VAR2->VAR8, 5);
    if (VAR2->VAR10 == VAR11)
        VAR2->VAR12 = VAR13[0][VAR3];
    else
    {
        VAR2->VAR12 = VAR13[VAR2->VAR10 - 1][VAR3];
    }
    if (VAR3 < 9)
        VAR2->VAR14 = FUN2(&VAR2->VAR8, 1);
    if (VAR2->VAR10 == VAR15)
        VAR2->VAR16 = FUN2(&VAR2->VAR8, 1);
    FUN3(VAR2->VAR17, VAR9, "", VAR2->VAR12, VAR2->VAR14);
    if (VAR2->VAR6 <= VAR7)
    {
        if (VAR2->VAR18)
            VAR2->VAR19 = FUN4(&VAR2->VAR8, 0, 3);
        if (VAR2->VAR20)
            VAR2->VAR21 = FUN2(&VAR2->VAR8, 2);
    }
    else
    {
        VAR5 = FUN2(&VAR2->VAR8, 1);
        if (VAR2->VAR22)
            VAR2->VAR23 = FUN2(&VAR2->VAR8, 1);
        if (VAR2->VAR24 && VAR2->VAR12 < 9)
        {
            VAR2->VAR25 = FUN2(&VAR2->VAR8, 1);
            if (VAR2->VAR25)
            {
                VAR2->VAR25 = 2 + FUN2(&VAR2->VAR8, 1);
                if (VAR2->VAR25 == 3)
                {
                    VAR4 = FUN5(&VAR2->VAR26, VAR2);
                    if (VAR4 < 0)
                        return -1;
                    FUN3(VAR2->VAR17, VAR9, ""
                                                   "",
                           VAR4 >> 1, VAR4 & 1);
                }
            }
        }
    }
    return VAR4;
}