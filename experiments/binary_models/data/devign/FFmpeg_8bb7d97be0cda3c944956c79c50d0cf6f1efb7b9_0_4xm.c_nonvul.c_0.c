static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    unsigned int VAR10;
    unsigned int VAR11, VAR12;
    int VAR13 = 0;
    unsigned int VAR14;
    int VAR15 = 0;
    unsigned char VAR16[8];
    int VAR17;
    while (!VAR15)
    {
        if ((VAR13 = FUN2(VAR2->VAR9, VAR16, 8)) < 0)
            return VAR13;
        VAR10 = FUN3(&VAR16[0]);
        VAR11 = FUN3(&VAR16[4]);
        if (FUN4(VAR9))
            return FUN5(VAR18);
        switch (VAR10)
        {
        case VAR19:
            VAR6->VAR20++;
            FUN6(VAR9);
            break;
        case VAR21:
        case VAR22:
        case VAR23:
        case VAR24:
        case VAR25:
        case VAR26:
            if (VAR11 + 8 < VAR11 || FUN7(VAR4, VAR11 + 8))
                return FUN5(VAR18);
            VAR4->VAR27 = VAR6->VAR28;
            VAR4->VAR29 = VAR6->VAR20;
            VAR4->VAR30 = FUN8(VAR2->VAR9);
            memcpy(VAR4->VAR31, VAR16, 8);
            VAR13 = FUN2(VAR2->VAR9, &VAR4->VAR31[8], VAR11);
            if (VAR13 < 0)
            {
                FUN9(VAR4);
            }
            else
                VAR15 = 1;
            break;
        case VAR32:
            VAR14 = FUN6(VAR9);
            VAR12 = FUN6(VAR9);
            VAR11 -= 8;
            if (VAR14 < VAR6->VAR33 && VAR6->VAR34[VAR14].VAR35 > 0)
            {
                VAR13 = FUN10(VAR2->VAR9, VAR4, VAR11);
                if (VAR13 < 0)
                    return FUN5(VAR18);
                VAR4->VAR27 = VAR6->VAR34[VAR14].VAR27;
                VAR4->VAR29 = VAR6->VAR34[VAR14].VAR36;
                VAR15 = 1;
                VAR17 = VAR11;
                if (VAR6->VAR34[VAR14].VAR37)
                    VAR17 -= 2 * (VAR6->VAR34[VAR14].VAR35);
                VAR17 /= VAR6->VAR34[VAR14].VAR35;
                if (VAR6->VAR34[VAR14].VAR37)
                {
                    VAR17 *= 2;
                }
                else
                    VAR17 /= (VAR6->VAR34[VAR14].VAR38 / 8);
                VAR6->VAR34[VAR14].VAR36 += VAR17;
            }
            else
            {
                FUN11(VAR9, VAR11, VAR39);
            }
            break;
        default:
            FUN11(VAR9, VAR11, VAR39);
            break;
        }
    }
    return VAR13;
}