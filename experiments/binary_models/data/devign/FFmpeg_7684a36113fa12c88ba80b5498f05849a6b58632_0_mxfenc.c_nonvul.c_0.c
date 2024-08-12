static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR12[VAR4->VAR13];
    VAR14 *VAR15 = VAR11->VAR7;
    MXFIndexEntry VAR16 = {0};
    int VAR17;
    if (!VAR6->VAR18 && !(VAR6->VAR19 % VAR20))
    {
        if ((VAR17 = FUN2(&VAR6->VAR21, VAR6->VAR19 + VAR20, sizeof(*VAR6->VAR21))) < 0)
        {
            VAR6->VAR19 = 0;
            FUN3(VAR2, VAR22, "");
            return VAR17;
        }
    }
    if (VAR11->VAR23->VAR24 == VAR25)
    {
        if (!FUN4(VAR2, VAR11, VAR4, &VAR16))
        {
            FUN3(VAR2, VAR22, "");
            return -1;
        }
    }
    if (!VAR6->VAR26)
    {
        if (VAR6->VAR18)
        {
            if ((VAR17 = FUN5(VAR2, 1, 2, VAR27, 1)) < 0)
                return VAR17;
            FUN6(VAR2);
            FUN7(VAR2);
        }
        else
        {
            if ((VAR17 = FUN5(VAR2, 0, 0, VAR27, 1)) < 0)
                return VAR17;
        }
        VAR6->VAR26 = 1;
    }
    if (VAR11->VAR28 == 0)
    {
        if (!VAR6->VAR18 && (!VAR6->VAR19 || VAR6->VAR19 > VAR20) && !(VAR16.VAR29 & 0x33))
        {
            FUN6(VAR2);
            if ((VAR17 = FUN5(VAR2, 1, 2, VAR30, 0)) < 0)
                return VAR17;
            FUN6(VAR2);
            FUN7(VAR2);
        }
        FUN6(VAR2);
        FUN8(VAR2);
        if (!VAR6->VAR18)
        {
            VAR6->VAR21[VAR6->VAR19].VAR31 = VAR6->VAR32;
            VAR6->VAR21[VAR6->VAR19].VAR29 = VAR16.VAR29;
            VAR6->VAR21[VAR6->VAR19].VAR33 = VAR16.VAR33;
            VAR6->VAR32 += VAR34;
        }
        VAR6->VAR19++;
    }
    else if (!VAR6->VAR18 && VAR11->VAR28 == 1)
    {
        VAR6->VAR21[VAR6->VAR19 - 1].VAR35 = VAR6->VAR32 - VAR6->VAR21[VAR6->VAR19 - 1].VAR31;
    }
    FUN6(VAR2);
    FUN9(VAR9, VAR15->VAR36, 16);
    if (VAR2->VAR37 == &VAR38)
    {
        if (VAR11->VAR23->VAR39 == VAR40)
            FUN10(VAR2, VAR11, VAR4);
        else
            FUN11(VAR2, VAR11, VAR4);
    }
    else
    {
        FUN12(VAR9, VAR4->VAR41);
        FUN9(VAR9, VAR4->VAR42, VAR4->VAR41);
        VAR6->VAR32 += 16 + 4 + VAR4->VAR41 + FUN13(16 + 4 + VAR4->VAR41);
    }
    FUN14(VAR9);
    return 0;
}