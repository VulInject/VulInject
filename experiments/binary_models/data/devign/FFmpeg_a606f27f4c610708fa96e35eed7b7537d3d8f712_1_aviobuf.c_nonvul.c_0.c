static void FUN1(VAR1 *VAR2)
{
    int VAR3 = VAR2->VAR4 ? VAR2->VAR4 : VAR5;
    VAR6 *VAR7 = VAR2->VAR8 - VAR2->VAR9 + VAR3 < VAR2->VAR10 ? VAR2->VAR8 : VAR2->VAR9;
    int VAR11 = VAR2->VAR10 - (VAR7 - VAR2->VAR9);
    if (!VAR2->VAR12 && VAR2->VAR13 >= VAR2->VAR8)
        VAR2->VAR14 = 1;
    if (VAR2->VAR14)
        return;
    if (VAR2->VAR15 && VAR7 == VAR2->VAR9)
    {
        if (VAR2->VAR8 > VAR2->VAR16)
            VAR2->VAR17 = VAR2->FUN2(VAR2->VAR17, VAR2->VAR16, VAR2->VAR8 - VAR2->VAR16);
        VAR2->VAR16 = VAR2->VAR9;
    }
    if (VAR2->VAR12 && VAR2->VAR18 && VAR2->VAR10 > VAR2->VAR18)
    {
        if (VAR7 == VAR2->VAR9 && VAR2->VAR13 != VAR7)
        {
            int VAR19 = FUN3(VAR2, VAR2->VAR18);
            if (VAR19 < 0)
                FUN4(VAR2, VAR20, "");
            VAR2->VAR16 = VAR7 = VAR2->VAR9;
        }
        FUN5(VAR11 >= VAR2->VAR18);
        VAR11 = VAR2->VAR18;
    }
    VAR11 = FUN6(VAR2, VAR7, VAR11);
    if (VAR11 == VAR21)
    {
        VAR2->VAR14 = 1;
    }
    else if (VAR11 < 0)
    {
        VAR2->VAR14 = 1;
        VAR2->VAR22 = VAR11;
    }
    else
    {
        VAR2->VAR23 += VAR11;
        VAR2->VAR13 = VAR7;
        VAR2->VAR8 = VAR7 + VAR11;
        VAR2->VAR24 += VAR11;
    }
}