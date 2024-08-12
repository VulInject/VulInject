static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    int VAR10, VAR11;
    VAR12 *VAR13 = NULL;
    if (!VAR6->VAR14)
    {
        uint32_t VAR15, VAR16;
        uint8_t VAR17;
        VAR17 = FUN2(VAR9);
        VAR6->VAR18 = VAR17 & VAR19;
        for (VAR11 = 0; VAR11 < VAR6->VAR20; VAR11++)
        {
            if (VAR6->VAR18 == VAR6->VAR21[VAR11]->VAR18)
            {
                VAR13 = &VAR6->VAR21[VAR11]->VAR4;
                VAR13->VAR18 = VAR6->VAR21[VAR11]->VAR22;
                break;
            }
        }
        if (!VAR13)
            return VAR23;
        if (VAR17 >> 7)
            VAR13->VAR24 |= VAR25;
        FUN3(VAR6->VAR26 & VAR27, VAR28, VAR16);
        FUN3(VAR6->VAR26 & VAR29, VAR30, VAR15);
        FUN3(VAR6->VAR26 & VAR31, VAR32, VAR6->VAR33);
        if (VAR13->VAR34 && (VAR13->VAR35 != VAR16))
        {
            FUN4(VAR2, VAR36, "");
            FUN5(VAR13);
        }
        VAR13->VAR35 = VAR16;
        VAR6->VAR37 = VAR15;
        if (VAR6->VAR38)
        {
            if ((VAR10 = FUN6(VAR2, VAR4, VAR13)) < 0)
                return VAR10;
        }
        else if (VAR6->VAR33 == 1)
        {
            VAR6->VAR14 = 1;
            VAR6->VAR39 = VAR40;
            VAR4->VAR24 = VAR13->VAR24;
            if ((VAR10 = FUN7(VAR2, VAR4, 1)) < 0)
                return VAR10;
        }
        else
        {
            if ((VAR10 = FUN8(VAR2, VAR4, VAR13)) < 0)
                return VAR10;
        }
    }
    else
    {
        for (VAR11 = 0; VAR11 <= VAR6->VAR20; VAR11++)
        {
            if (VAR6->VAR18 == VAR6->VAR21[VAR11]->VAR18)
            {
                VAR13 = &VAR6->VAR21[VAR11]->VAR4;
                break;
            }
        }
        if (!VAR13)
            return VAR23;
        VAR4->VAR24 = VAR13->VAR24;
        VAR4->VAR41 = VAR13->VAR41;
        VAR4->VAR18 = VAR6->VAR21[VAR11]->VAR22;
        if ((VAR10 = FUN7(VAR2, VAR4, 0)) < 0)
            return VAR10;
    }
    return 0;
}