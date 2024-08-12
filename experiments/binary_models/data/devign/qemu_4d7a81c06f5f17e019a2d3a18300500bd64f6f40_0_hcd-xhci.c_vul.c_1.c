static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    uint64_t VAR7;
    FUN2("", VAR4->VAR8, VAR4->VAR9);
    VAR4->VAR10 = VAR6->VAR11 >> 2;
    switch (VAR6->VAR11)
    {
    case VAR12:
    case VAR13:
    case VAR14:
    case VAR15:
        VAR4->VAR16 = 0;
        VAR4->VAR17 = false;
        break;
    case VAR18:
    case VAR19:
        VAR4->VAR16 = 1;
        VAR4->VAR17 = true;
        VAR7 = FUN3(VAR2);
        FUN4(VAR2, VAR4, VAR6, VAR7);
        FUN5(VAR2, VAR4, VAR6, VAR7);
        if (VAR4->VAR20)
        {
            return -1;
        }
        break;
    default:
        fprintf(VAR21, ""
                        "",
                VAR6->VAR11, VAR4->VAR10, VAR4->VAR9);
        return -1;
    }
    if (FUN6(VAR4) < 0)
    {
        return -1;
    }
    FUN7(VAR4->VAR22.VAR23->VAR24, &VAR4->VAR22);
    FUN8(VAR4);
    if (!VAR4->VAR25 && !VAR4->VAR20)
    {
        FUN9(VAR2, VAR4->VAR8, VAR4->VAR9, VAR4->VAR26);
    }
    return 0;
}