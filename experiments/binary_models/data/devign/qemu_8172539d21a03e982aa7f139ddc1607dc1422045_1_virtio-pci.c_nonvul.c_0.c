static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = VAR3->VAR6;
    uint32_t VAR7 = 0xFFFFFFFF;
    switch (VAR4)
    {
    case VAR8:
        VAR7 = VAR3->VAR9;
        break;
    case VAR10:
        VAR7 = VAR6->VAR11;
        break;
    case VAR12:
        VAR7 = FUN2(VAR6, VAR6->VAR13) >> VAR14;
        break;
    case VAR15:
        VAR7 = FUN3(VAR6, VAR6->VAR13);
        break;
    case VAR16:
        VAR7 = VAR6->VAR13;
        break;
    case VAR17:
        VAR7 = VAR6->VAR18;
        break;
    case VAR19:
        VAR7 = VAR6->VAR20;
        VAR6->VAR20 = 0;
        FUN4(VAR3->VAR21.VAR22[0], 0);
        break;
    case VAR23:
        VAR7 = VAR6->VAR24;
        break;
    case VAR25:
        VAR7 = FUN5(VAR6, VAR6->VAR13);
        break;
    default:
        break;
    }
    return VAR7;
}