static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    for (;;)
    {
        int VAR9, VAR10 = 0;
        uint16_t VAR11;
        int VAR12;
        if (FUN2(&VAR2->VAR13) < 2)
        {
            FUN3(VAR2->VAR14, VAR15, "");
            break;
        }
        VAR11 = FUN4(&VAR2->VAR13);
        VAR12 = FUN5(&VAR2->VAR13);
        if (VAR11 == VAR16)
            break;
        if (FUN2(&VAR2->VAR13) < 2)
            return VAR17;
        VAR9 = FUN4(&VAR2->VAR13);
        switch (VAR11)
        {
        case VAR18:
            VAR10 = FUN6(VAR2);
            break;
        case VAR19:
            VAR10 = FUN7(VAR2, VAR4, VAR8);
            break;
        case VAR20:
            VAR10 = FUN8(VAR2, VAR4, VAR8);
            break;
        case VAR21:
            VAR10 = FUN9(VAR2, VAR9, VAR6, VAR8);
            break;
        case VAR22:
            VAR10 = FUN10(VAR2, VAR9, VAR6, VAR8);
            break;
        case VAR23:
            VAR10 = FUN11(VAR2, VAR9);
            break;
        case VAR24:
            FUN12(&VAR2->VAR13, VAR9 - 2);
            break;
        case VAR25:
            VAR10 = FUN13(VAR2, VAR9);
            break;
        default:
            FUN3(VAR2->VAR14, VAR15, "", VAR11, FUN5(&VAR2->VAR13) - 4);
            FUN12(&VAR2->VAR13, VAR9 - 2);
            break;
        }
        if (((FUN5(&VAR2->VAR13) - VAR12 != VAR9) && (VAR11 != VAR23)) || VAR10)
        {
            FUN3(VAR2->VAR14, VAR15, "", VAR11);
            return VAR10 ? VAR10 : -1;
        }
    }
    return 0;
}