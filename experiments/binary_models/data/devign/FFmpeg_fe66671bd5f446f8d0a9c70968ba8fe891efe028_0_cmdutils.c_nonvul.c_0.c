static void FUN1(const VAR1 *VAR2)
{
    int VAR3 = FUN2(VAR2);
    FUN3("", VAR3 ? "" : "", VAR2->VAR4, VAR2->VAR5 ? VAR2->VAR5 : "");
    FUN3("");
    if (VAR2->VAR6 & VAR7)
        FUN3("");
    if (VAR2->VAR6 & VAR8)
        FUN3("");
    if (VAR2->VAR6 & VAR9)
        FUN3("");
    if (VAR2->VAR6 & VAR10)
        FUN3("");
    if (VAR2->VAR6 & VAR11)
        FUN3("");
    if (VAR2->VAR6 & VAR12)
        FUN3("");
    if (VAR2->VAR6 & VAR13)
        FUN3("");
    if (VAR2->VAR6 & VAR14)
        FUN3("");
    if (VAR2->VAR6 & VAR15)
        FUN3("");
    if (VAR2->VAR6 & VAR16)
        FUN3("");
    if (VAR2->VAR6 & (VAR17 | VAR18 | VAR19))
        FUN3("");
    if (!VAR2->VAR6)
        FUN3("");
    FUN3("");
    if (VAR2->VAR20 == VAR21)
    {
        FUN3("");
        switch (VAR2->VAR6 & (VAR17 | VAR18 | VAR19))
        {
        case VAR17 | VAR18:
            FUN3("");
            break;
        case VAR17:
            FUN3("");
            break;
        case VAR18:
            FUN3("");
            break;
        case VAR19:
            FUN3("");
            break;
        default:
            FUN3("");
            break;
        }
        FUN3("");
    }
    if (VAR2->VAR22)
    {
        const VAR23 *VAR24 = VAR2->VAR22;
        FUN3("");
        while (VAR24->VAR25)
        {
            FUN3("", VAR24->VAR25, VAR24->VAR26);
            VAR24++;
        }
        FUN3("");
    }
    FUN4(VAR2, VAR27, enum VAR28, "", VAR29, VAR30);
    FUN4(VAR2, VAR31, int, "", 0, VAR32);
    FUN4(VAR2, VAR33, enum VAR34, "", VAR35, VAR36);
    FUN4(VAR2, VAR37, VAR38, "", 0, VAR39);
    if (VAR2->VAR40)
    {
        FUN5(VAR2->VAR40, VAR41 | VAR42);
    }
}