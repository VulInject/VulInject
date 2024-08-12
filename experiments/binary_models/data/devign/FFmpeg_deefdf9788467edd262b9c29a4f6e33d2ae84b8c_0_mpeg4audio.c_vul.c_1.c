int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6)
{
    GetBitContext VAR7;
    int VAR8;
    if (VAR5 <= 0)
        return VAR9;
    FUN2(&VAR7, VAR4, VAR5);
    VAR2->VAR10 = FUN3(&VAR7);
    VAR2->VAR11 = FUN4(&VAR7, &VAR2->VAR12);
    VAR2->VAR13 = FUN5(&VAR7, 4);
    if (VAR2->VAR13 < FUN6(VAR14))
        VAR2->VAR15 = VAR14[VAR2->VAR13];
    VAR2->VAR16 = -1;
    VAR2->VAR17 = -1;
    if (VAR2->VAR10 == VAR18 || (VAR2->VAR10 == VAR19 && !(FUN7(&VAR7, 3) & 0x03 && !(FUN7(&VAR7, 9) & 0x3F))))
    {
        if (VAR2->VAR10 == VAR19)
            VAR2->VAR17 = 1;
        VAR2->VAR20 = VAR18;
        VAR2->VAR16 = 1;
        VAR2->VAR21 = FUN4(&VAR7, &VAR2->VAR22);
        VAR2->VAR10 = FUN3(&VAR7);
        if (VAR2->VAR10 == VAR23)
            VAR2->VAR24 = FUN5(&VAR7, 4);
    }
    else
    {
        VAR2->VAR20 = VAR25;
        VAR2->VAR21 = 0;
    }
    VAR8 = FUN8(&VAR7);
    if (VAR2->VAR10 == VAR26)
    {
        FUN9(&VAR7, 5);
        if (FUN10(&VAR7, 24) != FUN11('', '', '', ''))
            FUN12(&VAR7, 24);
        VAR8 = FUN8(&VAR7);
        if (FUN13(&VAR7, VAR2))
            return -1;
    }
    if (VAR2->VAR20 != VAR18 && VAR6)
    {
        while (FUN14(&VAR7) > 15)
        {
            if (FUN7(&VAR7, 11) == 0x2b7)
            {
                FUN5(&VAR7, 11);
                VAR2->VAR20 = FUN3(&VAR7);
                if (VAR2->VAR20 == VAR18 && (VAR2->VAR16 = FUN15(&VAR7)) == 1)
                {
                    VAR2->VAR21 = FUN4(&VAR7, &VAR2->VAR22);
                    if (VAR2->VAR21 == VAR2->VAR11)
                        VAR2->VAR16 = -1;
                }
                if (FUN14(&VAR7) > 11 && FUN5(&VAR7, 11) == 0x548)
                    VAR2->VAR17 = FUN15(&VAR7);
                break;
            }
            else
                FUN15(&VAR7);
        }
    }
    if (!VAR2->VAR16)
        VAR2->VAR17 = 0;
    if ((VAR2->VAR17 == -1 && VAR2->VAR10 != VAR27) || VAR2->VAR15 & ~0x01)
        VAR2->VAR17 = 0;
    return VAR8;
}