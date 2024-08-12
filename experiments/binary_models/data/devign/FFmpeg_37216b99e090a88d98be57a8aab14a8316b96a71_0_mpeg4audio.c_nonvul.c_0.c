int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    GetBitContext VAR6;
    int VAR7;
    FUN2(&VAR6, VAR4, VAR5 * 8);
    VAR2->VAR8 = FUN3(&VAR6);
    VAR2->VAR9 = FUN4(&VAR6, &VAR2->VAR10);
    VAR2->VAR11 = FUN5(&VAR6, 4);
    if (VAR2->VAR11 < FUN6(VAR12))
        VAR2->VAR13 = VAR12[VAR2->VAR11];
    VAR2->VAR14 = -1;
    if (VAR2->VAR8 == VAR15 || (VAR2->VAR8 == VAR16 && !(FUN7(&VAR6, 3) & 0x03 && !(FUN7(&VAR6, 9) & 0x3F))))
    {
        VAR2->VAR17 = VAR15;
        VAR2->VAR14 = 1;
        VAR2->VAR18 = FUN4(&VAR6, &VAR2->VAR19);
        VAR2->VAR8 = FUN3(&VAR6);
        if (VAR2->VAR8 == VAR20)
            VAR2->VAR21 = FUN5(&VAR6, 4);
    }
    else
    {
        VAR2->VAR17 = VAR22;
        VAR2->VAR18 = 0;
    }
    VAR7 = FUN8(&VAR6);
    if (VAR2->VAR8 == VAR23)
    {
        FUN9(&VAR6, 5);
        if (FUN10(&VAR6, 24) != FUN11('', '', '', ''))
            FUN12(&VAR6, 24);
        VAR7 = FUN8(&VAR6);
        if (FUN13(&VAR6, VAR2))
            return -1;
    }
    if (VAR2->VAR17 != VAR15)
    {
        while (FUN14(&VAR6) > 15)
        {
            if (FUN7(&VAR6, 11) == 0x2b7)
            {
                FUN5(&VAR6, 11);
                VAR2->VAR17 = FUN3(&VAR6);
                if (VAR2->VAR17 == VAR15 && (VAR2->VAR14 = FUN15(&VAR6)) == 1)
                    VAR2->VAR18 = FUN4(&VAR6, &VAR2->VAR19);
                break;
            }
            else
                FUN15(&VAR6);
        }
    }
    return VAR7;
}