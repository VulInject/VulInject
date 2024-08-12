static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    if ((VAR5 = FUN2(&VAR2->VAR6, VAR4)) < 0)
        return -1;
    if (VAR5)
    {
        double VAR7 = VAR8;
        if (VAR4->VAR9 != VAR10)
            VAR7 = FUN3(VAR2->VAR11->VAR12) * VAR4->VAR9;
        VAR4->VAR13 = FUN4(VAR2->VAR14, VAR2->VAR11, VAR4);
        if (VAR15 > 0 || (VAR15 && FUN5(VAR2) != VAR16))
        {
            if (VAR4->VAR9 != VAR10)
            {
                double VAR17 = VAR7 - FUN6(VAR2);
                if (!FUN7(VAR17) && FUN8(VAR17) < VAR18 && VAR17 - VAR2->VAR19 < 0 && VAR2->VAR6.VAR20 == VAR2->VAR21.VAR22 && VAR2->VAR23.VAR24)
                {
                    VAR2->VAR25++;
                    FUN9(VAR4);
                    VAR5 = 0;
                }
            }
        }
    }
    return VAR5;
}