static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7;
    int64_t VAR8, VAR9;
    int64_t VAR10 = 0;
    int VAR11 = 0;
    int VAR12 = 0;
    FUN2(VAR4);
    if (VAR2->VAR4->VAR13)
    {
        if (VAR6->VAR14 != 2)
        {
            FUN3(VAR4, VAR6->VAR15);
            FUN2(VAR4);
        }
        if (VAR6->VAR14 && VAR6->VAR16)
        {
            VAR12 = FUN4(VAR2);
            FUN2(VAR4);
        }
        VAR8 = FUN5(VAR4);
        VAR9 = VAR8 - VAR6->VAR15;
        if (VAR6->VAR11 == VAR17 || (VAR6->VAR11 == VAR18 && VAR8 - 8 > VAR19))
        {
            VAR11 = 1;
        }
        else
        {
            FUN6(VAR4, 4, VAR20);
            FUN7(VAR4, (VAR21)(VAR8 - 8));
            FUN6(VAR4, VAR8, VAR20);
            FUN2(VAR4);
        }
        VAR10 = FUN8(VAR6->VAR22 - VAR6->VAR23 + VAR6->VAR24, VAR2->VAR25[0]->VAR26->VAR27 * (VAR28)VAR2->VAR25[0]->VAR29.VAR30, VAR2->VAR25[0]->VAR29.VAR31);
        if (VAR2->VAR25[0]->VAR26->VAR32 != 0x01)
        {
            FUN6(VAR4, VAR6->VAR33, VAR20);
            if (VAR11 || (VAR6->VAR11 == VAR18 && VAR10 > VAR19))
            {
                VAR11 = 1;
                FUN7(VAR4, -1);
            }
            else
            {
                FUN7(VAR4, VAR10);
                FUN6(VAR4, VAR8, VAR20);
                FUN2(VAR4);
            }
        }
        if (VAR11)
        {
            FUN6(VAR4, 0, VAR20);
            FUN9(VAR4, "");
            FUN7(VAR4, -1);
            FUN6(VAR4, VAR6->VAR34 - 8, VAR20);
            FUN9(VAR4, "");
            FUN7(VAR4, 28);
            FUN10(VAR4, VAR8 - 8);
            FUN10(VAR4, VAR9);
            FUN10(VAR4, VAR10);
            FUN7(VAR4, 0);
            FUN6(VAR4, VAR6->VAR15 - 4, VAR20);
            FUN7(VAR4, -1);
            FUN6(VAR4, VAR8, VAR20);
            FUN2(VAR4);
        }
    }
    if (VAR6->VAR14)
        FUN11(VAR2);
    return VAR12;
}