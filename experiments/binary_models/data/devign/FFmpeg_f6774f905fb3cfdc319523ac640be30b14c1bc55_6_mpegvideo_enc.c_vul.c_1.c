static int FUN1(VAR1 *VAR2, int VAR3)
{
    if (VAR2->VAR4)
    {
        VAR2->VAR5->VAR6.VAR7 = VAR2->VAR8.VAR6.VAR7 = VAR2->VAR4;
        if (!VAR3)
            VAR2->VAR4 = 0;
    }
    else if (!VAR2->VAR9)
    {
        VAR2->VAR5->VAR6.VAR7 = VAR2->VAR8.VAR6.VAR7 = FUN2(VAR2, VAR3);
        if (VAR2->VAR8.VAR6.VAR7 < 0)
            return -1;
    }
    if (VAR2->VAR10)
    {
        switch (VAR2->VAR11)
        {
        case VAR12:
            if (VAR13)
                FUN3(VAR2);
            break;
        case VAR14:
        case VAR15:
        case VAR16:
            if (VAR17)
                FUN4(VAR2);
            break;
        default:
            FUN5(VAR2);
        }
        VAR2->VAR18 = VAR2->VAR19[0];
    }
    else
        VAR2->VAR18 = VAR2->VAR8.VAR6.VAR7;
    FUN6(VAR2);
    return 0;
}