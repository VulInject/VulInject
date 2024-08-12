static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    VAR4 *VAR5;
    VAR6 *VAR7 = FUN2(VAR3->VAR8);
    VAR9 *VAR10;
    drawfn VAR11;
    int VAR12;
    int VAR13;
    int VAR14;
    int VAR15;
    int VAR16;
    if (!FUN3(VAR3))
    {
        return;
    }
    VAR5 = FUN4(VAR3);
    switch (FUN5(VAR7))
    {
    case 0:
        return;
    case 8:
        VAR10 = VAR17;
        VAR12 = 1;
        break;
    case 15:
        VAR10 = VAR18;
        VAR12 = 2;
        break;
    case 16:
        VAR10 = VAR19;
        VAR12 = 2;
        break;
    case 24:
        VAR10 = VAR20;
        VAR12 = 3;
        break;
    case 32:
        VAR10 = VAR21;
        VAR12 = 4;
        break;
    default:
        fprintf(VAR22, "");
        FUN6(1);
    }
    if (VAR3->VAR23 & VAR24)
        VAR14 = 0;
    else
        VAR14 = 24;
    if ((VAR3->VAR25 != VAR26) && (VAR3->VAR27 == VAR28))
    {
        switch (VAR3->VAR29)
        {
        case 3:
            VAR14 = (VAR30 - VAR28);
            break;
        case 1:
            break;
        case 0:
        case 2:
        default:
            VAR14 += (VAR30 - VAR28);
            break;
        }
    }
    if (VAR3->VAR23 & VAR31)
        VAR11 = VAR10[VAR3->VAR27 + 8 + VAR14];
    else if (VAR3->VAR23 & VAR32)
        VAR11 = VAR10[VAR3->VAR27 + 16 + VAR14];
    else
        VAR11 = VAR10[VAR3->VAR27 + VAR14];
    VAR13 = VAR3->VAR33;
    switch (VAR3->VAR27)
    {
    case VAR34:
        VAR13 >>= 3;
        break;
    case VAR35:
        VAR13 >>= 2;
        break;
    case VAR36:
        VAR13 >>= 1;
        break;
    case VAR37:
        break;
    case VAR28:
    case VAR30:
    case VAR38:
        VAR13 <<= 1;
        break;
    case VAR39:
        VAR13 <<= 2;
        break;
    }
    VAR12 *= VAR3->VAR33;
    VAR15 = 0;
    if (VAR3->VAR40)
    {
        FUN7(&VAR3->VAR41, FUN8(VAR5), VAR3->VAR42, VAR3->VAR43, VAR13);
    }
    FUN9(VAR7, &VAR3->VAR41, VAR3->VAR33, VAR3->VAR43, VAR13, VAR12, 0, VAR3->VAR40, VAR11, VAR3->VAR44, &VAR15, &VAR16);
    if (VAR15 >= 0)
    {
        FUN10(VAR3->VAR8, 0, VAR15, VAR3->VAR33, VAR16 - VAR15 + 1);
    }
    VAR3->VAR40 = 0;
}