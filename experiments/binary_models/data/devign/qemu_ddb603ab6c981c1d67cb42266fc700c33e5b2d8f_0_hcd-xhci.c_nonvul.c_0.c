static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    uint64_t VAR7;
    FUN2("", VAR4->VAR8, VAR4->VAR9);
    VAR4->VAR10 = VAR6->VAR11 >> 2;
    switch (VAR6->VAR11)
    {
    case VAR12:
    case VAR13:
        VAR4->VAR14 = 0;
        VAR4->VAR15 = false;
        VAR4->VAR16 = true;
        VAR7 = FUN3(VAR2);
        FUN4(VAR2, VAR4, VAR6, VAR7);
        FUN5(VAR2, VAR4, VAR6, VAR7);
        if (VAR4->VAR17)
        {
            return -1;
        }
        break;
    case VAR18:
    case VAR19:
        VAR4->VAR14 = 0;
        VAR4->VAR15 = false;
        VAR4->VAR16 = false;
        break;
    case VAR20:
    case VAR21:
        VAR4->VAR14 = 1;
        VAR4->VAR15 = true;
        VAR4->VAR16 = true;
        VAR7 = FUN3(VAR2);
        FUN6(VAR2, VAR4, VAR6, VAR7);
        FUN5(VAR2, VAR4, VAR6, VAR7);
        if (VAR4->VAR17)
        {
            return -1;
        }
        break;
    default:
        FUN7("", VAR6->VAR11);
        return -1;
    }
    if (FUN8(VAR4) < 0)
    {
        return -1;
    }
    FUN9(VAR4->VAR22.VAR23->VAR24, &VAR4->VAR22);
    FUN10(VAR4);
    return 0;
}