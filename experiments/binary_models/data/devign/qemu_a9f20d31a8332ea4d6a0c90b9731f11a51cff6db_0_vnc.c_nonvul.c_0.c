static void FUN1(VAR1 *VAR2, VAR3 *VAR4, size_t VAR5)
{
    int VAR6;
    unsigned int VAR7 = 0;
    FUN2(VAR2);
    VAR2->VAR8 = 0;
    VAR2->VAR9 = 0;
    VAR2->VAR10 = 9;
    VAR2->VAR11 = 9;
    VAR2->VAR12 = -1;
    for (VAR6 = VAR5 - 1; VAR6 >= 0; VAR6--)
    {
        VAR7 = VAR4[VAR6];
        switch (VAR7)
        {
        case VAR13:
            VAR2->VAR9 = VAR7;
            break;
        case VAR14:
            VAR2->VAR8 |= VAR15;
            break;
        case VAR16:
            VAR2->VAR8 |= VAR17;
            VAR2->VAR9 = VAR7;
            break;
        case VAR18:
            VAR2->VAR8 |= VAR19;
            VAR2->VAR9 = VAR7;
            break;
        case VAR20:
            VAR2->VAR8 |= VAR21;
            break;
        case VAR22:
            VAR2->VAR8 |= VAR23;
            break;
        case VAR24:
            VAR2->VAR8 |= VAR25;
            break;
        case VAR26:
            FUN3(VAR2);
            break;
        case VAR27:
            FUN4(VAR2);
            break;
        case VAR28:
            VAR2->VAR8 |= VAR29;
            break;
        case VAR30 ... VAR30 + 9:
            VAR2->VAR10 = (VAR7 & 0x0F);
            break;
        case VAR31 ... VAR31 + 9:
            VAR2->VAR11 = (VAR7 & 0x0F);
            break;
        default:
            FUN5("", VAR6, VAR7, VAR7);
            break;
        }
    }
    FUN6(&VAR2->VAR32);
}