static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8, VAR7 *VAR9, int VAR10, VAR11 *VAR12, int VAR13, int VAR14)
{
    uint32_t VAR15;
    int VAR16 = 0;
    VAR15 = FUN2(VAR6, VAR17.VAR18, 2, 2);
    if (VAR15 == VAR19 || VAR15 == VAR20)
    {
        VAR12[0].VAR13 = VAR12[0].VAR14 = VAR12[VAR13 / 8 + 2].VAR13 = VAR12[VAR13 / 8 + 2].VAR14 = VAR12[VAR13 / 8 + 3].VAR13 = VAR12[VAR13 / 8 + 3].VAR14 = 0;
    }
    switch (VAR15)
    {
    case VAR19:
        FUN3(VAR8, VAR9, VAR10, VAR13, VAR14);
        break;
    case VAR21:
        VAR16 = FUN4(VAR4, VAR6, VAR8, VAR9, VAR10, VAR12, VAR13, VAR14);
        if (VAR16 != 0)
        {
            FUN5(VAR2, "", VAR16);
            break;
        }
        VAR16 = FUN6(VAR6, VAR8, VAR10);
        break;
    case VAR22:
        VAR16 = FUN7(VAR4, VAR6, VAR8, VAR9, VAR10, VAR12, VAR13, VAR14);
        if (VAR16 != 0)
        {
            FUN5(VAR2, "", VAR16);
            break;
        }
        VAR16 = FUN6(VAR6, VAR8, VAR10);
        break;
    case VAR20:
        VAR16 = FUN8(VAR6, VAR8, VAR10);
        break;
    }
    return VAR16;
}