static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = VAR3->VAR6;
    uint32_t VAR7 = 0xFFFFFFFF;
    switch (VAR4)
    {
    case VAR8:
        VAR7 = VAR6->FUN2(VAR6);
        VAR7 |= (1 << VAR9);
        VAR7 |= (1 << VAR10);
        VAR7 |= (1 << VAR11);
        break;
    case VAR12:
        VAR7 = VAR6->VAR13;
        break;
    case VAR14:
        VAR7 = FUN3(VAR6, VAR6->VAR15) >> VAR16;
        break;
    case VAR17:
        VAR7 = FUN4(VAR6, VAR6->VAR15);
        break;
    case VAR18:
        VAR7 = VAR6->VAR15;
        break;
    case VAR19:
        VAR7 = VAR6->VAR20;
        break;
    case VAR21:
        VAR7 = VAR6->VAR22;
        VAR6->VAR22 = 0;
        FUN5(VAR3->VAR23.VAR24[0], 0);
        break;
    case VAR25:
        VAR7 = VAR6->VAR26;
        break;
    case VAR27:
        VAR7 = FUN6(VAR6, VAR6->VAR15);
        break;
    default:
        break;
    }
    return VAR7;
}