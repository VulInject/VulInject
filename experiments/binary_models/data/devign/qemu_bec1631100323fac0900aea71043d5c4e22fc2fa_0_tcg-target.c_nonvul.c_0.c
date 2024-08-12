static void FUN1(VAR1 *VAR2, TCGCond VAR3, TCGReg VAR4, TCGReg VAR5, VAR6 *VAR7)
{
    static const MIPSInsn VAR8[16] = {
        [VAR9] = VAR10,
        [VAR11] = VAR12,
        [VAR13] = VAR14,
        [VAR15] = VAR16,
    };
    MIPSInsn VAR17 = VAR18;
    MIPSInsn VAR19;
    int VAR20;
    switch (VAR3)
    {
    case VAR21:
        VAR19 = VAR22;
        break;
    case VAR23:
        VAR19 = VAR24;
        break;
    case VAR9:
    case VAR11:
    case VAR13:
    case VAR15:
        if (VAR5 == 0)
        {
            VAR19 = VAR8[VAR3];
            VAR5 = VAR4;
            VAR4 = 0;
            break;
        }
        VAR17 = VAR25;
    case VAR26:
    case VAR27:
    case VAR28:
    case VAR29:
        VAR20 = VAR30[VAR3];
        if (VAR20 & VAR31)
        {
            TCGReg VAR32 = VAR4;
            VAR4 = VAR5;
            VAR5 = VAR32;
        }
        FUN2(VAR2, VAR17, VAR33, VAR4, VAR5);
        VAR19 = (VAR20 & VAR34 ? VAR22 : VAR24);
        VAR4 = VAR33;
        VAR5 = VAR35;
        break;
    default:
        FUN3();
        break;
    }
    FUN4(VAR2, VAR19, VAR4, VAR5);
    if (VAR7->VAR36)
    {
        FUN5(VAR2->VAR37 - 1, VAR7->VAR38.VAR39);
    }
    else
    {
        FUN6(VAR2, VAR2->VAR37 - 1, VAR40, VAR7, 0);
    }
    FUN7(VAR2);
}