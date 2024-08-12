static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, void *VAR6)
{
    VAR7 *VAR8 = VAR6;
    VAR9 *VAR10 = VAR8->VAR10;
    InputButton VAR11;
    if (VAR5->VAR5 == 1 && VAR5->VAR12 == VAR13 && !FUN2() && VAR10->VAR14 != VAR8)
    {
        FUN3(VAR10);
        if (!VAR8->VAR15)
        {
            FUN4(FUN5(VAR10->VAR16), VAR17);
        }
        else
        {
            FUN6(VAR8);
            FUN7(VAR10);
        }
        return VAR17;
    }
    if (VAR5->VAR5 == 1)
    {
        VAR11 = VAR18;
    }
    else if (VAR5->VAR5 == 2)
    {
        VAR11 = VAR19;
    }
    else if (VAR5->VAR5 == 3)
    {
        VAR11 = VAR20;
    }
    else
    {
        return VAR17;
    }
    FUN8(VAR8->VAR21.VAR22.VAR23, VAR11, VAR5->VAR12 == VAR13);
    FUN9();
    return VAR17;
}