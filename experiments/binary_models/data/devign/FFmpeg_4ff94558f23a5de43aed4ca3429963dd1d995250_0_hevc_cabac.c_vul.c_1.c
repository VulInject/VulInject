int FUN1(VAR1 *VAR2, int VAR3)
{
    if (VAR3 == VAR2->VAR4.VAR5->VAR6[VAR2->VAR7.VAR8])
    {
        int VAR9 = FUN2(VAR2);
        if (VAR9 < 0)
            return VAR9;
        if (VAR2->VAR7.VAR10 == 0 || (VAR2->VAR4.VAR5->VAR11 && VAR2->VAR4.VAR5->VAR12[VAR3] != VAR2->VAR4.VAR5->VAR12[VAR3 - 1]))
            FUN3(VAR2);
        if (!VAR2->VAR7.VAR13 && VAR2->VAR4.VAR5->VAR14)
        {
            if (VAR3 % VAR2->VAR4.VAR15->VAR16 == 0)
            {
                if (VAR2->VAR4.VAR15->VAR16 == 1)
                    FUN3(VAR2);
                else if (VAR2->VAR7.VAR10 == 1)
                    FUN4(VAR2);
            }
        }
    }
    else
    {
        if (VAR2->VAR4.VAR5->VAR11 && VAR2->VAR4.VAR5->VAR12[VAR3] != VAR2->VAR4.VAR5->VAR12[VAR3 - 1])
        {
            if (VAR2->VAR17 == 1)
                FUN5(VAR2->VAR18);
            else
            {
                int VAR9 = FUN2(VAR2);
                if (VAR9 < 0)
                    return VAR9;
            }
            FUN3(VAR2);
        }
        if (VAR2->VAR4.VAR5->VAR14)
        {
            if (VAR3 % VAR2->VAR4.VAR15->VAR16 == 0)
            {
                FUN6(&VAR2->VAR18->VAR19);
                if (VAR2->VAR17 == 1)
                    FUN5(VAR2->VAR18);
                else
                {
                    int VAR9 = FUN2(VAR2);
                    if (VAR9 < 0)
                        return VAR9;
                }
                if (VAR2->VAR4.VAR15->VAR16 == 1)
                    FUN3(VAR2);
                else
                    FUN4(VAR2);
            }
        }
    }
    return 0;
}