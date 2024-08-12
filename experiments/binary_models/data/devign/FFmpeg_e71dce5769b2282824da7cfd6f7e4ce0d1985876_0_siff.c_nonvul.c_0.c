static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    if (VAR6->VAR8)
    {
        unsigned int VAR9;
        if (VAR6->VAR10 >= VAR6->VAR11)
            return VAR12;
        if (VAR6->VAR13 == -1)
        {
            VAR6->VAR14 = FUN2(VAR2->VAR15) - 4;
            VAR6->VAR16 = FUN3(VAR2->VAR15);
            VAR6->VAR17 = (VAR6->VAR16 & VAR18) ? 4 : 0;
            if (VAR6->VAR17)
                FUN4(VAR2->VAR15, VAR6->VAR19, VAR6->VAR17);
            VAR6->VAR20 = (VAR6->VAR16 & VAR21) ? FUN2(VAR2->VAR15) : 0;
            VAR6->VAR13 = !!(VAR6->VAR16 & VAR21);
        }
        if (!VAR6->VAR13)
        {
            if (VAR6->VAR14 < 2LL + VAR6->VAR20 + VAR6->VAR17)
                return VAR22;
            VAR9 = VAR6->VAR14 - VAR6->VAR20 - VAR6->VAR17 - 2;
            VAR9 = FUN5(VAR2->VAR15, VAR9);
            if (FUN6(VAR4, VAR9 + VAR6->VAR17 + 2) < 0)
                return FUN7(VAR23);
            FUN8(VAR4->VAR24, VAR6->VAR16);
            if (VAR6->VAR17)
                memcpy(VAR4->VAR24 + 2, VAR6->VAR19, VAR6->VAR17);
            if (FUN4(VAR2->VAR15, VAR4->VAR24 + 2 + VAR6->VAR17, VAR9) != VAR9)
            {
                FUN9(VAR4);
                return VAR22;
            }
            VAR4->VAR25 = 0;
            VAR6->VAR13 = -1;
        }
        else
        {
            int VAR14 = FUN10(VAR2->VAR15, VAR4, VAR6->VAR20 - 4);
            if (VAR14 < 0)
                return FUN7(VAR26);
            VAR4->VAR25 = 1;
            VAR4->VAR27 = VAR14;
            VAR6->VAR13 = 0;
        }
        if (!VAR6->VAR10 || VAR6->VAR13)
            VAR4->VAR16 |= VAR28;
        if (VAR6->VAR13 == -1)
            VAR6->VAR10++;
    }
    else
    {
        int VAR14 = FUN10(VAR2->VAR15, VAR4, VAR6->VAR29);
        if (!VAR14)
            return VAR12;
        if (VAR14 <= 0)
            return FUN7(VAR26);
        VAR4->VAR27 = VAR14;
    }
    return VAR4->VAR9;
}