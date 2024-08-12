static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR6;
    int VAR7;
    unsigned int VAR8, VAR9, VAR10, VAR11;
    FUN2(VAR6);
    VAR8 = FUN2(VAR6);
    VAR9 = FUN3(VAR6);
    VAR10 = -VAR9 & 511;
    VAR11 = VAR9 - 8;
    if (VAR8 > VAR12 || VAR8 == VAR13)
    {
        FUN4(VAR2, VAR14, "");
        return FUN5(VAR15);
    }
    if (VAR9 > VAR16 || VAR9 <= 8)
    {
        FUN4(VAR2, VAR14, "", VAR9);
        return FUN5(VAR15);
    }
    if ((VAR7 = FUN6(VAR6, VAR4, VAR11)) <= 0)
        return FUN5(VAR15);
    FUN7(VAR6, VAR10);
    switch (VAR8)
    {
    case VAR17:
        VAR4->VAR18 = VAR19;
    case VAR20:
    case VAR21:
        VAR4->VAR22 = 0;
        break;
    case VAR12:
        VAR4->VAR22 = 1;
        break;
    }
    return VAR7;
}