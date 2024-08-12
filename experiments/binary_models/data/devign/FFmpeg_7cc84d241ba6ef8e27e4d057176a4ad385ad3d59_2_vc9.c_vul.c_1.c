static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5.VAR4;
    int VAR6, VAR7 = 0;
    switch (VAR2->VAR5.VAR8)
    {
    case VAR9:
        VAR7 = FUN2(VAR2);
        break;
    case VAR10:
        VAR7 = FUN3(VAR2);
        break;
    case VAR11:
    case VAR12:
        VAR7 = FUN4(VAR2);
        break;
    }
    if (VAR7 < 0)
        return VAR13;
    VAR2->VAR14 = FUN5(VAR4);
    if (VAR2->VAR5.VAR8 == VAR12 || VAR2->VAR5.VAR8 == VAR11)
    {
        VAR2->VAR15 = FUN5(VAR4);
    }
    VAR6 = FUN5(VAR4);
    VAR2->VAR16 = &VAR17[VAR6];
    VAR2->VAR18 = &VAR19[VAR6];
    return 0;
}