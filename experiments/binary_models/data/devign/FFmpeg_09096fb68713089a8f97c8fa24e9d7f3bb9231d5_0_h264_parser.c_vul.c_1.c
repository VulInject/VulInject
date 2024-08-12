static int FUN1(VAR1 *VAR2, VAR3 *VAR4, void *VAR5)
{
    H264PredWeightTable VAR6;
    int VAR7 = VAR2->VAR8 & 3;
    VAR9 *VAR10 = VAR2->VAR11;
    int VAR12, VAR13[2];
    if (VAR10->VAR14.VAR15->VAR16)
        FUN2(VAR4);
    if (VAR7 == VAR17)
        FUN3(VAR4);
    if (FUN4(&VAR12, VAR13, VAR4, VAR10->VAR14.VAR15, VAR7, VAR10->VAR18, VAR5) < 0)
        return VAR19;
    if (VAR7 != VAR20)
    {
        int VAR21;
        for (VAR21 = 0; VAR21 < VAR12; VAR21++)
        {
            if (FUN3(VAR4))
            {
                int VAR22;
                for (VAR22 = 0;; VAR22++)
                {
                    unsigned int VAR23 = FUN5(VAR4);
                    if (VAR23 < 3)
                        FUN6(VAR4);
                    else if (VAR23 > 3)
                    {
                        FUN7(VAR5, VAR24, "", VAR23);
                        return VAR19;
                    }
                    else
                        break;
                    if (VAR22 >= VAR13[VAR21])
                    {
                        FUN7(VAR5, VAR24, "", VAR22);
                        return VAR19;
                    }
                }
            }
        }
    }
    if ((VAR10->VAR14.VAR15->VAR25 && VAR7 == VAR26) || (VAR10->VAR14.VAR15->VAR27 == 1 && VAR7 == VAR17))
        FUN8(VAR4, VAR10->VAR14.VAR28, VAR13, VAR7, &VAR6, VAR5);
    if (FUN3(VAR4))
    {
        int VAR29;
        for (VAR29 = 0; VAR29 < VAR30; VAR29++)
        {
            MMCOOpcode VAR31 = FUN5(VAR4);
            if (VAR31 > (unsigned)VAR32)
            {
                FUN7(VAR5, VAR24, "", VAR31);
                return VAR19;
            }
            if (VAR31 == VAR33)
                return 0;
            else if (VAR31 == VAR34)
                return 1;
            if (VAR31 == VAR35 || VAR31 == VAR36)
                FUN6(VAR4);
            if (VAR31 == VAR36 || VAR31 == VAR37 || VAR31 == VAR32 || VAR31 == VAR38)
                FUN5(VAR4);
        }
    }
    return 0;
}