static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    AVRational VAR7 = {0, 0};
    unsigned VAR8 = 8, VAR9 = 16;
    int VAR10;
    int VAR11, VAR12;
    if (FUN2(VAR4))
    {
        VAR6->VAR13 = FUN3(VAR4);
        VAR6->VAR14 = FUN3(VAR4);
    }
    if (FUN2(VAR4))
        VAR6->VAR15 = FUN3(VAR4);
    if (VAR6->VAR15 > 2U)
    {
        FUN4(VAR2, VAR16, "", VAR6->VAR15);
        return VAR17;
    }
    if (FUN2(VAR4))
        VAR6->VAR18 = FUN3(VAR4);
    if (VAR6->VAR18 > 1U)
        return VAR17;
    if (FUN2(VAR4))
    {
        VAR6->VAR19 = FUN3(VAR4);
        if (VAR6->VAR19 > 10U)
            return VAR17;
        if (!VAR6->VAR19)
        {
            VAR7.VAR20 = FUN3(VAR4);
            VAR7.VAR21 = FUN3(VAR4);
        }
    }
    if (VAR6->VAR19 > 0)
    {
        if (VAR6->VAR19 <= 8)
            VAR7 = VAR22[VAR6->VAR19];
        else
            VAR7 = VAR23[VAR6->VAR19 - 9];
    }
    FUN5(&VAR2->VAR24.VAR20, &VAR2->VAR24.VAR21, VAR7.VAR21, VAR7.VAR20, 1 << 30);
    if (FUN2(VAR4))
    {
        VAR6->VAR25 = FUN3(VAR4);
        if (VAR6->VAR25 > 6U)
            return VAR17;
        if (!VAR6->VAR25)
        {
            VAR2->VAR26.VAR20 = FUN3(VAR4);
            VAR2->VAR26.VAR21 = FUN3(VAR4);
        }
    }
    if (VAR6->VAR25 > 0)
        VAR2->VAR26 = VAR27[VAR6->VAR25 - 1];
    if (FUN2(VAR4))
    {
        VAR6->VAR28 = FUN3(VAR4);
        VAR6->VAR29 = FUN3(VAR4);
        VAR6->VAR30 = FUN3(VAR4);
        VAR6->VAR31 = FUN3(VAR4);
    }
    if (FUN2(VAR4))
    {
        VAR6->VAR32 = FUN3(VAR4);
        if (VAR6->VAR32 > 4U)
            return VAR17;
        if (!VAR6->VAR32)
        {
            VAR9 = FUN3(VAR4);
            VAR8 = FUN6(FUN3(VAR4)) + 1;
            FUN3(VAR4);
            FUN3(VAR4);
            VAR2->VAR33 = VAR9 ? VAR34 : VAR35;
        }
    }
    if (VAR6->VAR32 > 0)
    {
        VAR10 = VAR6->VAR32 - 1;
        VAR8 = VAR36[VAR10].VAR37;
        VAR2->VAR33 = VAR36[VAR10].VAR33;
    }
    if (VAR8 > 8)
        FUN4(VAR2, VAR38, "");
    VAR2->VAR39 = VAR40[!VAR9][VAR6->VAR15];
    FUN7(VAR2->VAR39, &VAR11, &VAR12);
    if ((VAR6->VAR13 % (1 << VAR11)) || (VAR6->VAR14 % (1 << VAR12)))
    {
        FUN4(VAR2, VAR16, "");
        return VAR17;
    }
    if (FUN2(VAR4))
    {
        VAR10 = VAR6->VAR41 = FUN3(VAR4);
        if (VAR6->VAR41 > 4U)
            return VAR17;
        VAR2->VAR42 = VAR43[VAR10].VAR42;
        VAR2->VAR44 = VAR43[VAR10].VAR44;
        VAR2->VAR45 = VAR43[VAR10].VAR45;
        if (!VAR6->VAR41)
        {
            if (FUN2(VAR4))
            {
                VAR10 = FUN3(VAR4);
                if (VAR10 < 3U)
                    VAR2->VAR42 = VAR46[VAR10];
            }
            if (FUN2(VAR4))
            {
                VAR10 = FUN3(VAR4);
                if (!VAR10)
                    VAR2->VAR44 = VAR47;
                else if (VAR10 == 1)
                    VAR2->VAR44 = VAR48;
            }
            if (FUN2(VAR4) && !FUN3(VAR4))
                VAR2->VAR45 = VAR49;
        }
    }
    else
    {
        VAR10 = VAR6->VAR41;
        VAR2->VAR42 = VAR43[VAR10].VAR42;
        VAR2->VAR44 = VAR43[VAR10].VAR44;
        VAR2->VAR45 = VAR43[VAR10].VAR45;
    }
    return 0;
}