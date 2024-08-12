void FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    int VAR4 = 0;
    VAR5 *VAR6 = FUN2(VAR2->VAR6);
    VAR7 *VAR8 = &VAR6->VAR8;
    FUN3(FUN4(VAR2), VAR2->VAR9.VAR10, VAR2->VAR9.VAR11, VAR2->VAR9.VAR12);
    if (VAR2->VAR9.VAR11 == VAR13 && !FUN5(VAR8, VAR14))
    {
        VAR2->VAR9.VAR11 = VAR15;
    }
    if (FUN6(VAR2))
    {
        bool VAR16;
        switch (VAR2->VAR9.VAR11)
        {
        case VAR15:
            VAR16 = true;
            break;
        case VAR13:
            VAR16 = (!FUN7(VAR8) || (FUN8(VAR8) == 3 && FUN9(VAR8, 3)));
            break;
        case VAR17:
            VAR16 = FUN7(VAR8);
            break;
        default:
            FUN10();
        }
        if (VAR16)
        {
            VAR4 = 1;
        }
        else
        {
            VAR3 = 1;
        }
    }
    FUN11(FUN4(VAR2), VAR4, VAR3);
    FUN12(VAR2->VAR18, VAR4);
    FUN12(VAR2->VAR19, VAR3);