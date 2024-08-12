static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, int VAR9, uint64_t VAR10, uint64_t VAR11, int64_t VAR12, int VAR13)
{
    VAR14 *VAR15 = VAR4->VAR15.VAR16;
    VAR7 *VAR17 = VAR8;
    int VAR18 = 0, VAR19;
    VAR20 *VAR21;
    if (VAR15 && VAR15->VAR22 & 1)
    {
        VAR19 = FUN2(&VAR17, &VAR9, VAR4);
        if (VAR19 < 0)
            return VAR19;
    }
    if (VAR6->VAR23->VAR24 == VAR25)
    {
        VAR7 *VAR26;
        VAR19 = FUN3(VAR4, VAR17, &VAR26, &VAR9);
        if (VAR19 < 0)
        {
            FUN4(VAR2->VAR27, VAR28, "");
            goto VAR29;
        }
        if (VAR17 != VAR8)
            VAR17 = VAR26;
    }
    if (VAR6->VAR23->VAR24 == VAR30)
        VAR18 = 8;
    VAR21 = FUN5(sizeof(VAR20));
    if (FUN6(VAR21, VAR9 + VAR18) < 0)
    {
        FUN7(VAR21);
        return FUN8(VAR31);
    }
    if (VAR6->VAR23->VAR24 == VAR30)
    {
        VAR7 *VAR32 = VAR21->VAR8;
        FUN9(&VAR32, VAR9);
        FUN9(&VAR32, FUN10('', '', '', ''));
    }
    memcpy(VAR21->VAR8 + VAR18, VAR17, VAR9);
    if (VAR17 != VAR8)
        FUN7(VAR17);
    VAR21->VAR33 = VAR13;
    VAR21->VAR34 = VAR6->VAR35;
    if (VAR4->VAR36)
        VAR21->VAR37 = VAR10;
    else
        VAR21->VAR38 = VAR10;
    VAR21->VAR12 = VAR12;
    if (VAR6->VAR23->VAR24 == VAR39)
        VAR21->VAR40 = VAR11;
    else if (VAR4->VAR41 != VAR42)
        VAR21->VAR11 = VAR11;
    if (VAR6->VAR23->VAR24 == VAR43)
        FUN11(VAR2, VAR21, VAR11);
    if (VAR2->VAR44 && VAR10 != VAR45 && VAR2->VAR44->VAR38 == VAR10 && VAR2->VAR44->VAR34 == VAR6->VAR35 && VAR6->VAR23->VAR24 == VAR43)
        FUN12(VAR2->VAR44, VAR21);
    else
    {
        FUN13(&VAR2->VAR46, &VAR2->VAR47, VAR21);
        VAR2->VAR44 = VAR21;
    }
    return 0;
VAR29:
    if (VAR17 != VAR8)
        return VAR19;