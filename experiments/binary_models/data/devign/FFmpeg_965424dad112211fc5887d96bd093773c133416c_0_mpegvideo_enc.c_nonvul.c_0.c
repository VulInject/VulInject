static int FUN1(VAR1 *VAR2, int VAR3)
{
    if (VAR2->VAR4)
    {
        VAR2->VAR5->VAR6 = VAR2->VAR7.VAR6 = VAR2->VAR4;
        if (!VAR3)
            VAR2->VAR4 = 0;
    }
    else if (!VAR2->VAR8)
    {
        VAR2->VAR5->VAR6 = VAR2->VAR7.VAR6 = FUN2(VAR2, VAR3);
        if (VAR2->VAR7.VAR6 < 0)
            return -1;
    }
    if (VAR2->VAR9)
    {
        switch (VAR2->VAR10)
        {
        case VAR11:
            if (VAR12)
                FUN3(VAR2);
            break;
        case VAR13:
        case VAR14:
        case VAR15:
            if (VAR16 || VAR17)
                FUN4(VAR2);
            break;
        }
        VAR2->VAR18 = VAR2->VAR19[0];
    }
    else
        VAR2->VAR18 = VAR2->VAR7.VAR6;
    FUN5(VAR2);
    return 0;
}