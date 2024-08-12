static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    struct VAR7 *VAR8 = (struct VAR7 *)VAR2;
    VAR9 *VAR10;
    VAR11 *move;
    VAR3 *VAR12;
    VAR13 *VAR14;
    int VAR15;
    switch (VAR6->VAR16)
    {
    case VAR17:
        VAR10 = VAR6->VAR18.VAR10.VAR19;
        switch (VAR10->VAR20)
        {
        case VAR21:
            FUN2(VAR8, VAR10->VAR22, VAR23);
            break;
        case VAR24:
            FUN2(VAR8, VAR10->VAR22, VAR23 + 1);
            break;
        case VAR25:
            FUN2(VAR8, VAR10->VAR22, VAR23 + 2);
            break;
        case VAR26:
            if (VAR10->VAR22)
            {
                VAR8->VAR27--;
            }
            break;
        case VAR28:
            if (VAR10->VAR22)
            {
                VAR8->VAR27++;
            }
            break;
        default:
            break;
        }
        break;
    case VAR29:
        move = VAR6->VAR18.VAR30.VAR19;
        if (VAR8->VAR31)
        {
            VAR8->VAR32[move->VAR32] = move->VAR33;
        }
        else
        {
            VAR12 = FUN3(0);
            if (!VAR12)
            {
                FUN4(&VAR8->VAR34.VAR35, 0, "");
                return;
            }
            VAR14 = FUN5(VAR12);
            switch (move->VAR32)
            {
            case VAR36:
                VAR15 = FUN6(VAR14) - 1;
                break;
            case VAR37:
                VAR15 = FUN7(VAR14) - 1;
                break;
            default:
                VAR15 = 0x8000;
                break;
            }
            VAR8->VAR32[move->VAR32] = move->VAR33 * VAR15 / 0x7fff;
        }
        break;
    case VAR38:
        move = VAR6->VAR18.VAR39.VAR19;
        VAR8->VAR32[move->VAR32] += move->VAR33;
        break;
    default:
        break;
    }
}