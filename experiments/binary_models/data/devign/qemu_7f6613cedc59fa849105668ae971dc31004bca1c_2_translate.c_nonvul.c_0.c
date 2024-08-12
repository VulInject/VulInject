static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9)
{
    int VAR10 = VAR2->VAR11 & (0xff << VAR12);
    TCGv VAR13 = FUN2();
    FUN3(VAR13, VAR6);
    if ((VAR2->VAR14 & (1 << VAR15)) == 0 && ((VAR2->VAR16[VAR10].VAR17 & (0xf << VAR18)) != (VAR2->VAR19.VAR17 & (0xf << VAR18))))
        ;
    else if ((VAR2->VAR11 & (0xff << VAR12)) > (VAR2->VAR20->VAR21 & (0xff << VAR22)))
        ;
    else if (VAR7 == 0)
    {
        switch (VAR5)
        {
        case 1:
            switch (VAR8)
            {
            case 1:
                FUN4(VAR23, VAR13);
                break;
            case 2:
                FUN5(VAR23, VAR13);
                break;
            default:
                goto VAR24;
                break;
            }
            break;
        case 2:
            switch (VAR8)
            {
            case 1:
                FUN6(VAR23, VAR13);
                break;
            case 2:
                FUN7(VAR23, VAR13);
                break;
            case 3:
                FUN8(VAR23, VAR13);
                break;
            case 4:
                FUN9(VAR23, VAR13);
                break;
            case 5:
                FUN10(VAR23, VAR13);
                break;
            case 6:
                FUN11(VAR23, VAR13);
                break;
            case 7:
                FUN12(VAR23, VAR13);
                break;
            default:
                FUN13(VAR4, VAR13, VAR5, VAR8);
                break;
            }
            break;
        case 10:
            switch (VAR8)
            {
            case 0:
                FUN14(VAR23, VAR13);
                break;
            default:
                FUN13(VAR4, VAR13, VAR5, VAR8);
                break;
            }
        case 12:
            switch (VAR8)
            {
            case 0:
                FUN15(VAR23, VAR13);
                break;
            default:
                FUN13(VAR4, VAR13, VAR5, VAR8);
                break;
            }
        case 13:
            switch (VAR8)
            {
            case 0:
                FUN16(VAR23, VAR13);
                break;
            default:
                goto VAR24;
                break;
            }
            break;
        case 15:
            switch (VAR8)
            {
            case 1:
                FUN17(VAR23, VAR13);
                break;
            default:
                goto VAR24;
                break;
            }
            break;
        case 23:
            switch (VAR8)
            {
            case 0:
                FUN18(VAR23, VAR13);
                break;
            default:
                FUN13(VAR4, VAR13, VAR5, VAR8);
                break;
            }
            break;
        default:
            FUN13(VAR4, VAR13, VAR5, VAR8);
        }
    }
    else
        switch (VAR8)
        {
        case 0:
            FUN19(VAR25, VAR13, VAR5);
            break;
        case 1:
            switch (VAR5)
            {
            case 0:
                FUN19(VAR26, VAR13, 0);
                break;
            case 1:
                FUN19(VAR27, VAR13, 0);
                break;
            case 2:
                FUN19(VAR28, VAR13, 0);
                break;
            case 4:
                FUN19(VAR26, VAR13, 1);
                break;
            case 5:
                FUN19(VAR27, VAR13, 1);
                break;
            case 6:
                FUN19(VAR28, VAR13, 1);
                break;
            case 8:
                FUN19(VAR26, VAR13, 2);
                break;
            case 9:
                FUN19(VAR27, VAR13, 2);
                break;
            case 10:
                FUN19(VAR28, VAR13, 2);
                break;
            case 12:
                FUN19(VAR26, VAR13, 3);
                break;
            case 13:
                FUN19(VAR27, VAR13, 3);
                break;
            case 14:
                FUN19(VAR28, VAR13, 3);
                break;
            case 16:
                FUN20(VAR23, VAR13);
                break;
            default:
                goto VAR24;
            }
            break;
        case 2:
            if (VAR9 == 0)
            {
                TCGv_i32 VAR29 = FUN21();
                FUN22(VAR29, VAR13);
                FUN23(VAR29, VAR5);
                FUN24(VAR29);
            }
            else
            {
                TCGv_i32 VAR29 = FUN21();
                FUN22(VAR29, VAR13);
                FUN25(VAR4, VAR29, VAR5);
                FUN24(VAR29);
            }
            break;
        case 3:
        {
            TCGv_i32 VAR30 = FUN26(VAR5);
            FUN27(VAR31, VAR13, VAR30, VAR6);
            FUN24(VAR30);
        }
        break;
        case 4:
        case 5:
        default:
            goto VAR24;
        }
    FUN28("", VAR5, VAR7, VAR8, VAR9);
    FUN29(VAR13);
    return;
VAR24:
    FUN29(VAR13);
    FUN28("", VAR5, VAR7, VAR8, VAR9);
    FUN30(VAR4, VAR32);
}