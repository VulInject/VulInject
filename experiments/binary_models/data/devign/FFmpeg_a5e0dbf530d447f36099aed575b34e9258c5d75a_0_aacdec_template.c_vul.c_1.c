static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = NULL, *VAR14 = NULL;
    enum RawDataBlockType VAR15, VAR16 = VAR17;
    int VAR18, VAR19;
    int VAR20 = 0, VAR21, VAR22 = 0, VAR23 = 0;
    int VAR24, VAR25 = 0;
    int VAR26;
    VAR10->VAR27 = VAR3;
    if (FUN2(VAR6, 12) == 0xfff)
    {
        if ((VAR18 = FUN3(VAR10, VAR6)) < 0)
        {
            FUN4(VAR2, VAR28, "");
            goto VAR29;
        }
        if (VAR10->VAR30[1].VAR31.VAR32 > 12)
        {
            FUN4(VAR10->VAR2, VAR28, "", VAR10->VAR30[1].VAR31.VAR32);
            VAR18 = VAR33;
            goto VAR29;
        }
    }
    if ((VAR18 = FUN5(VAR2)) < 0)
        goto VAR29;
    VAR10->VAR2->VAR34 = VAR10->VAR30[1].VAR31.VAR35 - 1;
    VAR26 = FUN6(VAR6);
    VAR10->VAR36 = 0;
    while ((VAR15 = FUN7(VAR6, 3)) != VAR17)
    {
        VAR19 = FUN7(VAR6, 4);
        if (VAR2->VAR37 & VAR38)
            FUN4(VAR2, VAR39, "", VAR15, VAR19);
        if (!VAR2->VAR40 && VAR15 != VAR41)
        {
            VAR18 = VAR33;
            goto VAR29;
        }
        if (VAR15 < VAR42)
        {
            if (!(VAR13 = FUN8(VAR10, VAR15, VAR19)))
            {
                FUN4(VAR10->VAR2, VAR28, "", VAR15, VAR19);
                VAR18 = VAR33;
                goto VAR29;
            }
            VAR20 = 1024;
            VAR13->VAR43 = 1;
        }
        switch (VAR15)
        {
        case VAR44:
            VAR18 = FUN9(VAR10, &VAR13->VAR45[0], VAR6, 0, 0);
            VAR22 = 1;
            VAR25++;
            break;
        case VAR46:
            VAR18 = FUN10(VAR10, VAR6, VAR13);
            VAR22 = 1;
            break;
        case VAR47:
            VAR18 = FUN11(VAR10, VAR6, VAR13);
            break;
        case VAR48:
            VAR18 = FUN9(VAR10, &VAR13->VAR45[0], VAR6, 0, 0);
            VAR22 = 1;
            break;
        case VAR42:
            VAR18 = FUN12(VAR10, VAR6);
            break;
        case VAR41:
        {
            uint8_t VAR49[VAR50 * 4][3];
            int VAR51;
            FUN13(VAR10);
            VAR51 = FUN14(VAR2, &VAR10->VAR30[1].VAR31, VAR49, VAR6, VAR26);
            if (VAR51 < 0)
            {
                VAR18 = VAR51;
                break;
            }
            if (VAR23)
            {
                FUN4(VAR2, VAR28, "");
                FUN15(VAR10);
            }
            else
            {
                VAR18 = FUN16(VAR10, VAR49, VAR51, VAR52, 1);
                if (!VAR18)
                    VAR10->VAR30[1].VAR31.VAR53 = 0;
                VAR23 = 1;
            }
            break;
        }
        case VAR54:
            if (VAR19 == 15)
                VAR19 += FUN7(VAR6, 8) - 1;
            if (FUN17(VAR6) < 8 * VAR19)
            {
                FUN4(VAR2, VAR28, "" VAR55);
                VAR18 = VAR33;
                goto VAR29;
            }
            while (VAR19 > 0)
                VAR19 -= FUN18(VAR10, VAR6, VAR19, VAR14, VAR16);
            VAR18 = 0;
            break;
        default:
            VAR18 = VAR56;
            break;
        }
        if (VAR15 < VAR42)
        {
            VAR14 = VAR13;
            VAR16 = VAR15;
        }
        if (VAR18)
            goto VAR29;
        if (FUN17(VAR6) < 3)
        {
            FUN4(VAR2, VAR28, VAR55);
            VAR18 = VAR33;
            goto VAR29;
        }
    }
    if (!VAR2->VAR40)
    {
        *VAR4 = 0;
        return 0;
    }
    VAR21 = (VAR10->VAR30[1].VAR31.VAR57 == 1) ? VAR10->VAR30[1].VAR31.VAR58 > VAR10->VAR30[1].VAR31.VAR59 : 0;
    VAR20 <<= VAR21;
    FUN19(VAR10, VAR20);
    if (VAR10->VAR30[1].VAR60 && VAR22)
    {
        VAR2->VAR59 = VAR10->VAR30[1].VAR31.VAR59 << VAR21;
        VAR2->VAR61 = VAR20;
        VAR10->VAR30[1].VAR60 = VAR62;
    }
    if (VAR21)
        VAR2->VAR63->VAR64 = 2;
    if (!VAR10->VAR27->VAR3[0] && VAR20)
    {
        FUN4(VAR2, VAR28, "");
        VAR18 = VAR33;
        goto VAR29;
    }
    if (VAR20)
    {
        VAR10->VAR27->VAR65 = VAR20;
        VAR10->VAR27->VAR59 = VAR2->VAR59;
    }
    else
        FUN20(VAR10->VAR27);
    *VAR4 = !!VAR20;
    VAR24 = VAR10->VAR66 && VAR25 == 2 && VAR10->VAR30[1].VAR67 == (VAR68 | VAR69);
    if (VAR24)
    {
        if (VAR10->VAR66 == 1)
            ((VAR70 *)VAR3)->VAR3[1] = ((VAR70 *)VAR3)->VAR3[0];
        else if (VAR10->VAR66 == 2)
            ((VAR70 *)VAR3)->VAR3[0] = ((VAR70 *)VAR3)->VAR3[1];
    }
    return 0;
VAR29:
    FUN15(VAR10);
    return VAR18;
}