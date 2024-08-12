static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    int VAR10 = 0;
    uint32_t VAR11, VAR12;
    uint16_t VAR13;
    if (VAR6->VAR14 == VAR6->VAR15 || VAR9->VAR16)
        return VAR17;
    if (VAR6->VAR18 == 0)
    {
        VAR11 = FUN2(VAR9);
        FUN3(VAR9, 1);
        VAR6->VAR18 = VAR11 - 4;
    }
    VAR12 = FUN2(VAR9);
    FUN3(VAR9, 1);
    VAR13 = FUN4(VAR9);
    FUN3(VAR9, 2);
    if (VAR12 > VAR6->VAR18 || !VAR12)
    {
        FUN5(VAR2, VAR19, "", VAR12, (int)FUN6(VAR9));
        FUN3(VAR9, VAR6->VAR18 - 8);
        VAR6->VAR18 = 0;
    }
    switch (VAR13)
    {
    case VAR20:
    case VAR21:
    case VAR22:
        FUN7(VAR9, -8, VAR23);
        VAR10 += FUN8(VAR9, VAR4, VAR12);
        VAR6->VAR18 -= VAR12;
        if (VAR13 == VAR21 || VAR13 == VAR22)
            VAR6->VAR14++;
        break;
    case VAR24:
        FUN3(VAR9, VAR12 - 8);
        VAR6->VAR18 -= VAR12;
        break;
    default:
        FUN5(VAR2, VAR25, "", VAR13, (int)FUN6(VAR9));
        FUN3(VAR9, VAR12 - 8);
        VAR6->VAR18 -= VAR12;
        break;
    }
    return VAR10;
}