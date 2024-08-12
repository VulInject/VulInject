static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR11;
    int64_t VAR12;
    uint64_t VAR13;
    unsigned char *VAR14;
    int VAR15;
    if (!VAR6->VAR16)
    {
        VAR6->VAR16 = VAR6->VAR17 = FUN2(VAR11);
        if (VAR6->VAR16 <= 0)
            return VAR18;
        if ((VAR15 = FUN3(&VAR6->VAR19, VAR6->VAR16)) < 0)
            return VAR15;
    }
    else
        FUN4(VAR11, 4);
    VAR6->VAR20 = FUN2(VAR11);
    if (VAR8->VAR21 >= 8)
        FUN4(VAR11, VAR8->VAR21 - 8);
    VAR12 = FUN5(VAR11);
    if (VAR8->VAR22)
        VAR13 = VAR8->VAR22 - VAR12 + VAR8->VAR23 - VAR8->VAR24;
    else
        VAR13 = VAR8->VAR25 - VAR12 + VAR8->VAR23 - VAR8->VAR24;
    if (VAR13 > VAR8->VAR25)
    {
        FUN6(VAR2, VAR26, "" VAR27 "", FUN5(VAR11));
        return VAR28;
    }
    VAR14 = VAR6->VAR19.VAR29 + VAR6->VAR16 - VAR6->VAR17;
    if (VAR13 > VAR6->VAR17 || VAR6->VAR17 <= 0)
        return VAR28;
    if (VAR6->VAR17 > VAR13)
        VAR6->VAR17 -= VAR13;
    else
        VAR6->VAR17 = 0;
    if ((VAR15 = FUN7(VAR11, VAR14, VAR13)) < 0)
        return VAR15;
    if (VAR2->VAR30 && VAR2->VAR31 == 20)
        FUN8(VAR2->VAR30, VAR14, VAR15);
    if (VAR8->VAR22)
        FUN4(VAR11, VAR8->VAR25 - VAR8->VAR22);
    FUN4(VAR11, VAR8->VAR24);
    return 0;
}