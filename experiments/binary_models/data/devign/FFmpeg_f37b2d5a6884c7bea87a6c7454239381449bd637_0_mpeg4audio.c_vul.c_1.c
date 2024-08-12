int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, int VAR6)
{
    GetBitContext VAR7;
    int VAR8;
    FUN2(&VAR7, VAR4, VAR5);
    VAR2->VAR9 = FUN3(&VAR7);
    VAR2->VAR10 = FUN4(&VAR7, &VAR2->VAR11);
    VAR2->VAR12 = FUN5(&VAR7, 4);
    if (VAR2->VAR12 < FUN6(VAR13))
        VAR2->VAR14 = VAR13[VAR2->VAR12];
    VAR2->VAR15 = -1;
    VAR2->VAR16 = -1;
    if (VAR2->VAR9 == VAR17 || (VAR2->VAR9 == VAR18 && !(FUN7(&VAR7, 3) & 0x03 && !(FUN7(&VAR7, 9) & 0x3F))))
    {
        if (VAR2->VAR9 == VAR18)
            VAR2->VAR16 = 1;
        VAR2->VAR19 = VAR17;
        VAR2->VAR15 = 1;
        VAR2->VAR20 = FUN4(&VAR7, &VAR2->VAR21);
        VAR2->VAR9 = FUN3(&VAR7);
        if (VAR2->VAR9 == VAR22)
            VAR2->VAR23 = FUN5(&VAR7, 4);
    }
    else
    {
        VAR2->VAR19 = VAR24;
        VAR2->VAR20 = 0;
    }
    VAR8 = FUN8(&VAR7);
    if (VAR2->VAR9 == VAR25)
    {
        FUN9(&VAR7, 5);
        if (FUN10(&VAR7, 24) != FUN11('', '', '', ''))
            FUN12(&VAR7, 24);
        VAR8 = FUN8(&VAR7);
        if (FUN13(&VAR7, VAR2))
            return -1;
    }
    if (VAR2->VAR19 != VAR17 && VAR6)
    {
        while (FUN14(&VAR7) > 15)
        {
            if (FUN7(&VAR7, 11) == 0x2b7)
            {
                FUN5(&VAR7, 11);
                VAR2->VAR19 = FUN3(&VAR7);
                if (VAR2->VAR19 == VAR17 && (VAR2->VAR15 = FUN15(&VAR7)) == 1)
                    VAR2->VAR20 = FUN4(&VAR7, &VAR2->VAR21);
                if (FUN14(&VAR7) > 11 && FUN5(&VAR7, 11) == 0x548)
                    VAR2->VAR16 = FUN15(&VAR7);
                break;
            }
            else
                FUN15(&VAR7);
        }
    }
    if (!VAR2->VAR15)
        VAR2->VAR16 = 0;
    if ((VAR2->VAR16 == -1 && VAR2->VAR9 != VAR26) || VAR2->VAR14 & ~0x01)
        VAR2->VAR16 = 0;
    return VAR8;