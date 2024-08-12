static void FUN1(VAR1 *VAR2)
{
    unsigned VAR3[2];
    hwaddr VAR4;
    uint8_t VAR5[2048];
    VAR6 *VAR7;
    unsigned VAR8;
    if (!(VAR2->VAR9[VAR10] & VAR11))
    {
        return;
    }
    FUN2("");
    VAR7 = VAR5;
    VAR8 = 0;
    VAR4 = VAR2->VAR12;
    FUN3(VAR4, (VAR6 *)&VAR3[0], sizeof(VAR3));
    while (FUN4(VAR3) == 0)
    {
        if (!(VAR2->VAR9[VAR10] & VAR11))
        {
            return;
        }
        FUN5(VAR3);
        if ((FUN6(VAR3) == 0) || (FUN7(VAR3) == 0))
        {
            FUN2("", VAR4);
            break;
        }
        FUN3(FUN6(VAR3), VAR7, FUN7(VAR3));
        VAR7 += FUN7(VAR3);
        VAR8 += FUN7(VAR3);
        if (FUN8(VAR3))
        {
            FUN3(VAR2->VAR12, (VAR6 *)&VAR3[0], sizeof(VAR3));
            FUN9(VAR3);
            FUN10(VAR2->VAR12, (VAR6 *)&VAR3[0], sizeof(VAR3));
            if (FUN11(VAR3))
            {
                VAR2->VAR12 = VAR2->VAR9[VAR13];
            }
            else
            {
                VAR2->VAR12 = VAR4 + 8;
            }
            FUN2("", VAR2->VAR12);
            VAR2->VAR9[VAR14] |= VAR15;
            FUN12(VAR2);
            if (VAR2->VAR9[VAR16] & VAR17)
            {
                FUN13(VAR5, VAR8);
            }
            FUN14(VAR2, VAR5, VAR8);
            if (VAR2->VAR18)
            {
                FUN15(&VAR2->VAR19->VAR20, VAR5, VAR8);
            }
            else
            {
                FUN16(&VAR2->VAR19->VAR20, VAR5, VAR8);
            }
            VAR7 = VAR5;
            VAR8 = 0;
        }
        if (FUN11(VAR3))
        {
            VAR4 = VAR2->VAR9[VAR13];
        }
        else
        {
            VAR4 += 8;
        }
        FUN3(VAR4, (VAR6 *)&VAR3[0], sizeof(VAR3));
    }
    if (FUN4(VAR3))
    {
        VAR2->VAR9[VAR14] |= VAR21;
        FUN12(VAR2);
    }
}