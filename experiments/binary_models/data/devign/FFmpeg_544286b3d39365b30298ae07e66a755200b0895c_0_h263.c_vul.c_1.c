int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    if (FUN2(&VAR2->VAR6, 22) != 0x20)
        return -1;
    FUN3(&VAR2->VAR6, 8);
    if (FUN4(&VAR2->VAR6) != 1)
        return -1;
    if (FUN4(&VAR2->VAR6) != 0)
        return -1;
    FUN5(&VAR2->VAR6);
    FUN5(&VAR2->VAR6);
    FUN5(&VAR2->VAR6);
    VAR3 = FUN2(&VAR2->VAR6, 3);
    if (VAR3 != 7)
    {
        VAR2->VAR7 = 0;
        VAR4 = VAR8[VAR3][0];
        VAR5 = VAR8[VAR3][1];
        if (!VAR4)
            return -1;
        VAR2->VAR9 = VAR10 + FUN4(&VAR2->VAR6);
        VAR2->VAR11 = FUN4(&VAR2->VAR6);
        VAR2->VAR12 = VAR2->VAR11;
        if (FUN4(&VAR2->VAR6) != 0)
            return -1;
        if (FUN4(&VAR2->VAR6) != 0)
            return -1;
        if (FUN4(&VAR2->VAR6) != 0)
            return -1;
        VAR2->VAR13 = FUN2(&VAR2->VAR6, 5);
        FUN5(&VAR2->VAR6);
    }
    else
    {
        VAR2->VAR7 = 1;
        if (FUN2(&VAR2->VAR6, 3) != 1)
            return -1;
        VAR3 = FUN2(&VAR2->VAR6, 3);
        FUN3(&VAR2->VAR6, 1);
        VAR14 = FUN2(&VAR2->VAR6, 1);
        FUN3(&VAR2->VAR6, 10);
        FUN3(&VAR2->VAR6, 3);
        VAR2->VAR9 = FUN2(&VAR2->VAR6, 3) + 1;
        if (VAR2->VAR9 != VAR10 && VAR2->VAR9 != VAR15)
            return -1;
        FUN3(&VAR2->VAR6, 7);
        if (VAR3 == 6)
        {
            FUN3(&VAR2->VAR6, 4);
            VAR4 = (FUN2(&VAR2->VAR6, 9) + 1) * 4;
            FUN5(&VAR2->VAR6);
            VAR5 = FUN2(&VAR2->VAR6, 9) * 4;
            fprintf(VAR16, "", VAR4, VAR5);
        }
        else
        {
            VAR4 = VAR8[VAR3][0];
            VAR5 = VAR8[VAR3][1];
        }
        if ((VAR4 == 0) || (VAR5 == 0))
            return -1;
        if (VAR14)
        {
            FUN5(&VAR2->VAR6);
        }
        VAR2->VAR13 = FUN2(&VAR2->VAR6, 5);
    }
    while (FUN4(&VAR2->VAR6) != 0)
    {
        FUN3(&VAR2->VAR6, 8);
    }
    VAR2->VAR17 = 1;
    VAR2->VAR4 = VAR4;
    VAR2->VAR5 = VAR5;
    return 0;
}