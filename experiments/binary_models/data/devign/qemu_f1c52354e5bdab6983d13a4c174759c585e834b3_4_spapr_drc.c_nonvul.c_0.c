static bool FUN1(void *VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    VAR4 *VAR5 = FUN2(VAR3);
    bool VAR6 = false;
    sPAPRDREntitySense VAR7 = VAR5->FUN3(VAR3);
    if (VAR7 != VAR8)
    {
        return false;
    }
    switch (FUN4(VAR3))
    {
    case VAR9:
    case VAR10:
    case VAR11:
        VAR6 = !((VAR3->VAR12 == VAR13) && (VAR3->VAR14 == VAR15) && VAR3->VAR16);
        break;
    case VAR17:
    case VAR18:
    default:
        FUN5();
    }
    return VAR6;
}