static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = &VAR12->VAR15;
    int VAR16;
    const VAR7 *VAR17;
    const VAR7 *VAR18;
    VAR19 *VAR20 = VAR3;
    uint32_t VAR21 = -1;
    VAR15->VAR2 = VAR2;
    if (VAR9 == 0)
    {
        if (!VAR15->VAR22 && VAR12->VAR23[0].VAR24.VAR3[0])
        {
            *VAR4 = sizeof(VAR25);
            *VAR20 = *(VAR19 *)&VAR12->VAR23[0];
        }
        return 0;
    }
    VAR18 = VAR8;
    VAR17 = VAR8 + VAR9;
    for (;;)
    {
        VAR18 = FUN2(VAR18, VAR17, &VAR21);
        if (VAR21 & 0xFFFFFE00)
            return FUN3(0, VAR18 - VAR8 - VAR15->VAR26.VAR27);
        VAR16 = (VAR17 - VAR18) * 8;
        switch (VAR21)
        {
        case VAR28:
            FUN4(&VAR15->VAR29, VAR18, VAR16);
            FUN5(VAR12);
            break;
        case VAR30:
            if (!VAR12->VAR31)
            {
                if (VAR12->VAR23[0].VAR24.VAR3[0])
                    VAR2->FUN6(VAR2, (VAR19 *)&VAR12->VAR23[0]);
                if (VAR12->VAR23[1].VAR24.VAR3[0])
                    VAR2->FUN6(VAR2, (VAR19 *)&VAR12->VAR23[1]);
                VAR12->VAR31 = 1;
            }
        case VAR32:
            *VAR4 = 0;
            if (!VAR12->VAR31)
                break;
            FUN4(&VAR15->VAR29, VAR18, VAR16);
            VAR12->VAR21 = VAR21;
            if (FUN7(VAR12))
                break;
            *VAR4 = sizeof(VAR25);
            if (VAR12->VAR33 != VAR34)
            {
                if (VAR12->VAR23[1].VAR24.VAR3[0])
                {
                    *VAR20 = *(VAR19 *)&VAR12->VAR23[1];
                }
                else
                {
                    *VAR4 = 0;
                }
            }
            else
                *VAR20 = *(VAR19 *)&VAR12->VAR20;
            break;
        case VAR35:
            break;
        case VAR36:
            break;
        default:
            if (VAR21 <= VAR37)
            {
                FUN4(&VAR15->VAR29, VAR18, VAR16);
                FUN8(VAR12, &VAR15->VAR29);
            }
            break;
        }
    }
}