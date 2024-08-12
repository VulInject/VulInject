static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6;
    VAR7 *VAR8;
    int VAR9, VAR10, VAR11;
    VAR10 = FUN2(VAR2->VAR12.VAR13.VAR14);
    VAR11 = FUN2(VAR2->VAR12.VAR13.VAR15);
    FUN3("", VAR2->VAR12.VAR13.VAR16, VAR2->VAR12.VAR13.VAR17, VAR10, VAR11, VAR2->VAR12.VAR18);
    if (VAR2->VAR12.VAR13.VAR16 == 0)
    {
        switch (VAR2->VAR12.VAR13.VAR17)
        {
        case VAR19:
            return FUN4(VAR2, VAR10);
        case VAR20:
            return FUN5(VAR2, VAR10 & 0xff);
        }
    }
    if (VAR2->VAR12.VAR13.VAR16 == 1 && VAR2->VAR12.VAR13.VAR17 == VAR21)
        return FUN6(VAR2, VAR11, VAR10);
    VAR8 = FUN7();
    VAR8->VAR22 = VAR2;
    VAR8->VAR23 = VAR4;
    VAR6 = &VAR8->VAR6;
    VAR6->VAR24 = VAR25;
    VAR6->VAR26 = VAR4->VAR27;
    VAR6->VAR28 = &VAR2->VAR12.VAR13;
    VAR6->VAR29 = 8 + VAR2->VAR12.VAR18;
    VAR6->VAR30 = VAR2;
    VAR9 = FUN8(VAR2->VAR31, VAR32, VAR6);
    FUN3("", VAR6->VAR29, VAR8);
    if (VAR9 < 0)
    {
        FUN3("", VAR33);
        FUN9(VAR8);
        switch (VAR33)
        {
        case VAR34:
            return VAR35;
        case VAR36:
        default:
            return VAR37;
        }
    }
    FUN10(VAR4, VAR38, VAR8);
    return VAR39;
}