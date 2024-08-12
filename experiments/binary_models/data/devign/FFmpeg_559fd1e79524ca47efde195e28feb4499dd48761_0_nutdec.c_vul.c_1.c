static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR2->VAR10;
    int VAR11, VAR12 = 0, VAR13, VAR14;
    int64_t VAR15, VAR16;
    for (;;)
    {
        int64_t VAR17 = FUN2(VAR9);
        uint64_t VAR18 = VAR6->VAR19;
        VAR6->VAR19 = 0;
        if (FUN3(VAR9))
            return -1;
        if (VAR18)
        {
            VAR17 -= 8;
        }
        else
        {
            VAR12 = FUN4(VAR9);
            if (VAR12 == '')
            {
                VAR18 = VAR12;
                for (VAR11 = 1; VAR11 < 8; VAR11++)
                    VAR18 = (VAR18 << 8) + FUN4(VAR9);
            }
        }
        switch (VAR18)
        {
        case VAR20:
        case VAR21:
        case VAR22:
            VAR14 = FUN5(VAR6, VAR9, 0);
            FUN6(VAR9, VAR14, VAR23);
            break;
        case VAR24:
            if (FUN7(VAR6) < 0)
                goto VAR25;
            break;
        case VAR26:
            if (FUN8(VAR6, &VAR15, &VAR16) < 0)
                goto VAR25;
            VAR12 = FUN4(VAR9);
        case 0:
            VAR13 = FUN9(VAR6, VAR4, VAR12);
            if (VAR13 == 0)
                return 0;
            else if (VAR13 == 1)
                break;
        default:
        VAR25:
            FUN10(VAR2, VAR27, "" VAR28 "", VAR17);
            VAR18 = FUN11(VAR9, VAR6->VAR29 + 1);
            if (VAR18 == 0)
                return -1;
            FUN10(VAR2, VAR27, "");
            VAR6->VAR19 = VAR18;
        }
    }
}