static VAR1 FUN1(VAR2 *VAR3, uint64_t VAR4)
{
    uint64_t VAR5;
    uint64_t VAR6 = VAR4 & VAR7;
    switch (VAR6)
    {
    case VAR8:
        FUN2(VAR9, "" VAR10, (VAR11)FUN3(VAR4));
    case VAR12:
        FUN2(VAR9, "");
        VAR5 = VAR13;
        FUN4(VAR3);
        break;
    case VAR14:
        VAR5 = VAR15;
        FUN5(VAR3, FUN6(VAR4), FUN7(VAR4));
        break;
    default:
        FUN2(VAR16, "");
        VAR5 = 0;
    }
    return VAR5;
}