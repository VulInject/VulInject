void FUN1(VAR1 *VAR2)
{
    VAR2->VAR3.VAR4 = 0;
    if (VAR2->VAR5)
    {
        FUN2(&VAR2->VAR6, 2 * VAR2->VAR7 + VAR2->VAR8, VAR2->VAR7 * !VAR2->VAR9, VAR2->VAR3.VAR10);
        FUN3(&VAR2->VAR3.VAR11, 0, 0, (VAR2->VAR3.VAR12 >> 1) - 1, (VAR2->VAR3.VAR13 >> 1) - 1, VAR14);
    }
    else
    {
        VAR2->VAR15 = 0;
        VAR2->VAR16 = -1;
        VAR2->VAR17 = 1;
        VAR2->VAR18 = 2;
        switch (VAR2->VAR3.VAR19)
        {
        case VAR20:
            if (VAR2->VAR21 == VAR22)
                FUN4(VAR2);
            else
                FUN5(VAR2);
            break;
        case VAR23:
            if (VAR2->VAR24)
                FUN6(VAR2);
            else
                FUN7(VAR2);
            break;
        case VAR25:
            if (VAR2->VAR26)
            {
                if (VAR2->VAR21 == VAR22)
                    FUN4(VAR2);
                else
                    FUN5(VAR2);
            }
            else
                FUN8(VAR2);
            break;
        }
    }
}