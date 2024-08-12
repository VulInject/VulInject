static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR2);
    VAR8 *VAR9 = FUN2(VAR8, VAR2, VAR4);
    VAR10 *VAR11 = FUN2(VAR10, VAR12, VAR2->VAR13);
    int VAR14, VAR15;
    bool VAR16;
    VAR6->VAR17 = VAR11->VAR17;
    VAR6->VAR18 = FUN3(VAR19, VAR6);
    VAR16 = VAR9->VAR20 && !FUN4(VAR6->VAR17, 0);
    if (FUN4(VAR6->VAR17, VAR6->VAR21))
    {
        FUN5("", VAR6->VAR21);
        return -1;
    }
    if (VAR6->VAR21 == VAR22)
    {
        if (VAR16)
        {
            VAR6->VAR21 = 0;
        }
        else
        {
            VAR6->VAR21 = FUN6(VAR6->VAR17);
            if (VAR6->VAR21 == VAR22)
            {
                FUN5("");
                return -1;
            }
        }
    }
    VAR15 = FUN7(VAR6->VAR17->VAR23.VAR15);
    if (VAR6->VAR21 >= VAR15)
    {
        FUN5("", VAR15 - 1);
        return -1;
    }
    VAR6->VAR9 = VAR9;
    VAR14 = VAR9->FUN8(VAR6);
    if (VAR14)
    {
        return VAR14;
    }
    if (!FUN9(VAR6->VAR17))
    {
        VAR6->VAR24 = true;
    }
    VAR6->VAR25.VAR26 = 0;
    FUN10(&VAR6->VAR17->VAR27, VAR6, VAR28);
    VAR6->VAR29 = VAR6->VAR17->VAR30[VAR6->VAR21];
    VAR6->VAR31 = VAR6->VAR17->VAR32[VAR6->VAR21];
    FUN11(VAR6->VAR17, VAR6->VAR21);
    FUN12(&VAR6->VAR17->VAR33);
    return VAR14;
}