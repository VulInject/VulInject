static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5, bool VAR6)
{
    unsigned VAR7, VAR8;
    VAR9 *VAR10, *VAR11;
    VAR7 = VAR8 = 0;
    while (VAR7 < VAR4->VAR12 || VAR8 < VAR5->VAR12)
    {
        if (VAR7 < VAR4->VAR12)
        {
            VAR10 = &VAR4->VAR13[VAR7];
        }
        else
        {
            VAR10 = NULL;
        }
        if (VAR8 < VAR5->VAR12)
        {
            VAR11 = &VAR5->VAR13[VAR8];
        }
        else
        {
            VAR11 = NULL;
        }
        if (VAR10 && (!VAR11 || FUN2(VAR10->VAR14.VAR15, VAR11->VAR14.VAR15) || (FUN3(VAR10->VAR14.VAR15, VAR11->VAR14.VAR15) && !FUN4(VAR10, VAR11))))
        {
            if (!VAR6)
            {
                FUN5(VAR10, VAR2, VAR16, VAR17);
            }
            ++VAR7;
        }
        else if (VAR10 && VAR11 && FUN4(VAR10, VAR11))
        {
            if (VAR6)
            {
                FUN5(VAR11, VAR2, VAR18, VAR19);
                if (VAR11->VAR20 & ~VAR10->VAR20)
                {
                    FUN5(VAR11, VAR2, VAR18, VAR21, VAR10->VAR20, VAR11->VAR20);
                }
                if (VAR10->VAR20 & ~VAR11->VAR20)
                {
                    FUN5(VAR11, VAR2, VAR16, VAR22, VAR10->VAR20, VAR11->VAR20);
                }
            }
            ++VAR7;
            ++VAR8;
        }
        else
        {
            if (VAR6)
            {
                FUN5(VAR11, VAR2, VAR18, VAR23);
            }
            ++VAR8;
        }
    }
}