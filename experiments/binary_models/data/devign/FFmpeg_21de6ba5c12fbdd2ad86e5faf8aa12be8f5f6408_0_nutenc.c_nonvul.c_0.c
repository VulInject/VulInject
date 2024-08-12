static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = VAR6->VAR12;
    unsigned VAR13 = FUN2(VAR14, VAR12->VAR15);
    FUN3(VAR4, VAR7);
    switch (VAR12->VAR16)
    {
    case VAR17:
        FUN3(VAR4, 0);
        break;
    case VAR18:
        FUN3(VAR4, 1);
        break;
    case VAR19:
        FUN3(VAR4, 2);
        break;
    default:
        FUN3(VAR4, 3);
        break;
    }
    FUN3(VAR4, 4);
    if (!VAR13 || VAR12->VAR15 == VAR20)
        VAR13 = VAR12->VAR13;
    if (VAR13)
    {
        FUN4(VAR4, VAR13);
    }
    else
    {
        FUN5(VAR2, VAR21, "", VAR7);
        return FUN6(VAR22);
    }
    FUN3(VAR4, VAR9->VAR23[VAR7].VAR24 - VAR9->VAR24);
    FUN3(VAR4, VAR9->VAR23[VAR7].VAR25);
    FUN3(VAR4, VAR9->VAR23[VAR7].VAR26);
    FUN3(VAR4, VAR12->VAR27);
    FUN7(VAR4, 0);
    FUN3(VAR4, VAR12->VAR28);
    FUN8(VAR4, VAR12->VAR29, VAR12->VAR28);
    switch (VAR12->VAR16)
    {
    case VAR18:
        FUN3(VAR4, VAR12->VAR30);
        FUN3(VAR4, 1);
        FUN3(VAR4, VAR12->VAR31);
        break;
    case VAR17:
        FUN3(VAR4, VAR12->VAR32);
        FUN3(VAR4, VAR12->VAR33);
        if (VAR6->VAR34.VAR35 <= 0 || VAR6->VAR34.VAR36 <= 0)
        {
            FUN3(VAR4, 0);
            FUN3(VAR4, 0);
        }
        else
        {
            FUN3(VAR4, VAR6->VAR34.VAR35);
            FUN3(VAR4, VAR6->VAR34.VAR36);
        }
        FUN3(VAR4, 0);
        break;
    default:
        break;
    }
    return 0;
}