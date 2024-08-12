static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int *VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    const VAR11 *VAR12 = (const VAR11 *)VAR6->VAR13[0];
    int VAR14, VAR15;
    if ((VAR15 = FUN2(VAR2, VAR4, VAR16)) < 0)
        return VAR15;
    if (VAR9->VAR17 != VAR2->VAR18)
    {
        VAR9->VAR19 = FUN3(VAR2->VAR18, VAR2);
        VAR9->VAR17 = VAR2->VAR18;
    }
    VAR14 = FUN4(VAR9->VAR20, VAR9->VAR19, VAR12, VAR4->VAR13, VAR9->VAR21);
    if (VAR14 <= 0 || VAR14 > VAR16)
    {
        FUN5(VAR2, VAR22, "");
        return FUN6(VAR23);
    }
    if (VAR6->VAR24 != VAR25)
        VAR4->VAR24 = VAR6->VAR24 - FUN7(VAR2, VAR2->VAR26);
    VAR4->VAR14 = VAR14;
    *VAR7 = 1;
    return 0;
}