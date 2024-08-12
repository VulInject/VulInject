static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    H264PredWeightTable VAR5;
    int VAR6 = VAR2->VAR7 & 3;
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR12;
    int VAR13, VAR14[2];
    if (VAR9->VAR15.VAR16->VAR17)
        FUN2(VAR4);
    if (VAR6 == VAR18)
        FUN3(VAR4);
    if (FUN4(&VAR13, VAR14, VAR4, VAR9->VAR15.VAR16, VAR6, VAR12->VAR19) < 0)
        return VAR20;
    if (VAR6 != VAR21)
    {
        int VAR22;
        for (VAR22 = 0; VAR22 < VAR13; VAR22++)
        {
            if (FUN3(VAR4))
            {
                int VAR23;
                for (VAR23 = 0;; VAR23++)
                {
                    unsigned int VAR24 = FUN5(VAR4);
                    if (VAR24 < 3)
                        FUN2(VAR4);
                    else if (VAR24 > 3)
                    {
                        FUN6(VAR12->VAR25, VAR26, "", VAR24);
                        return VAR20;
                    }
                    else
                        break;
                    if (VAR23 >= VAR14[VAR22])
                    {
                        FUN6(VAR12->VAR25, VAR26, "", VAR23);
                        return VAR20;
                    }
                }
            }
        }
    }
    if ((VAR9->VAR15.VAR16->VAR27 && VAR6 == VAR28) || (VAR9->VAR15.VAR16->VAR29 == 1 && VAR6 == VAR18))
        FUN7(VAR4, VAR9->VAR15.VAR30, VAR14, VAR6, &VAR5);
    if (FUN3(VAR4))
    {
        int VAR31;
        for (VAR31 = 0; VAR31 < VAR32; VAR31++)
        {
            MMCOOpcode VAR33 = FUN5(VAR4);
            if (VAR33 > (unsigned)VAR34)
            {
                FUN6(VAR12->VAR25, VAR26, "", VAR33);
                return VAR20;
            }
            if (VAR33 == VAR35)
                return 0;
            else if (VAR33 == VAR36)
                return 1;
            if (VAR33 == VAR37 || VAR33 == VAR38)
                FUN2(VAR4);
            if (VAR33 == VAR38 || VAR33 == VAR39 || VAR33 == VAR34 || VAR33 == VAR40)
                FUN5(VAR4);
        }
    }
    return 0;
}