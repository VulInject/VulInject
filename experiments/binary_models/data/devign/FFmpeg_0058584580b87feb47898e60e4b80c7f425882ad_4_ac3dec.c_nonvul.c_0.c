static void FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR4.VAR5;
    int VAR6 = VAR2->VAR7;
    float VAR8 = VAR9[VAR2->VAR4.VAR10];
    float VAR11 = VAR12[VAR2->VAR4.VAR13];
    VAR14 *VAR15 = &VAR2->VAR16;
    if (VAR6 == VAR17)
        return;
    switch (VAR3)
    {
    case VAR18:
        switch (VAR6)
        {
        case VAR19:
        case VAR20:
            VAR15->VAR21[0] *= VAR22;
            VAR15->VAR21[1] *= VAR22;
            break;
        }
        break;
    case VAR23:
        switch (VAR6)
        {
        case VAR20:
            VAR15->VAR21[0] *= VAR24;
            break;
        }
        break;
    case VAR25:
        switch (VAR6)
        {
        case VAR19:
            VAR15->VAR21[0] *= VAR24;
            VAR15->VAR21[1] *= VAR24;
            break;
        }
        break;
    case VAR26:
        switch (VAR6)
        {
        case VAR19:
            VAR15->VAR21[0] *= VAR24;
            VAR15->VAR21[2] *= VAR24;
            VAR15->VAR21[1] *= VAR8 * VAR27;
            break;
        case VAR20:
            VAR15->VAR21[1] *= VAR8;
            break;
        }
        break;
    case VAR28:
        switch (VAR6)
        {
        case VAR19:
            VAR15->VAR21[0] *= VAR24;
            VAR15->VAR21[1] *= VAR24;
            VAR15->VAR21[2] *= VAR11 * VAR24;
            break;
        case VAR20:
            VAR15->VAR21[2] *= VAR11 * VAR24;
            break;
        case VAR29:
            VAR15->VAR21[2] *= VAR24;
            break;
        }
        break;
    case VAR30:
        switch (VAR6)
        {
        case VAR19:
            VAR15->VAR21[0] *= VAR24;
            VAR15->VAR21[2] *= VAR24;
            VAR15->VAR21[1] *= VAR8 * VAR27;
            VAR15->VAR21[3] *= VAR11 * VAR24;
            break;
        case VAR20:
            VAR15->VAR21[1] *= VAR8;
            VAR15->VAR21[3] *= VAR11 * VAR24;
            break;
        case VAR29:
            VAR15->VAR21[1] *= VAR24;
            VAR15->VAR21[3] *= VAR24;
            break;
        }
        break;
    case VAR31:
        switch (VAR6)
        {
        case VAR19:
            VAR15->VAR21[0] *= VAR24;
            VAR15->VAR21[1] *= VAR24;
            VAR15->VAR21[2] *= VAR11 * VAR24;
            VAR15->VAR21[3] *= VAR11 * VAR24;
            break;
        case VAR20:
            VAR15->VAR21[2] *= VAR11;
            VAR15->VAR21[3] *= VAR11;
            break;
        case VAR29:
            VAR15->VAR21[2] *= VAR24;
            VAR15->VAR21[3] *= VAR24;
            break;
        }
        break;
    case VAR32:
        switch (VAR6)
        {
        case VAR19:
            VAR15->VAR21[0] *= VAR24;
            VAR15->VAR21[2] *= VAR24;
            VAR15->VAR21[1] *= VAR8 * VAR27;
            VAR15->VAR21[3] *= VAR11 * VAR24;
            VAR15->VAR21[4] *= VAR11 * VAR24;
            break;
        case VAR20:
            VAR15->VAR21[1] *= VAR8;
            VAR15->VAR21[3] *= VAR11;
            VAR15->VAR21[4] *= VAR11;
            break;
        case VAR29:
            VAR15->VAR21[1] *= VAR24;
            VAR15->VAR21[3] *= VAR24;
            VAR15->VAR21[4] *= VAR24;
            break;
        }
        break;
    }
}