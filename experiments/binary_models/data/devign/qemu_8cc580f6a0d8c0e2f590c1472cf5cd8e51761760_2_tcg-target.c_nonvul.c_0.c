static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, bool VAR5)
{
    TCGReg VAR6, VAR7, VAR8;
    TCGReg VAR9 FUN2((VAR10));
    TCGMemOpIdx VAR11;
    TCGMemOp VAR12;
    int VAR13;
    VAR14 *VAR15[2];
    VAR6 = *VAR4++;
    VAR7 = (VAR16 == 32 && VAR5 ? *VAR4++ : 0);
    VAR8 = *VAR4++;
    VAR9 = (VAR17 > VAR16 ? *VAR4++ : 0);
    VAR11 = *VAR4++;
    VAR12 = FUN3(VAR11);
    VAR13 = FUN4(VAR11);
    FUN5(VAR2, VAR8, VAR9, VAR13, VAR12, VAR15, FUN6(VAR18, VAR19));
    FUN7(VAR2, VAR6, VAR7, VAR20, -1, 0, 0, VAR12);
    FUN8(VAR2, true, VAR11, VAR6, VAR7, VAR8, VAR9, VAR2->VAR21, VAR15);
    {
        int32_t VAR22 = VAR23;
        TCGReg VAR24 = VAR8;
        int VAR25 = -1;
        int VAR26 = 0;
        if (VAR23 == 0 || VAR27)
        {
            VAR26 = VAR27;
            VAR22 = 0;
            if (VAR16 > VAR17)
            {
                VAR26 |= VAR28;
            }
        }
        else if (VAR16 == 64)
        {
            if (VAR17 == 32)
            {
                FUN9(VAR2, VAR29, VAR24);
                VAR24 = VAR29;
            }
            if (VAR22 != VAR23)
            {
                FUN10(VAR2, VAR30, VAR20, VAR23);
                VAR25 = VAR20;
                VAR22 = 0;
            }
        }
        FUN7(VAR2, VAR6, VAR7, VAR24, VAR25, VAR22, VAR26, VAR12);
    }
}