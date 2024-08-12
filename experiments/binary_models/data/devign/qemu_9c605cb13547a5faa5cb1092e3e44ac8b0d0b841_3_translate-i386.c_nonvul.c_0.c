static void FUN1(VAR1 *VAR2, int VAR3, int *VAR4, int *VAR5)
{
    int VAR6;
    int VAR7, VAR8;
    int VAR9;
    int VAR10;
    int VAR11;
    int VAR12, VAR13, VAR14, override, VAR15;
    override = VAR2->override;
    VAR15 = VAR2->VAR16;
    if (override >= 0)
        VAR15 = 1;
    VAR12 = (VAR3 >> 6) & 3;
    VAR13 = VAR3 & 7;
    if (VAR2->VAR17)
    {
        VAR6 = 0;
        VAR7 = VAR13;
        VAR9 = 0;
        VAR10 = 0;
        if (VAR7 == 4)
        {
            VAR6 = 1;
            VAR14 = FUN2(VAR2->VAR18++);
            VAR10 = (VAR14 >> 6) & 3;
            VAR9 = (VAR14 >> 3) & 7;
            VAR7 = VAR14 & 7;
        }
        switch (VAR12)
        {
        case 0:
            if (VAR7 == 5)
            {
                VAR7 = -1;
                VAR8 = FUN3(VAR2->VAR18);
                VAR2->VAR18 += 4;
            }
            else
            {
                VAR8 = 0;
            }
            break;
        case 1:
            VAR8 = (VAR19)FUN2(VAR2->VAR18++);
            break;
        default:
        case 2:
            VAR8 = FUN3(VAR2->VAR18);
            VAR2->VAR18 += 4;
            break;
        }
        if (VAR7 >= 0)
        {
            VAR20[VAR7]();
            if (VAR8 != 0)
                FUN4(VAR8);
        }
        else
        {
            FUN5(VAR8);
        }
        if (VAR6 && (VAR9 != 4 || VAR10 != 0))
        {
            VAR21[VAR10][VAR9]();
        }
        if (VAR15)
        {
            if (override < 0)
            {
                if (VAR7 == VAR22 || VAR7 == VAR23)
                    override = VAR24;
                else
                    override = VAR25;
            }
            FUN6(FUN7(VAR26, VAR27[override].VAR7));
        }
    }
    else
    {
        switch (VAR12)
        {
        case 0:
            if (VAR13 == 6)
            {
                VAR8 = FUN8(VAR2->VAR18);
                VAR2->VAR18 += 2;
                FUN5(VAR8);
                VAR13 = 0;
                goto VAR28;
            }
            else
            {
                VAR8 = 0;
            }
            break;
        case 1:
            VAR8 = (VAR19)FUN2(VAR2->VAR18++);
            break;
        default:
        case 2:
            VAR8 = FUN8(VAR2->VAR18);
            VAR2->VAR18 += 2;
            break;
        }
        switch (VAR13)
        {
        case 0:
            VAR20[VAR29]();
            VAR21[0][VAR30]();
            break;
        case 1:
            VAR20[VAR29]();
            VAR21[0][VAR31]();
            break;
        case 2:
            VAR20[VAR22]();
            VAR21[0][VAR30]();
            break;
        case 3:
            VAR20[VAR22]();
            VAR21[0][VAR31]();
            break;
        case 4:
            VAR20[VAR30]();
            break;
        case 5:
            VAR20[VAR31]();
            break;
        case 6:
            VAR20[VAR22]();
            break;
        default:
        case 7:
            VAR20[VAR29]();
            break;
        }
        if (VAR8 != 0)
            FUN4(VAR8);
        FUN9();
    VAR28:
        if (VAR15)
        {
            if (override < 0)
            {
                if (VAR13 == 2 || VAR13 == 3 || VAR13 == 6)
                    override = VAR24;
                else
                    override = VAR25;
            }
            FUN6(FUN7(VAR26, VAR27[override].VAR7));
        }
    }
    VAR11 = VAR32;
    VAR8 = 0;
    *VAR4 = VAR11;
    *VAR5 = VAR8;
}