static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = NULL, *VAR12 = NULL;
    enum RawDataBlockType VAR13, VAR14 = VAR15;
    int VAR16, VAR17;
    int VAR18 = 0, VAR19, VAR20 = 0, VAR21 = 0;
    if (FUN2(VAR6, 12) == 0xfff)
    {
        if (FUN3(VAR8, VAR6) < 0)
        {
            FUN4(VAR2, VAR22, "");
            VAR16 = -1;
            goto VAR23;
        }
        if (VAR8->VAR24[1].VAR25.VAR26 > 12)
        {
            FUN4(VAR8->VAR2, VAR22, "", VAR8->VAR24[1].VAR25.VAR26);
            VAR16 = -1;
            goto VAR23;
        }
    }
    VAR8->VAR27 = 0;
    while ((VAR13 = FUN5(VAR6, 3)) != VAR15)
    {
        VAR17 = FUN5(VAR6, 4);
        if (VAR13 < VAR28)
        {
            if (!(VAR11 = FUN6(VAR8, VAR13, VAR17)))
            {
                FUN4(VAR8->VAR2, VAR22, "", VAR13, VAR17);
                VAR16 = -1;
                goto VAR23;
            }
            VAR18 = 1024;
        }
        switch (VAR13)
        {
        case VAR29:
            VAR16 = FUN7(VAR8, &VAR11->VAR30[0], VAR6, 0, 0);
            VAR20 = 1;
            break;
        case VAR31:
            VAR16 = FUN8(VAR8, VAR6, VAR11);
            VAR20 = 1;
            break;
        case VAR32:
            VAR16 = FUN9(VAR8, VAR6, VAR11);
            break;
        case VAR33:
            VAR16 = FUN7(VAR8, &VAR11->VAR30[0], VAR6, 0, 0);
            VAR20 = 1;
            break;
        case VAR28:
            VAR16 = FUN10(VAR8, VAR6);
            break;
        case VAR34:
        {
            uint8_t VAR35[VAR36 * 4][3];
            int VAR37;
            FUN11(VAR8);
            VAR37 = FUN12(VAR2, &VAR8->VAR24[1].VAR25, VAR35, VAR6);
            if (VAR37 < 0)
            {
                VAR16 = VAR37;
                break;
            }
            if (VAR21)
            {
                FUN4(VAR2, VAR22, "");
                FUN13(VAR8);
            }
            else
            {
                VAR16 = FUN14(VAR8, VAR35, VAR37, 0, VAR38);
                if (!VAR16)
                    VAR8->VAR24[1].VAR25.VAR39 = 0;
                VAR21 = 1;
            }
            break;
        }
        case VAR40:
            if (VAR17 == 15)
                VAR17 += FUN5(VAR6, 8) - 1;
            if (FUN15(VAR6) < 8 * VAR17)
            {
                FUN4(VAR2, VAR22, VAR41);
                VAR16 = -1;
                goto VAR23;
            }
            while (VAR17 > 0)
                VAR17 -= FUN16(VAR8, VAR6, VAR17, VAR12, VAR14);
            VAR16 = 0;
            break;
        default:
            VAR16 = -1;
            break;
        }
        VAR12 = VAR11;
        VAR14 = VAR13;
        if (VAR16)
            goto VAR23;
        if (FUN15(VAR6) < 3)
        {
            FUN4(VAR2, VAR22, VAR41);
            VAR16 = -1;
            goto VAR23;
        }
    }
    FUN17(VAR8);
    VAR19 = (VAR8->VAR24[1].VAR25.VAR42 == 1) ? VAR8->VAR24[1].VAR25.VAR43 > VAR8->VAR24[1].VAR25.VAR44 : 0;
    VAR18 <<= VAR19;
    if (VAR18)
    {
        VAR8->VAR45.VAR46 = VAR18;
        if ((VAR16 = VAR2->FUN18(VAR2, &VAR8->VAR45)) < 0)
        {
            FUN4(VAR2, VAR22, "");
            VAR16 = -1;
            goto VAR23;
        }
        if (VAR2->VAR47 == VAR48)
            VAR8->VAR49.FUN19((float *)VAR8->VAR45.VAR3[0], (const float **)VAR8->VAR50, VAR18, VAR2->VAR51);
        else
            VAR8->VAR49.FUN20((VAR52 *)VAR8->VAR45.VAR3[0], (const float **)VAR8->VAR50, VAR18, VAR2->VAR51);
        *(VAR53 *)VAR3 = VAR8->VAR45;
    }
    *VAR4 = !!VAR18;
    if (VAR8->VAR24[1].VAR54 && VAR20)
    {
        VAR2->VAR44 = VAR8->VAR24[1].VAR25.VAR44 << VAR19;
        VAR2->VAR55 = VAR18;
        VAR8->VAR24[1].VAR54 = VAR56;
    }
    return 0;
VAR23:
    FUN13(VAR8);
    return VAR16;
}