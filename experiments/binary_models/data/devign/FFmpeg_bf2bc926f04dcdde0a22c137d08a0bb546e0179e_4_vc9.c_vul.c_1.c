static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5.VAR4;
    int VAR6 = 0;
    if (VAR2->VAR7)
        VAR2->VAR8 = FUN2(VAR4, 1);
    FUN3(VAR4, 2);
    if (VAR2->VAR9)
        VAR2->VAR10 = FUN2(VAR4, 1);
    VAR2->VAR5.VAR11 = FUN2(VAR4, 1);
    if (VAR2->VAR5.VAR12->VAR13)
    {
        if (!VAR2->VAR5.VAR11)
        {
            if (FUN2(VAR4, 1))
                VAR2->VAR5.VAR11 = VAR14;
            else
                VAR2->VAR5.VAR11 = VAR15;
        }
        else
            VAR2->VAR5.VAR11 = VAR16;
    }
    else
        VAR2->VAR5.VAR11++;
    switch (VAR2->VAR5.VAR11)
    {
    case VAR14:
        VAR6 = FUN4(VAR2);
        break;
    case VAR16:
        VAR6 = FUN5(VAR2);
        break;
    case VAR17:
    case VAR15:
        VAR6 = FUN6(VAR2);
        break;
    }
    if (VAR6 == VAR18)
    {
        FUN7(VAR2->VAR5.VAR12, VAR19, "");
        return VAR6;
    }
    return 0;
}