static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    TCGMemOp VAR5 = VAR4->VAR5;
    TCGMemOp VAR6 = VAR5 & VAR7;
    VAR8 **VAR9 = &VAR4->VAR9[0];
    TCGReg VAR10;
    *(VAR11 *)VAR9[0] = (VAR11)(VAR2->VAR12 - VAR9[0] - 4);
    if (VAR13 > VAR14)
    {
        *(VAR11 *)VAR9[1] = (VAR11)(VAR2->VAR12 - VAR9[1] - 4);
    }
    if (VAR14 == 32)
    {
        int VAR15 = 0;
        FUN2(VAR2, VAR16, VAR17, VAR18, VAR15);
        VAR15 += 4;
        FUN2(VAR2, VAR19, VAR4->VAR20, VAR18, VAR15);
        VAR15 += 4;
        if (VAR13 == 64)
        {
            FUN2(VAR2, VAR19, VAR4->VAR21, VAR18, VAR15);
            VAR15 += 4;
        }
        FUN2(VAR2, VAR19, VAR4->VAR22, VAR18, VAR15);
        VAR15 += 4;
        if (VAR6 == VAR23)
        {
            FUN2(VAR2, VAR19, VAR4->VAR24, VAR18, VAR15);
            VAR15 += 4;
        }
        FUN3(VAR2, VAR19, VAR18, VAR15, VAR4->VAR25);
        VAR15 += 4;
        VAR10 = VAR26;
        FUN4(VAR2, VAR19, VAR10, (VAR27)VAR4->VAR28);
        FUN2(VAR2, VAR19, VAR10, VAR18, VAR15);
    }
    else
    {
        FUN5(VAR2, VAR16, VAR29[0], VAR17);
        FUN5(VAR2, (VAR6 == VAR23 ? VAR30 : VAR19), VAR29[2], VAR4->VAR22);
        FUN4(VAR2, VAR19, VAR29[3], VAR4->VAR25);
        if (FUN6(VAR29) > 4)
        {
            VAR10 = VAR29[4];
            FUN4(VAR2, VAR16, VAR10, (VAR27)VAR4->VAR28);
        }
        else
        {
            VAR10 = VAR31;
            FUN4(VAR2, VAR16, VAR10, (VAR27)VAR4->VAR28);
            FUN2(VAR2, VAR16, VAR10, VAR18, 0);
        }
    }
    FUN7(VAR2, VAR10);
    FUN8(VAR2, (VAR27)VAR32[VAR5]);
}