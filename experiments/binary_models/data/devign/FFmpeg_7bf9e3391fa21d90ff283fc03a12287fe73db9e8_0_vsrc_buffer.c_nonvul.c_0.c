int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5, AVRational VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11;
    int VAR12;
    if (!VAR4)
    {
        VAR8->VAR13 = 1;
        return 0;
    }
    else if (VAR8->VAR13)
        return FUN2(VAR14);
    if (!FUN3(VAR8->VAR15) && (VAR12 = FUN4(VAR8->VAR15, FUN5(VAR8->VAR15) + sizeof(VAR11))) < 0)
        return VAR12;
    FUN6(VAR2, VAR8, VAR4->VAR16, VAR4->VAR17, VAR4->VAR18);
    VAR11 = FUN7(VAR2->VAR19[0], VAR20, VAR8->VAR21, VAR8->VAR22);
    FUN8(VAR11->VAR23, VAR11->VAR24, VAR4->VAR23, VAR4->VAR24, VAR8->VAR25, VAR8->VAR21, VAR8->VAR22);
    FUN9(VAR11, VAR4);
    VAR11->VAR5 = VAR5;
    VAR11->VAR26->VAR6 = VAR6;
    if ((VAR12 = FUN10(VAR8->VAR15, &VAR11, sizeof(VAR11), NULL)) < 0)
    {
        FUN11(VAR11);
        return VAR12;
    }
    return 0;
}