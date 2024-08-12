static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = (VAR5 *)VAR2;
    if (VAR2->VAR7 || VAR2->VAR8 == VAR9)
    {
        if (FUN2(VAR2, VAR4) < 0)
            return -1;
        FUN3(VAR2);
        VAR2->VAR10->VAR11 = 0;
        if (VAR2->VAR12)
        {
            if (VAR2->VAR13)
            {
                if (VAR2->VAR14)
                    VAR2->VAR10->VAR11 = 4;
                else
                    VAR2->VAR10->VAR11 = 2;
            }
            else if (VAR2->VAR15)
            {
                VAR2->VAR10->VAR11 = 1;
            }
        }
        *VAR2->VAR10->VAR16 = VAR6->VAR16;
    }
    else
    {
        int VAR17;
        if (!VAR2->VAR10)
        {
            FUN4(VAR2->VAR4, VAR18, "");
            return -1;
        }
        for (VAR17 = 0; VAR17 < 4; VAR17++)
        {
            VAR2->VAR19.VAR20[VAR17] = VAR2->VAR10->VAR20[VAR17];
            if (VAR2->VAR8 == VAR21)
            {
                VAR2->VAR19.VAR20[VAR17] += VAR2->VAR10->VAR22[VAR17];
            }
        }
    }
    if (VAR2->VAR4->VAR23)
        if (FUN5(VAR2, VAR4) < 0)
            return -1;
    return 0;
}