static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR5 *VAR7, int VAR8, VAR9 *VAR10, int VAR11, int VAR12)
{
    uint32_t VAR13;
    int VAR14 = 0;
    VAR13 = FUN2(VAR4, VAR15.VAR16, 2, 2);
    if (VAR13 == VAR17 || VAR13 == VAR18)
    {
        VAR10[0].VAR11 = VAR10[0].VAR12 = VAR10[VAR11 / 8 + 2].VAR11 = VAR10[VAR11 / 8 + 2].VAR12 = VAR10[VAR11 / 8 + 3].VAR11 = VAR10[VAR11 / 8 + 3].VAR12 = 0;
    }
    switch (VAR13)
    {
    case VAR17:
        FUN3(VAR6, VAR7, VAR8, VAR11, VAR12);
        break;
    case VAR19:
        VAR14 = FUN4(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10, VAR11, VAR12);
        if (VAR14)
        {
            FUN5(VAR2->VAR20, "", VAR14);
            break;
        }
        VAR14 = FUN6(VAR4, VAR6, VAR8);
        break;
    case VAR21:
        VAR14 = FUN7(VAR2, VAR4, VAR6, VAR7, VAR8, VAR10, VAR11, VAR12);
        if (VAR14)
        {
            FUN5(VAR2->VAR20, "", VAR14);
            break;
        }
        VAR14 = FUN6(VAR4, VAR6, VAR8);
        break;
    case VAR18:
        VAR14 = FUN8(VAR4, VAR6, VAR8);
        break;
    }
    return VAR14;
}