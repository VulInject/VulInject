static void FUN1(VAR1 *VAR2)
{
    if (!VAR2->VAR3)
    {
        FUN2(VAR2);
        switch (VAR2->VAR4)
        {
        case VAR5:
            FUN3();
            break;
        case VAR6:
            FUN4();
            break;
        case VAR7:
            FUN5();
            break;
        case VAR8:
        case VAR9:
        case VAR10:
        case VAR11:
        case VAR12:
        case VAR13:
        case VAR14:
            switch (VAR2->VAR15)
            {
            case 4:
                FUN6();
                break;
            case 2:
                FUN7();
                break;
            default:
                FUN8();
                break;
            }
            break;
        case VAR16:
            break;
        case VAR17:
        case VAR18:
            if (VAR2->VAR15 == 4)
                FUN9();
            else
                FUN8();
            break;
        default:
            switch (VAR2->VAR15)
            {
            case 4:
                FUN10();
                break;
            default:
                FUN8();
                break;
            }
            break;
        }
        if (VAR2->VAR19)
        {
            if (VAR2->VAR20)
                FUN11(VAR21[VAR22], VAR21[VAR22], VAR23);
            else
                FUN12(VAR21[VAR22], VAR21[VAR22], ~VAR23);
        }
        VAR2->VAR3 = 1;
    }
}