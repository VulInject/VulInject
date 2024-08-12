static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, int16_t VAR6)
{
    TCGv VAR7 = FUN2();
    TCGv VAR8 = FUN2();
    int VAR9 = VAR2->VAR9;
    FUN3(VAR2, VAR7, VAR5, VAR6);
    FUN4(VAR8, VAR4);
    switch (VAR3)
    {
    case VAR10:
        FUN5(VAR8, VAR7, VAR9, VAR11 | VAR2->VAR12);
        break;
    case VAR13:
        FUN6(VAR14, VAR8, VAR7, VAR9);
        break;
    case VAR15:
        FUN6(VAR16, VAR8, VAR7, VAR9);
        break;
    case VAR17:
        FUN5(VAR8, VAR7, VAR9, VAR18 | VAR2->VAR12);
        break;
    case VAR19:
        FUN5(VAR8, VAR7, VAR9, VAR20 | VAR2->VAR12);
        break;
    case VAR21:
        FUN5(VAR8, VAR7, VAR9, VAR22);
        break;
    case VAR23:
        FUN6(VAR24, VAR8, VAR7, VAR9);
        break;
    case VAR25:
        FUN6(VAR26, VAR8, VAR7, VAR9);
        break;
    }
    FUN7(VAR7);
    FUN7(VAR8);