static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned int VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12 = NULL;
    VAR13 *VAR14 = NULL;
    VAR15 *VAR16 = NULL;
    if (!VAR6->VAR17)
    {
        return;
    }
    if (VAR2)
    {
        if (VAR6->VAR18 >= VAR6->VAR17)
        {
            FUN2(VAR6->VAR18);
            return;
        }
    }
    switch (VAR2)
    {
    case 0x0:
        VAR6->VAR18 = VAR3;
        FUN3(VAR6->VAR18);
        break;
    case 0x4:
        VAR8 = &VAR6->VAR19[VAR6->VAR18];
        if (VAR3 == 1)
        {
        }
        else if (VAR3 == 3)
        {
        }
        VAR8->VAR20 = VAR3;
        FUN4(VAR6->VAR18, VAR8->VAR20);
        break;
    case 0x8:
        VAR8 = &VAR6->VAR19[VAR6->VAR18];
        VAR8->VAR21 = VAR3;
        FUN5(VAR6->VAR18, VAR8->VAR21);
        VAR10 = FUN6(VAR6->VAR18, VAR8);
        FUN7(VAR10, &VAR22);
        FUN8(VAR10);
        break;
    case 0x14:
        VAR8 = &VAR6->VAR19[VAR6->VAR18];
        if (VAR3 & 2)
        {
            VAR8->VAR23 = false;
            FUN9(VAR6->VAR18);
        }
        else if (VAR3 & 4)
        {
            VAR8->VAR24 = false;
            FUN10(VAR6->VAR18);
        }
        else if (VAR3 & 8)
        {
            if (!VAR8->VAR25)
            {
                FUN11(VAR6->VAR18);
                break;
            }
            VAR12 = FUN12(VAR8->VAR26);
            VAR14 = FUN13(VAR12);
            FUN14(VAR14, VAR12, &VAR16);
            if (VAR16)
            {
                FUN15(VAR6->VAR18);
                FUN16(VAR12->VAR27, FUN17(VAR16), &VAR22);
                break;
            }
            FUN18(VAR6->VAR18);
        }
        break;
    default:
        break;
    }