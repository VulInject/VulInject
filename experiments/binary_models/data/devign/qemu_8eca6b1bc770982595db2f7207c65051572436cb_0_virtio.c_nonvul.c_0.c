static VAR1 FUN1(void *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    uint32_t VAR6 = 0xFFFFFFFF;
    VAR3 -= VAR5->VAR3;
    switch (VAR3)
    {
    case VAR7:
        VAR6 = VAR5->FUN3(VAR5);
        VAR6 |= (1 << VAR8) | (1 << VAR9);
        break;
    case VAR10:
        VAR6 = VAR5->VAR11;
        break;
    case VAR12:
        VAR6 = VAR5->VAR13[VAR5->VAR14].VAR15;
        break;
    case VAR16:
        VAR6 = VAR5->VAR13[VAR5->VAR14].VAR17.VAR18;
        break;
    case VAR19:
        VAR6 = VAR5->VAR14;
        break;
    case VAR20:
        VAR6 = VAR5->VAR21;
        break;
    case VAR22:
        VAR6 = VAR5->VAR23;
        VAR5->VAR23 = 0;
        FUN4(VAR5);
        break;
    default:
        break;
    }
    return VAR6;
}