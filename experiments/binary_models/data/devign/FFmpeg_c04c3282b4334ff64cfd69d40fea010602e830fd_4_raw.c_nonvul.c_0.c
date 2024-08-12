static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    VAR6 = FUN2(VAR2, 0);
    if (!VAR6)
        return VAR8;
    VAR7 = VAR2->VAR9->VAR10;
    if (VAR7 == VAR11)
    {
        VAR6->VAR12->VAR13 = VAR14;
    }
    else
    {
        VAR6->VAR12->VAR13 = VAR15;
    }
    VAR6->VAR12->VAR16 = VAR7;
    switch (VAR6->VAR12->VAR13)
    {
    case VAR15:
        VAR6->VAR12->VAR17 = VAR4->VAR17;
        VAR6->VAR12->VAR18 = VAR4->VAR18;
        FUN3(VAR6, 64, 1, VAR6->VAR12->VAR17);
        break;
    case VAR14:
        FUN3(VAR6, 64, VAR4->VAR19.VAR20, VAR4->VAR19.VAR21);
        VAR6->VAR12->VAR22 = VAR4->VAR22;
        VAR6->VAR12->VAR23 = VAR4->VAR23;
        VAR6->VAR12->VAR24 = VAR4->VAR24;
        if (VAR6->VAR12->VAR24 == VAR25)
            VAR6->VAR12->VAR24 = VAR26;
        break;
    default:
        return -1;
    }
    return 0;
}