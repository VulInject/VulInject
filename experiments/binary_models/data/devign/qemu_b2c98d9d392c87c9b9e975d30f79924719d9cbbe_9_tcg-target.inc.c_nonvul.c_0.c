static void FUN1(VAR1 *VAR2, TCGType VAR3, TCGCond VAR4, TCGReg VAR5, TCGReg VAR6, TCGArg VAR7, int VAR8)
{
    int VAR9;
    switch (VAR4)
    {
    case VAR10:
    case VAR11:
    VAR12:
        FUN2(VAR2, VAR3, VAR4, VAR6, VAR7, VAR8, true);
        FUN3(VAR2, VAR3, VAR5, 0);
        FUN4(VAR2, VAR13, VAR14, VAR5, VAR5);
        return;
    case VAR15:
    VAR16:
        FUN5(VAR2, VAR3, VAR17, VAR6);
        if (VAR8)
        {
            FUN3(VAR2, VAR18, VAR5, 0);
            if (VAR3 == VAR19)
            {
                FUN4(VAR2, VAR20, VAR21, VAR17, VAR7);
            }
            else
            {
                FUN4(VAR2, VAR20, VAR22, VAR17, VAR7);
            }
        }
        else
        {
            if (VAR3 == VAR19)
            {
                FUN4(VAR2, VAR23, VAR24, VAR17, VAR7);
            }
            else
            {
                FUN4(VAR2, VAR13, VAR25, VAR17, VAR7);
            }
            FUN3(VAR2, VAR18, VAR5, 0);
        }
        FUN4(VAR2, VAR13, VAR14, VAR5, VAR5);
        return;
    case VAR26:
    case VAR27:
    case VAR28:
        if (VAR8)
        {
            FUN3(VAR2, VAR3, VAR17, VAR7);
            VAR7 = VAR6;
            VAR8 = 0;
            VAR6 = VAR17;
        }
        else
        {
            TCGReg VAR29 = VAR6;
            VAR6 = VAR7;
            VAR7 = VAR29;
        }
        if (VAR4 == VAR26)
        {
            goto VAR16;
        }
        VAR4 = FUN6(VAR4);
        goto VAR12;
    case VAR30:
        if (VAR8 && VAR7 == 0)
        {
            VAR4 = VAR10;
            goto VAR12;
        }
        break;
    case VAR31:
        if (VAR8 && VAR7 == 0)
        {
            FUN3(VAR2, VAR18, VAR17, 0);
            VAR7 = VAR6;
            VAR8 = 0;
            VAR6 = VAR17;
            goto VAR16;
        }
        break;
    default:
        break;
    }
    VAR9 = FUN2(VAR2, VAR3, VAR4, VAR6, VAR7, VAR8, false);
    if (VAR32 & VAR33)
    {
        FUN3(VAR2, VAR18, VAR5, 0);
        FUN3(VAR2, VAR18, VAR17, 1);
        FUN4(VAR2, VAR34, VAR35, VAR5, VAR17, VAR9);
    }
    else
    {
        FUN3(VAR2, VAR3, VAR5, 1);
        FUN4(VAR2, VAR36, VAR37, VAR9, (4 + 4) >> 1);
        FUN3(VAR2, VAR3, VAR5, 0);
    }
}