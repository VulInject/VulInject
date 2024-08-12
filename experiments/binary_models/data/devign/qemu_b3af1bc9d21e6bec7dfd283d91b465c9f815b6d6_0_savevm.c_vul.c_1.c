int FUN1(VAR1 *VAR2)
{
    FUN2(, VAR3)
    VAR4 = FUN3(VAR4);
    VAR3 *VAR5, *VAR6;
    VAR7 *VAR8 = NULL;
    uint8_t VAR9;
    unsigned int VAR10;
    int VAR11;
    int VAR12 = -1;
    if (FUN4(&VAR8))
    {
        FUN5(VAR8);
        return -VAR13;
    }
    VAR10 = FUN6(VAR2);
    if (VAR10 != VAR14)
    {
        FUN7("");
        return -VAR13;
    }
    VAR10 = FUN6(VAR2);
    if (VAR10 == VAR15)
    {
        FUN7("");
        return -VAR16;
    }
    if (VAR10 != VAR17)
    {
        FUN7("");
        return -VAR16;
    }
    while ((VAR9 = FUN8(VAR2)) != VAR18)
    {
        uint32_t VAR19, VAR20, VAR21;
        VAR22 *VAR23;
        char VAR24[257];
        int VAR25;
        FUN9(VAR9);
        switch (VAR9)
        {
        case VAR26:
        case VAR27:
            VAR21 = FUN6(VAR2);
            VAR25 = FUN8(VAR2);
            FUN10(VAR2, (VAR28 *)VAR24, VAR25);
            VAR24[VAR25] = 0;
            VAR19 = FUN6(VAR2);
            VAR20 = FUN6(VAR2);
            FUN11(VAR21, VAR24, VAR19, VAR20);
            VAR23 = FUN12(VAR24, VAR19);
            if (VAR23 == NULL)
            {
                FUN7("", VAR24, VAR19);
                VAR11 = -VAR13;
                goto VAR29;
            }
            if (VAR20 > VAR23->VAR20)
            {
                FUN7("", VAR20, VAR24, VAR23->VAR20);
                VAR11 = -VAR13;
                goto VAR29;
            }
            VAR5 = FUN13(sizeof(*VAR5));
            VAR5->VAR23 = VAR23;
            VAR5->VAR21 = VAR21;
            VAR5->VAR20 = VAR20;
            FUN14(&VAR4, VAR5, VAR30);
            VAR11 = FUN15(VAR2, VAR5->VAR23, VAR5->VAR20);
            if (VAR11 < 0)
            {
                FUN7(""
                             "",
                             VAR19, VAR24);
                goto VAR29;
            }
            break;
        case VAR31:
        case VAR32:
            VAR21 = FUN6(VAR2);
            FUN16(VAR21);
            FUN17(VAR5, &VAR4, VAR30)
            {
                if (VAR5->VAR21 == VAR21)
                {
                    break;
                }
            }
            if (VAR5 == NULL)
            {
                FUN7("", VAR21);
                VAR11 = -VAR13;
                goto VAR29;
            }
            VAR11 = FUN15(VAR2, VAR5->VAR23, VAR5->VAR20);
            if (VAR11 < 0)
            {
                FUN7("", VAR21, VAR5->VAR23->VAR24);
                goto VAR29;
            }
            break;
        default:
            FUN7("", VAR9);
            VAR11 = -VAR13;
            goto VAR29;
        }
    }
    VAR12 = FUN18(VAR2);
    if (FUN8(VAR2) == VAR33)
    {
        uint32_t VAR34 = FUN6(VAR2);
        VAR28 *VAR35 = FUN19(0x1000);
        while (VAR34 > 0)
        {
            uint32_t VAR36 = FUN20(VAR34, 0x1000);
            FUN10(VAR2, VAR35, VAR36);
            VAR34 -= VAR36;
        }
        FUN21(VAR35);
    }
    FUN22();
    VAR11 = 0;
VAR29:
    FUN23(VAR5, &VAR4, VAR30, VAR6)
    {
        FUN24(VAR5, VAR30);
        FUN21(VAR5);
    }
    if (VAR11 == 0)
    {
        VAR11 = VAR12;
    }
    return VAR11;
}