static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR9->VAR12;
    int VAR13;
    const VAR5 *VAR14;
    const VAR5 *VAR15;
    VAR16 *VAR17 = VAR3;
    uint32_t VAR18 = -1;
    VAR12->VAR2 = VAR2;
    if (VAR7 == 0)
    {
        if (!VAR12->VAR19 && VAR9->VAR20[0].VAR3[0])
        {
            *VAR4 = sizeof(VAR21);
            *VAR17 = *(VAR16 *)&VAR9->VAR20[0];
        }
        return 0;
    }
    VAR15 = VAR6;
    VAR14 = VAR6 + VAR7;
    for (;;)
    {
        VAR15 = FUN2(VAR15, VAR14, &VAR18);
        if (VAR18 & 0xFFFFFE00)
            return FUN3(0, VAR15 - VAR6 - VAR12->VAR22.VAR23);
        VAR13 = (VAR14 - VAR15) * 8;
        switch (VAR18)
        {
        case VAR24:
            FUN4(&VAR12->VAR25, VAR15, VAR13);
            FUN5(VAR9);
            break;
        case VAR26:
            if (!VAR9->VAR27)
            {
                if (VAR9->VAR20[0].VAR3[0])
                    VAR2->FUN6(VAR2, (VAR16 *)&VAR9->VAR20[0]);
                if (VAR9->VAR20[1].VAR3[0])
                    VAR2->FUN6(VAR2, (VAR16 *)&VAR9->VAR20[1]);
                VAR9->VAR27 = 1;
            }
        case VAR28:
            *VAR4 = 0;
            if (!VAR9->VAR27)
                break;
            FUN4(&VAR12->VAR25, VAR15, VAR13);
            VAR9->VAR18 = VAR18;
            if (FUN7(VAR9))
                break;
            *VAR4 = sizeof(VAR21);
            if (VAR9->VAR29 != VAR30)
            {
                if (VAR9->VAR20[1].VAR3[0])
                {
                    *VAR17 = *(VAR16 *)&VAR9->VAR20[1];
                }
                else
                {
                    *VAR4 = 0;
                }
            }
            else
                *VAR17 = *(VAR16 *)&VAR9->VAR17;
            break;
        case VAR31:
            break;
        case VAR32:
            break;
        default:
            if (VAR18 <= VAR33)
            {
                FUN4(&VAR12->VAR25, VAR15, VAR13);
                FUN8(VAR9, &VAR12->VAR25);
            }
            break;
        }
    }
}