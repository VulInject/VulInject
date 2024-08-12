static void FUN1(VAR1 *VAR2)
{
    unsigned int VAR3;
    switch (VAR2->VAR4)
    {
    case VAR5:
        VAR2->VAR6 = 0;
        break;
    case VAR7:
        VAR2->VAR8 = VAR2->VAR9;
        VAR2->VAR6 = 0;
        FUN2(VAR2, VAR2->VAR10);
        FUN2(VAR2, VAR2->VAR11);
        FUN2(VAR2, '');
        if (VAR12[VAR2->VAR11].VAR13 & VAR14)
        {
            FUN2(VAR2, (VAR2->VAR15 == 2) ? 0x55 : 0x15);
        }
        else
        {
            FUN2(VAR2, 0xc0);
        }
        break;
    case VAR16:
    case VAR17:
        if (!(VAR12[VAR2->VAR11].VAR13 & VAR14))
            break;
        VAR3 = VAR2->VAR18 & ((1 << VAR2->VAR19) - 1);
        VAR2->FUN3(VAR2, VAR2->VAR18, VAR3);
        if (VAR2->VAR20)
            VAR2->VAR6 = (1 << VAR2->VAR21) - VAR3;
        else
            VAR2->VAR6 = (1 << VAR2->VAR21) + (1 << VAR2->VAR22) - VAR3;
        break;
    case VAR23:
        FUN4(&VAR2->VAR24.VAR25);
        break;
    case VAR26:
        VAR2->VAR8 = VAR2->VAR9;
        VAR2->VAR6 = 0;
        break;
    case VAR27:
        if (VAR2->VAR28)
        {
            VAR2->FUN5(VAR2);
        }
        break;
    case VAR29:
        break;
    case VAR30:
        VAR2->VAR18 &= (1ull << VAR2->VAR31 * 8) - 1;
        if (VAR12[VAR2->VAR11].VAR13 & VAR14)
            VAR2->VAR18 <<= 16;
        else
            VAR2->VAR18 <<= 8;
        if (VAR2->VAR28)
        {
            VAR2->FUN6(VAR2);
        }
        break;
    case VAR32:
        VAR2->VAR8 = VAR2->VAR9;
        VAR2->VAR6 = 0;
        FUN2(VAR2, VAR2->VAR33);
        break;
    default:
        FUN7("", VAR34, VAR2->VAR4);
    }
}