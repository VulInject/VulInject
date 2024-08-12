static int FUN1(VAR1 *VAR2, int VAR3, int *VAR4)
{
    int VAR5, VAR6;
    if (VAR2->VAR7 <= 2)
    {
        if (VAR3 < 4)
        {
            VAR5 = FUN2(&VAR2->VAR8, VAR9.VAR10, VAR11, 3);
        }
        else
        {
            VAR5 = FUN2(&VAR2->VAR8, VAR12.VAR10, VAR11, 3);
        }
        if (VAR5 < 0)
        {
            FUN3(VAR2->VAR13, VAR14, "");
            return -1;
        }
        VAR5 -= 256;
    }
    else
    {
        if (VAR3 < 4)
        {
            VAR5 = FUN2(&VAR2->VAR8, VAR15[VAR2->VAR16].VAR10, VAR11, 3);
        }
        else
        {
            VAR5 = FUN2(&VAR2->VAR8, VAR17[VAR2->VAR16].VAR10, VAR11, 3);
        }
        if (VAR5 < 0)
        {
            FUN3(VAR2->VAR13, VAR14, "");
            return -1;
        }
        if (VAR5 == VAR18)
        {
            VAR5 = FUN4(&VAR2->VAR8, 8);
            if (FUN5(&VAR2->VAR8))
                VAR5 = -VAR5;
        }
        else if (VAR5 != 0)
        {
            if (FUN5(&VAR2->VAR8))
                VAR5 = -VAR5;
        }
    }
    if (VAR2->VAR7 == 1)
    {
        VAR19 *VAR20;
        VAR6 = FUN6(VAR2, VAR3, &VAR20);
        VAR5 += VAR6;
        *VAR20 = VAR5;
    }
    else
    {
        VAR21 *VAR20;
        VAR6 = FUN7(VAR2, VAR3, &VAR20, VAR4);
        VAR5 += VAR6;
        if (VAR3 < 4)
        {
            *VAR20 = VAR5 * VAR2->VAR22;
        }
        else
        {
            *VAR20 = VAR5 * VAR2->VAR23;
        }
    }
    return VAR5;
}