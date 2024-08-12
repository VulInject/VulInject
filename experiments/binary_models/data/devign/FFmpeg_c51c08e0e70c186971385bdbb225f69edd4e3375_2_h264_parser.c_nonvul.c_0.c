static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR7;
    VAR8 *VAR9 = &VAR7->VAR10[0];
    VAR9->VAR11 = VAR2->VAR12 & 3;
    if (VAR7->VAR13.VAR14)
        FUN2(&VAR9->VAR15);
    if (FUN3(VAR7, VAR9) < 0)
        return VAR16;
    if (VAR9->VAR11 != VAR17)
    {
        int VAR18;
        for (VAR18 = 0; VAR18 < VAR9->VAR19; VAR18++)
        {
            if (FUN4(&VAR9->VAR15))
            {
                int VAR20;
                for (VAR20 = 0;; VAR20++)
                {
                    unsigned int VAR21 = FUN5(&VAR9->VAR15);
                    if (VAR21 < 3)
                        FUN6(&VAR9->VAR15);
                    else if (VAR21 > 3)
                    {
                        FUN7(VAR7->VAR22, VAR23, "", VAR21);
                        return VAR16;
                    }
                    else
                        break;
                    if (VAR20 >= VAR9->VAR24[VAR18])
                    {
                        FUN7(VAR7->VAR22, VAR23, "", VAR20);
                        return VAR16;
                    }
                }
            }
        }
    }
    if ((VAR7->VAR13.VAR25 && VAR9->VAR11 == VAR26) || (VAR7->VAR13.VAR27 == 1 && VAR9->VAR11 == VAR28))
        FUN8(VAR7, VAR9);
    if (FUN4(&VAR9->VAR15))
    {
        int VAR29;
        for (VAR29 = 0; VAR29 < VAR30; VAR29++)
        {
            MMCOOpcode VAR31 = FUN5(&VAR9->VAR15);
            if (VAR31 > (unsigned)VAR32)
            {
                FUN7(VAR7->VAR22, VAR23, "", VAR31);
                return VAR16;
            }
            if (VAR31 == VAR33)
                return 0;
            else if (VAR31 == VAR34)
                return 1;
            if (VAR31 == VAR35 || VAR31 == VAR36)
                FUN6(&VAR9->VAR15);
            if (VAR31 == VAR36 || VAR31 == VAR37 || VAR31 == VAR32 || VAR31 == VAR38)
                FUN5(&VAR9->VAR15);
        }
    }
    return 0;
}