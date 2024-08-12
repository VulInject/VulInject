static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    TCGMemOp VAR5 = VAR4->VAR5;
    TCGReg VAR6;
    VAR7 **VAR8 = &VAR4->VAR8[0];
    *(VAR9 *)VAR8[0] = (VAR9)(VAR2->VAR10 - VAR8[0] - 4);
    if (VAR11 > VAR12)
    {
        *(VAR9 *)VAR8[1] = (VAR9)(VAR2->VAR10 - VAR8[1] - 4);
    }
    if (VAR12 == 32)
    {
        int VAR13 = 0;
        FUN2(VAR2, VAR14, VAR15, VAR16, VAR13);
        VAR13 += 4;
        FUN2(VAR2, VAR17, VAR4->VAR18, VAR16, VAR13);
        VAR13 += 4;
        if (VAR11 == 64)
        {
            FUN2(VAR2, VAR17, VAR4->VAR19, VAR16, VAR13);
            VAR13 += 4;
        }
        FUN3(VAR2, VAR17, VAR16, VAR13, VAR4->VAR20);
        VAR13 += 4;
        FUN3(VAR2, VAR17, VAR16, VAR13, (VAR21)VAR4->VAR22);
    }
    else
    {
        FUN4(VAR2, VAR14, VAR23[0], VAR15);
        FUN5(VAR2, VAR17, VAR23[2], VAR4->VAR20);
        FUN5(VAR2, VAR14, VAR23[3], (VAR21)VAR4->VAR22);
    }
    FUN6(VAR2, (VAR21)VAR24[VAR5 & ~VAR25]);
    VAR6 = VAR4->VAR26;
    switch (VAR5 & VAR27)
    {
    case VAR28:
        FUN7(VAR2, VAR6, VAR29, VAR30);
        break;
    case VAR31:
        FUN8(VAR2, VAR6, VAR29, VAR30);
        break;
    case VAR32:
        FUN9(VAR2, VAR6, VAR29);
        break;
    case VAR33:
    case VAR34:
    case VAR35:
        FUN4(VAR2, VAR17, VAR6, VAR29);
        break;
    case VAR36:
        if (VAR12 == 64)
        {
            FUN4(VAR2, VAR37, VAR6, VAR38);
        }
        else if (VAR6 == VAR39)
        {
            FUN10(VAR2, VAR40 + VAR39, 0, 0, 0);
            FUN4(VAR2, VAR17, VAR4->VAR41, VAR29);
        }
        else
        {
            FUN4(VAR2, VAR17, VAR6, VAR29);
            FUN4(VAR2, VAR17, VAR4->VAR41, VAR39);
        }
        break;
    default:
        FUN11();
    }
    FUN12(VAR2, (VAR21)VAR4->VAR22);
}