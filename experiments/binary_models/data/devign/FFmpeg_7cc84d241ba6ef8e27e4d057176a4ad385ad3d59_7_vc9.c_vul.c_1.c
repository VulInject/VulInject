static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5.VAR4;
    int VAR6 = 0, VAR7;
    switch (VAR2->VAR5.VAR8)
    {
    case VAR9:
        VAR6 = FUN2(VAR2);
        break;
    case VAR10:
        VAR6 = FUN3(VAR2);
        break;
    case VAR11:
    case VAR12:
        break;
    }
    if (VAR6 < 0)
        return VAR13;
    VAR2->VAR14 = FUN4(VAR4);
    if (VAR2->VAR5.VAR8 == VAR12 || VAR2->VAR5.VAR8 == VAR11)
    {
        VAR2->VAR15 = FUN4(VAR4);
    }
    VAR7 = FUN4(VAR4);
    VAR2->VAR16 = &VAR17[VAR7];
    VAR2->VAR18 = &VAR19[VAR7];
    return 0;
}