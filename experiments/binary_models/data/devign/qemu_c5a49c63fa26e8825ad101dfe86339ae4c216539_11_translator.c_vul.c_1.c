void FUN1(const VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9;
    VAR4->VAR8 = VAR8;
    VAR4->VAR10 = VAR8->VAR11;
    VAR4->VAR12 = VAR4->VAR10;
    VAR4->VAR13 = VAR14;
    VAR4->VAR15 = 0;
    VAR4->VAR16 = VAR6->VAR16;
    VAR9 = VAR4->VAR8->VAR17 & VAR18;
    if (VAR9 == 0)
    {
        VAR9 = VAR18;
    }
    if (VAR9 > VAR19)
    {
        VAR9 = VAR19;
    }
    if (VAR4->VAR16 || VAR20)
    {
        VAR9 = 1;
    }
    VAR9 = VAR2->FUN2(VAR4, VAR6, VAR9);
    FUN3(VAR4->VAR13 == VAR14);
    FUN4();
    FUN5(VAR4->VAR8);
    VAR2->FUN6(VAR4, VAR6);
    FUN3(VAR4->VAR13 == VAR14);
    while (true)
    {
        VAR4->VAR15++;
        VAR2->FUN7(VAR4, VAR6);
        FUN3(VAR4->VAR13 == VAR14);
        if (FUN8(!FUN9(&VAR6->VAR21)))
        {
            VAR22 *VAR23;
            FUN10(VAR23, &VAR6->VAR21, VAR24)
            {
                if (VAR23->VAR11 == VAR4->VAR12)
                {
                    if (VAR2->FUN11(VAR4, VAR6, VAR23))
                    {
                        break;
                    }
                }
            }
            if (VAR4->VAR13 > VAR25)
            {
                break;
            }
        }
        if (VAR4->VAR15 == VAR9 && (VAR4->VAR8->VAR17 & VAR26))
        {
            FUN12();
            VAR2->FUN13(VAR4, VAR6);
            FUN14();
        }
        else
        {
            VAR2->FUN13(VAR4, VAR6);
        }
        if (VAR4->VAR13 != VAR14)
        {
            break;
        }
        if (FUN15() || VAR4->VAR15 >= VAR9)
        {
            VAR4->VAR13 = VAR25;
            break;
        }
    }
    VAR2->FUN16(VAR4, VAR6);
    FUN17(VAR4->VAR8, VAR4->VAR15);
    VAR4->VAR8->VAR27 = VAR4->VAR12 - VAR4->VAR10;
    VAR4->VAR8->VAR28 = VAR4->VAR15;
    if (FUN18(VAR29) && FUN19(VAR4->VAR10))
    {
        FUN20();
        FUN21("");
        VAR2->FUN22(VAR4, VAR6);
        FUN21("");
        FUN23();
    }
}