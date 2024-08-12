static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, int VAR12)
{
    int VAR13;
    VAR13 = 1;
    VAR13 = 0;
    if (!VAR6)
    {
    VAR14:
        FUN2(VAR2);
        return;
    }
    if (VAR3 == 32 && VAR3 == VAR2->VAR4 * 8 && VAR13 == VAR5 && VAR7 == 0xff && VAR8 == 0xff && VAR9 == 0xff && VAR10 == 16 && VAR11 == 8 && VAR12 == 0)
    {
        VAR2->VAR4 = 4;
        VAR2->VAR15 = VAR16;
        VAR2->VAR17 = VAR18;
    }
    else if (VAR3 == 16 && VAR3 == VAR2->VAR4 * 8 && VAR13 == VAR5 && VAR7 == 31 && VAR8 == 63 && VAR9 == 31 && VAR10 == 11 && VAR11 == 5 && VAR12 == 0)
    {
        VAR2->VAR4 = 2;
        VAR2->VAR15 = VAR16;
        VAR2->VAR17 = VAR19;
    }
    else if (VAR3 == 8 && VAR3 == VAR2->VAR4 * 8 && VAR7 == 7 && VAR8 == 7 && VAR9 == 3 && VAR10 == 5 && VAR11 == 2 && VAR12 == 0)
    {
        VAR2->VAR4 = 1;
        VAR2->VAR15 = VAR16;
        VAR2->VAR17 = VAR20;
    }
    else
    {
        if (VAR3 != 8 && VAR3 != 16 && VAR3 != 32)
            goto VAR14;
        if (VAR2->VAR4 == 4)
        {
            VAR2->VAR17 = VAR21;
        }
        else if (VAR2->VAR4 == 2)
        {
            VAR2->VAR17 = VAR22;
        }
        else
        {
            VAR2->VAR17 = VAR23;
        }
        VAR2->VAR24 = VAR5;
        VAR2->VAR15 = VAR25;
    }
    VAR2->VAR26 = VAR10;
    VAR2->VAR27 = VAR7;
    VAR2->VAR28 = VAR11;
    VAR2->VAR29 = VAR8;
    VAR2->VAR30 = VAR12;
    VAR2->VAR31 = VAR9;
    VAR2->VAR32 = VAR3 / 8;
    FUN3();
    FUN4();
}