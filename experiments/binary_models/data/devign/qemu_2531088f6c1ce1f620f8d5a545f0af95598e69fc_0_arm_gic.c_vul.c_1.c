void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    int VAR5;
    int VAR6, VAR7;
    int VAR8;
    int VAR9;
    for (VAR8 = 0; VAR8 < VAR2->VAR10; VAR8++)
    {
        VAR9 = 1 << VAR8;
        VAR2->VAR11[VAR8] = 1023;
        if (!(VAR2->VAR12 & (VAR13 | VAR14)) || !(VAR2->VAR15[VAR8] & (VAR16 | VAR17)))
        {
            FUN2(VAR2->VAR18[VAR8]);
            FUN2(VAR2->VAR19[VAR8]);
            continue;
        }
        VAR4 = 0x100;
        VAR3 = 1023;
        for (VAR5 = 0; VAR5 < VAR2->VAR20; VAR5++)
        {
            if (FUN3(VAR5, VAR9) && FUN4(VAR2, VAR5, VAR9) && (VAR5 < VAR21 || FUN5(VAR5) & VAR9))
            {
                if (FUN6(VAR5, VAR8) < VAR4)
                {
                    VAR4 = FUN6(VAR5, VAR8);
                    VAR3 = VAR5;
                }
            }
        }
        if (VAR3 != 1023)
        {
            FUN7(VAR8, VAR3, VAR4, VAR2->VAR22[VAR8], VAR2->VAR23[VAR8]);
        }
        VAR6 = VAR7 = 0;
        if (VAR4 < VAR2->VAR22[VAR8])
        {
            VAR2->VAR11[VAR8] = VAR3;
            if (VAR4 < VAR2->VAR23[VAR8])
            {
                int VAR24 = FUN8(VAR3, VAR9);
                if (FUN9(VAR2->VAR12, VAR24, 1) && FUN9(VAR2->VAR15[VAR8], VAR24, 1))
                {
                    if (VAR24 == 0 && VAR2->VAR15[VAR8] & VAR25)
                    {
                        FUN10("", VAR3, VAR8);
                        VAR7 = 1;
                    }
                    else
                    {
                        FUN10("", VAR3, VAR8);
                        VAR6 = 1;
                    }
                }
            }
        }
        FUN11(VAR2->VAR18[VAR8], VAR6);
        FUN11(VAR2->VAR19[VAR8], VAR7);
    }