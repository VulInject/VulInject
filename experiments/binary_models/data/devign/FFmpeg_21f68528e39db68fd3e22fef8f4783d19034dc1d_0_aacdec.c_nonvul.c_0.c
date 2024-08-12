static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = NULL, *VAR14 = NULL;
    enum RawDataBlockType VAR15, VAR16 = VAR17;
    int VAR18, VAR19;
    int VAR20 = 0, VAR21, VAR22 = 0, VAR23 = 0;
    int VAR24, VAR25 = 0;
    VAR10->VAR26 = VAR3;
    if (FUN2(VAR6, 12) == 0xfff)
    {
        if (FUN3(VAR10, VAR6) < 0)
        {
            FUN4(VAR2, VAR27, "");
            VAR18 = -1;
            goto VAR28;
        }
        if (VAR10->VAR29[1].VAR30.VAR31 > 12)
        {
            FUN4(VAR10->VAR2, VAR27, "", VAR10->VAR29[1].VAR30.VAR31);
            VAR18 = -1;
            goto VAR28;
        }
    }
    if (FUN5(VAR2) < 0)
    {
        VAR18 = -1;
        goto VAR28;
    }
    VAR10->VAR32 = 0;
    while ((VAR15 = FUN6(VAR6, 3)) != VAR17)
    {
        VAR19 = FUN6(VAR6, 4);
        if (VAR15 < VAR33)
        {
            if (!(VAR13 = FUN7(VAR10, VAR15, VAR19)))
            {
                FUN4(VAR10->VAR2, VAR27, "", VAR15, VAR19);
                VAR18 = -1;
                goto VAR28;
            }
            VAR20 = 1024;
        }
        switch (VAR15)
        {
        case VAR34:
            VAR18 = FUN8(VAR10, &VAR13->VAR35[0], VAR6, 0, 0);
            VAR22 = 1;
            VAR25++;
            break;
        case VAR36:
            VAR18 = FUN9(VAR10, VAR6, VAR13);
            VAR22 = 1;
            break;
        case VAR37:
            VAR18 = FUN10(VAR10, VAR6, VAR13);
            break;
        case VAR38:
            VAR18 = FUN8(VAR10, &VAR13->VAR35[0], VAR6, 0, 0);
            VAR22 = 1;
            break;
        case VAR33:
            VAR18 = FUN11(VAR10, VAR6);
            break;
        case VAR39:
        {
            uint8_t VAR40[VAR41 * 4][3];
            int VAR42;
            FUN12(VAR10);
            VAR42 = FUN13(VAR2, &VAR10->VAR29[1].VAR30, VAR40, VAR6);
            if (VAR42 < 0)
            {
                VAR18 = VAR42;
                break;
            }
            if (VAR23)
            {
                FUN4(VAR2, VAR27, "");
            }
            else
            {
                VAR18 = FUN14(VAR10, VAR40, VAR42, VAR43, 1);
                if (!VAR18)
                    VAR10->VAR29[1].VAR30.VAR44 = 0;
                VAR23 = 1;
            }
            break;
        }
        case VAR45:
            if (VAR19 == 15)
                VAR19 += FUN6(VAR6, 8) - 1;
            if (FUN15(VAR6) < 8 * VAR19)
            {
                FUN4(VAR2, VAR27, "" VAR46);
                VAR18 = -1;
                goto VAR28;
            }
            while (VAR19 > 0)
                VAR19 -= FUN16(VAR10, VAR6, VAR19, VAR14, VAR16);
            VAR18 = 0;
            break;
        default:
            VAR18 = -1;
            break;
        }
        VAR14 = VAR13;
        VAR16 = VAR15;
        if (VAR18)
            goto VAR28;
        if (FUN15(VAR6) < 3)
        {
            FUN4(VAR2, VAR27, VAR46);
            VAR18 = -1;
            goto VAR28;
        }
    }
    FUN17(VAR10);
    VAR21 = (VAR10->VAR29[1].VAR30.VAR47 == 1) ? VAR10->VAR29[1].VAR30.VAR48 > VAR10->VAR29[1].VAR30.VAR49 : 0;
    VAR20 <<= VAR21;
    VAR24 = VAR10->VAR50 && VAR25 == 2 && VAR10->VAR29[1].VAR51 == (VAR52 | VAR53);
    if (VAR20)
        VAR10->VAR26->VAR54 = VAR20;
    *VAR4 = !!VAR20;
    if (VAR24)
    {
        if (VAR10->VAR50 == 1)
            ((VAR55 *)VAR3)->VAR3[1] = ((VAR55 *)VAR3)->VAR3[0];
        else if (VAR10->VAR50 == 2)
            ((VAR55 *)VAR3)->VAR3[0] = ((VAR55 *)VAR3)->VAR3[1];
    }
    if (VAR10->VAR29[1].VAR56 && VAR22)
    {
        VAR2->VAR49 = VAR10->VAR29[1].VAR30.VAR49 << VAR21;
        VAR2->VAR57 = VAR20;
        VAR10->VAR29[1].VAR56 = VAR58;
    }
    if (VAR21)
    {
        int VAR59;
        VAR60 *VAR61 = FUN18(VAR8, VAR62, &VAR59);
        if (VAR61 && VAR59 >= 4)
            FUN19(VAR61, 2 * FUN20(VAR61));
    }
    return 0;
VAR28:
    FUN21(VAR10);
    return VAR18;
}