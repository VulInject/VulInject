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
        FUN2("");
        VAR7 = VAR5;
        VAR8 = 0;
        VAR4 = VAR2->VAR12;
        FUN2("" VAR13 "", VAR4);
        FUN3(VAR4, (VAR6 *)VAR3, sizeof(VAR3));
        while (FUN4(VAR3) == 0)
        {
            if (!(VAR2->VAR9[VAR10] & VAR11))
            {
                return;
                FUN5(VAR3);
                if ((FUN6(VAR3) == 0) || (FUN7(VAR3) == 0))
                {
                    FUN2("", (unsigned)VAR4);
                    FUN3(FUN6(VAR3), VAR7, FUN7(VAR3));
                    VAR7 += FUN7(VAR3);
                    VAR8 += FUN7(VAR3);
                    if (FUN8(VAR3))
                    {
                        unsigned VAR14[2];
                        FUN3(VAR2->VAR12, (VAR6 *)VAR14, sizeof(VAR14));
                        FUN9(VAR14);
                        FUN10(VAR2->VAR12, (VAR6 *)VAR14, sizeof(VAR14));
                        if (FUN11(VAR3))
                        {
                            VAR2->VAR12 = VAR2->VAR9[VAR15];
                        }
                        else
                        {
                            VAR2->VAR12 = VAR4 + 8;
                            FUN2("", VAR2->VAR12);
                            VAR2->VAR9[VAR16] |= VAR17;
                            VAR2->VAR9[VAR18] |= VAR19 & ~(VAR2->VAR9[VAR20]);
                            FUN12(VAR2);
                            if (VAR2->VAR9[VAR21] & VAR22)
                            {
                                FUN13(VAR5, VAR8);
                                FUN14(VAR2, VAR5, VAR8);
                                if (VAR2->VAR23 || (VAR2->VAR9[VAR10] & VAR24))
                                {
                                    FUN15(FUN16(VAR2->VAR25), VAR5, VAR8);
                                }
                                else
                                {
                                    FUN17(FUN16(VAR2->VAR25), VAR5, VAR8);
                                    VAR7 = VAR5;
                                    VAR8 = 0;
                                    if (FUN11(VAR3))
                                    {
                                        VAR4 = VAR2->VAR9[VAR15];
                                    }
                                    else
                                    {
                                        VAR4 += 8;
                                        FUN2("" VAR13 "", VAR4);
                                        FUN3(VAR4, (VAR6 *)VAR3, sizeof(VAR3));
                                        if (FUN4(VAR3))
                                        {
                                            VAR2->VAR9[VAR16] |= VAR26;
                                            VAR2->VAR9[VAR18] |= VAR27 & ~(VAR2->VAR9[VAR20]);
                                            FUN12(VAR2)