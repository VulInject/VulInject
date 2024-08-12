static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    if (VAR4->VAR7 > 0)
    {
        VAR8 *VAR9 = &VAR4->VAR10;
        int VAR11;
        FUN2(VAR2, VAR12, "", VAR4->VAR13, VAR4->VAR14);
        --VAR4->VAR14;
        if (VAR6)
        {
            VAR9->VAR15 = FUN3(VAR9->VAR15, VAR9->VAR16 + VAR6->VAR17 + VAR18);
            memcpy(VAR9->VAR15 + VAR9->VAR16, VAR6->VAR19, VAR6->VAR17);
            VAR9->VAR16 += VAR6->VAR17;
            memset(VAR9->VAR15 + VAR9->VAR16, 0, VAR18);
        }
        else
        {
            VAR4->VAR14 = 0;
        }
        VAR11 = VAR2->VAR20 <= 0 || VAR4->VAR14 <= 0;
        if (VAR11 || FUN4(VAR9->VAR16) != FUN4(VAR9->VAR16 - VAR6->VAR17))
        {
            int VAR21 = FUN5(VAR2, VAR4, VAR9);
            if ((VAR4->VAR22->VAR23 != VAR24 && VAR21 > VAR25 / 4) || VAR11)
            {
                VAR9->VAR16 = 0;
                FUN6(&VAR9->VAR15);
                VAR4->VAR7 = -1;
                if (VAR4->VAR22->VAR23 != VAR24)
                {
                    FUN2(VAR2, VAR12, "", VAR4->VAR13);
                }
                else
                    FUN2(VAR2, VAR26, "", VAR4->VAR13);
            }
        }
    }
}