static void FUN1(VAR1 *VAR2, uint32_t VAR3, int VAR4, int VAR5, int VAR6, int VAR7)
{
    TCGv VAR8 = FUN2();
    TCGv VAR9 = FUN2();
    FUN3(VAR9, VAR5);
    switch (VAR3)
    {
    case VAR10:
        if (VAR6 + VAR7 > 31)
            goto VAR11;
        FUN4(VAR8, VAR9, VAR6);
        if (VAR7 != 31)
        {
            FUN5(VAR8, VAR8, (1 << (VAR7 + 1)) - 1);
        }
        else
        {
            FUN6(VAR8, VAR8);
        }
        break;
    case VAR12:
        FUN4(VAR8, VAR9, VAR6);
        if (VAR7 != 31)
        {
            FUN5(VAR8, VAR8, (1ULL << (VAR7 + 1 + 32)) - 1);
        }
        break;
    case VAR13:
        FUN4(VAR8, VAR9, VAR6 + 32);
        FUN5(VAR8, VAR8, (1ULL << (VAR7 + 1)) - 1);
        break;
    case VAR14:
        FUN4(VAR8, VAR9, VAR6);
        FUN5(VAR8, VAR8, (1ULL << (VAR7 + 1)) - 1);
        break;
    case VAR15:
        if (VAR6 > VAR7)
            goto VAR11;
        FUN3(VAR8, VAR4);
        FUN7(VAR8, VAR8, VAR9, VAR6, VAR7 - VAR6 + 1);
        FUN6(VAR8, VAR8);
        break;
    case VAR16:
        FUN3(VAR8, VAR4);
        FUN7(VAR8, VAR8, VAR9, VAR6, VAR7 + 32 - VAR6 + 1);
        break;
    case VAR17:
        FUN3(VAR8, VAR4);
        FUN7(VAR8, VAR8, VAR9, VAR6 + 32, VAR7 - VAR6 + 1);
        break;
    case VAR18:
        FUN3(VAR8, VAR4);
        FUN7(VAR8, VAR8, VAR9, VAR6, VAR7 - VAR6 + 1);
        break;
    default:
    VAR11:
        FUN8("");
        FUN9(VAR2, VAR19);
        FUN10(VAR8);
        FUN10(VAR9);
        return;
    }
    FUN11(VAR8, VAR4);
    FUN10(VAR8);
    FUN10(VAR9);
}