static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR2, VAR2);
    struct VAR7 *VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12, VAR13, VAR14;
    VAR15 *VAR16;
    uint8_t VAR17;
    FUN3(VAR6->VAR18, VAR6->VAR19, VAR4->VAR20 == VAR21, VAR4->VAR17->VAR22, VAR4->VAR23.VAR24);
    if (!FUN4(VAR6, VAR4->VAR20, VAR4->VAR17->VAR22))
    {
        FUN5(VAR6->VAR18, VAR6->VAR19, VAR25);
        return VAR25;
    }
    if (VAR4->VAR20 == VAR21)
    {
        VAR17 = VAR4->VAR17->VAR22 | 0x80;
    }
    else
    {
        VAR17 = VAR4->VAR17->VAR22;
    }
    if (FUN6(VAR6, VAR4->VAR20, VAR4->VAR17->VAR22))
    {
        unsigned int VAR26 = VAR17;
        VAR11 = FUN7(VAR6->VAR27, VAR28, &VAR26);
        if (VAR11 < 0)
        {
            FUN8("");
            FUN5(VAR6->VAR18, VAR6->VAR19, VAR25);
            return VAR25;
        }
        FUN9(VAR6, VAR4->VAR20, VAR4->VAR17->VAR22);
    }
    if (FUN10(VAR6, VAR4->VAR20, VAR4->VAR17->VAR22))
    {
        return FUN11(VAR6, VAR4, VAR4->VAR20 == VAR21);
    }
    VAR14 = 0;
    VAR13 = VAR4->VAR23.VAR23[VAR14].VAR29;
    VAR16 = VAR4->VAR23.VAR23[VAR14].VAR30;
    VAR12 = VAR4->VAR23.VAR24;
    while (VAR12)
    {
        if (VAR13 == 0)
        {
            VAR14++;
            assert(VAR14 < VAR4->VAR23.VAR31);
            VAR13 = VAR4->VAR23.VAR23[VAR14].VAR29;
            VAR16 = VAR4->VAR23.VAR23[VAR14].VAR30;
            assert(VAR13 <= VAR12);
        }
        VAR10 = FUN12(VAR6);
        VAR10->VAR32 = VAR4;
        VAR8 = &VAR10->VAR8;
        VAR8->VAR33 = VAR17;
        VAR8->VAR34 = FUN13(VAR6, VAR4);
        VAR8->VAR35 = VAR6;
        VAR8->VAR36 = VAR16;
        VAR8->VAR37 = VAR13;
        if (VAR8->VAR37 > VAR38)
        {
            VAR8->VAR37 = VAR38;
        }
        VAR16 += VAR8->VAR37;
        VAR13 -= VAR8->VAR37;
        VAR12 -= VAR8->VAR37;
        if (VAR12)
        {
            VAR10->VAR39 = 1;
        }
        FUN14(VAR6->VAR18, VAR6->VAR19, VAR10, VAR8->VAR37, VAR10->VAR39);
        VAR11 = FUN7(VAR6->VAR27, VAR40, VAR8);
        FUN15("", VAR8->VAR33, VAR8->VAR37, VAR10->VAR39, VAR4, VAR10);
        if (VAR11 < 0)
        {
            FUN8("");
            FUN16(VAR10);
            switch (VAR41)
            {
            case VAR42:
                FUN5(VAR6->VAR18, VAR6->VAR19, VAR25);
                return VAR25;
            case VAR43:
            default:
                FUN5(VAR6->VAR18, VAR6->VAR19, VAR44);
                return VAR44;
            }
        }
    }
    return VAR45;
}