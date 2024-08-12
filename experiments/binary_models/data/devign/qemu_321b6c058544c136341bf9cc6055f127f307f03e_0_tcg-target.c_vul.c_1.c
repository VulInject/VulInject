static void FUN1(VAR1 *VAR2, TCGCond VAR3, TCGReg VAR4, TCGReg VAR5, int32_t VAR6, int VAR7)
{
    switch (VAR3)
    {
    case VAR8:
    case VAR9:
        break;
    case VAR10:
    case VAR11:
        if (VAR6 != 0)
        {
            FUN2(VAR2, VAR4, VAR5, VAR6, VAR7, VAR12);
        }
        VAR5 = VAR13, VAR6 = VAR4, VAR7 = 0;
        VAR3 = (VAR3 == VAR10 ? VAR9 : VAR8);
        break;
    case VAR14:
    case VAR15:
        if (!VAR7 || VAR6 == 0)
        {
            TCGReg VAR16 = VAR5;
            VAR5 = VAR6;
            VAR6 = VAR16;
            VAR7 = 0;
            VAR3 = FUN3(VAR3);
            break;
        }
    default:
        FUN4(VAR2, VAR5, VAR6, VAR7);
        FUN5(VAR2, VAR4, 0);
        FUN6(VAR2, VAR3, VAR17, VAR4, 1, 1);
        return;
    }
    FUN4(VAR2, VAR5, VAR6, VAR7);
    if (VAR3 == VAR8)
    {
        FUN7(VAR2, VAR4, VAR13, 0, VAR18);
    }
    else
    {
        FUN7(VAR2, VAR4, VAR13, -1, VAR19);
    }
}