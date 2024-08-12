static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR9;
    unsigned int VAR10;
    unsigned int VAR11, VAR12;
    int VAR13 = 0;
    int VAR14;
    int VAR15 = 0;
    unsigned char VAR16[8];
    int64_t VAR17;
    int VAR18;
    while (!VAR15)
    {
        if ((VAR13 = FUN2(&VAR2->VAR9, VAR16, 8)) < 0)
            return VAR13;
        VAR10 = FUN3(&VAR16[0]);
        VAR11 = FUN3(&VAR16[4]);
        if (FUN4(VAR9))
            return VAR19;
        switch (VAR10)
        {
        case VAR20:
            VAR6->VAR21 += VAR6->VAR22;
            FUN5(VAR9);
            break;
        case VAR23:
        case VAR24:
        case VAR25:
        {
            if (FUN6(VAR4, VAR11 + 8))
                return VAR19;
            VAR4->VAR26 = VAR6->VAR27;
            VAR4->VAR28 = VAR6->VAR21;
            memcpy(VAR4->VAR29, VAR16, 8);
            VAR13 = FUN2(&VAR2->VAR9, &VAR4->VAR29[8], VAR11);
            if (VAR13 < 0)
                FUN7(VAR4);
            else
                VAR15 = 1;
            break;
        }
        case VAR30:
            VAR14 = FUN5(VAR9);
            VAR12 = FUN5(VAR9);
            VAR11 -= 8;
            if (VAR14 == VAR6->VAR31)
            {
                if (FUN6(VAR4, VAR11))
                    return VAR19;
                VAR4->VAR26 = VAR6->VAR32[VAR6->VAR31].VAR26;
                VAR4->VAR28 = VAR6->VAR33;
                VAR13 = FUN2(&VAR2->VAR9, VAR4->VAR29, VAR11);
                if (VAR13 < 0)
                    FUN7(VAR4);
                else
                    VAR15 = 1;
                VAR18 = VAR11;
                if (VAR6->VAR32[VAR6->VAR31].VAR34)
                    VAR18 -= 2 * (VAR6->VAR32[VAR6->VAR31].VAR35);
                VAR18 /= VAR6->VAR32[VAR6->VAR31].VAR35;
                if (VAR6->VAR32[VAR6->VAR31].VAR34)
                    VAR18 *= 2;
                else
                    VAR18 /= (VAR6->VAR32[VAR6->VAR31].VAR36 / 8);
                VAR17 = VAR18;
                VAR17 *= 90000;
                VAR17 /= VAR6->VAR32[VAR6->VAR31].VAR37;
                VAR6->VAR33 += VAR17;
            }
            else
            {
                FUN8(VAR9, VAR11, VAR38);
            }
            break;
        default:
            FUN8(VAR9, VAR11, VAR38);
            break;
        }
    }
    return VAR13;
}