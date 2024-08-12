static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    struct VAR4 *VAR5 = VAR2->VAR6;
    VAR3 = 1;
    VAR3 = 0;
    switch (FUN2(VAR2))
    {
    case 8:
        VAR5->VAR7 = 1;
        VAR5->VAR8 = 7;
        VAR5->VAR9 = 7;
        VAR5->VAR10 = 3;
        VAR5->VAR11 = 5;
        VAR5->VAR12 = 2;
        VAR5->VAR13 = 0;
        break;
    case 16:
        VAR5->VAR7 = 2;
        VAR5->VAR8 = 31;
        VAR5->VAR9 = 63;
        VAR5->VAR10 = 31;
        VAR5->VAR11 = 11;
        VAR5->VAR12 = 5;
        VAR5->VAR13 = 0;
        break;
    case 32:
        VAR5->VAR7 = 4;
        VAR5->VAR8 = 255;
        VAR5->VAR9 = 255;
        VAR5->VAR10 = 255;
        VAR5->VAR11 = 16;
        VAR5->VAR12 = 8;
        VAR5->VAR13 = 0;
        break;
    default:
        return;
    }
    if (VAR5->VAR14 != -1 && VAR5->VAR15)
    {
        FUN3(VAR5, 0);
        FUN3(VAR5, 0);
        FUN4(VAR5, 1);
        FUN5(VAR5, 0, 0, FUN6(VAR2), FUN7(VAR2), 0x574D5669);
        FUN8(VAR5);
        FUN9(VAR5);
    }
    else
    {
        if (VAR5->VAR16 == 4 && VAR5->VAR7 == 4 && VAR3 == VAR5->VAR17 && VAR5->VAR18 == 0xff && VAR5->VAR19 == 0xff && VAR5->VAR20 == 0xff && VAR5->VAR21 == 16 && VAR5->VAR22 == 8 && VAR5->VAR23 == 0)
        {
            VAR5->VAR24 = VAR25;
            VAR5->VAR26 = VAR27;
        }
        else if (VAR5->VAR16 == 2 && VAR5->VAR7 == 2 && VAR3 == VAR5->VAR17 && VAR5->VAR18 == 31 && VAR5->VAR19 == 63 && VAR5->VAR20 == 31 && VAR5->VAR21 == 11 && VAR5->VAR22 == 5 && VAR5->VAR23 == 0)
        {
            VAR5->VAR24 = VAR25;
            VAR5->VAR26 = VAR28;
        }
        else if (VAR5->VAR16 == 1 && VAR5->VAR7 == 1 && VAR3 == VAR5->VAR17 && VAR5->VAR18 == 7 && VAR5->VAR19 == 7 && VAR5->VAR20 == 3 && VAR5->VAR21 == 5 && VAR5->VAR22 == 2 && VAR5->VAR23 == 0)
        {
            VAR5->VAR24 = VAR25;
            VAR5->VAR26 = VAR29;
        }
        else
        {
            if (VAR5->VAR7 == 4)
            {
                VAR5->VAR26 = VAR30;
            }
            else if (VAR5->VAR7 == 2)
            {
                VAR5->VAR26 = VAR31;
            }
            else
            {
                VAR5->VAR26 = VAR32;
            }
            VAR5->VAR24 = VAR33;
        }
    }
}