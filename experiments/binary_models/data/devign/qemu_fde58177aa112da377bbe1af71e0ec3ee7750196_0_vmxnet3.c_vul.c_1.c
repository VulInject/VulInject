static VAR1 FUN1(VAR2 *VAR3)
{
    uint64_t VAR4;
    switch (VAR3->VAR5)
    {
    case VAR6:
        VAR4 = (VAR3->VAR7) ? 0 : -1;
        FUN2("" VAR8, VAR4);
        break;
    case VAR9:
    case VAR10:
    case VAR11:
        VAR4 = 0;
        break;
    case VAR12:
        VAR4 = VAR3->VAR13;
        FUN2("" VAR8, VAR4);
        break;
    case VAR14:
        VAR4 = FUN3(&VAR3->VAR15);
        break;
    case VAR16:
        VAR4 = FUN4(&VAR3->VAR15);
        break;
    case VAR17:
        VAR4 = FUN5(VAR3);
        break;
    case VAR18:
        VAR4 = VAR19;
        break;
    default:
        FUN6("", VAR3->VAR5);
        VAR4 = -1;
        break;
    }
    return VAR4;
}