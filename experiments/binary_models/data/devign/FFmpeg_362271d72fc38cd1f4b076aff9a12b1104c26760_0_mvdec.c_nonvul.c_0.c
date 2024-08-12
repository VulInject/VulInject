static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR12[VAR6->VAR13];
    const VAR14 *VAR15;
    int VAR16 = VAR6->VAR16[VAR6->VAR13];
    int VAR17;
    uint64_t VAR18;
    if (VAR16 < VAR11->VAR19)
    {
        VAR15 = &VAR11->VAR20[VAR16];
        VAR18 = FUN2(VAR9);
        if (VAR15->VAR18 > VAR18)
            FUN3(VAR9, VAR15->VAR18 - VAR18);
        else if (VAR15->VAR18 < VAR18)
        {
            if (!VAR9->VAR21)
                return FUN4(VAR22);
            VAR17 = FUN5(VAR9, VAR15->VAR18, VAR23);
            if (VAR17 < 0)
                return VAR17;
        }
        VAR17 = FUN6(VAR9, VAR4, VAR15->VAR24);
        if (VAR17 < 0)
            return VAR17;
        VAR4->VAR13 = VAR6->VAR13;
        VAR4->VAR25 = VAR15->VAR26;
        VAR4->VAR27 |= VAR28;
        VAR6->VAR16[VAR6->VAR13]++;
        VAR6->VAR29 = 0;
    }
    else
    {
        VAR6->VAR29++;
        if (VAR6->VAR29 >= VAR2->VAR30)
            return VAR31;
    }
    VAR6->VAR13++;
    if (VAR6->VAR13 >= VAR2->VAR30)
        VAR6->VAR13 = 0;
    return 0;
}