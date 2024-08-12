static void FUN1(VAR1 *VAR2, TCGType VAR3, TCGCond VAR4, TCGReg VAR5, TCGArg VAR6, int VAR7, VAR8 *VAR9)
{
    int VAR10;
    if (VAR11 & VAR12)
    {
        bool VAR13 = FUN2(VAR4);
        bool VAR14;
        S390Opcode VAR15;
        VAR10 = VAR16[VAR4];
        if (!VAR7)
        {
            VAR15 = (VAR3 == VAR17 ? (VAR13 ? VAR18 : VAR19) : (VAR13 ? VAR20 : VAR21));
            FUN3(VAR2, VAR15, VAR10, VAR5, VAR6, VAR9);
            return;
        }
        if (VAR3 == VAR17)
        {
            if (VAR13)
            {
                VAR15 = VAR22;
                VAR14 = (VAR23)VAR6 == (VAR24)VAR6;
            }
            else
            {
                VAR15 = VAR25;
                VAR14 = (VAR26)VAR6 == (VAR27)VAR6;
            }
        }
        else
        {
            if (VAR13)
            {
                VAR15 = VAR28;
                VAR14 = (VAR29)VAR6 == (VAR24)VAR6;
            }
            else
            {
                VAR15 = VAR30;
                VAR14 = (VAR31)VAR6 == (VAR27)VAR6;
            }
        }
        if (VAR14)
        {
            FUN4(VAR2, VAR15, VAR10, VAR5, VAR6, VAR9);
            return;
        }
    }
    VAR10 = FUN5(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7);
    FUN6(VAR2, VAR10, VAR9);
}