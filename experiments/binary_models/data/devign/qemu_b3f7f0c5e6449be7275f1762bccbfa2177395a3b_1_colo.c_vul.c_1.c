static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = NULL;
    int VAR9 = -1;
    FUN2(VAR2->VAR10, VAR11, &VAR8);
    if (VAR8)
    {
        FUN3(VAR2->VAR12.VAR13, VAR14, &VAR8);
        if (VAR8)
        {
            FUN4(FUN5(VAR4), 0, 0, NULL);
            VAR4->VAR15 = 0;
            FUN6();
            FUN7(VAR16);
            FUN8("", "");
            VAR2->VAR17.VAR18 = 0;
            VAR2->VAR17.VAR19 = 0;
            FUN9(VAR6);
            FUN10(VAR6, &VAR2->VAR17);
            FUN6();
            FUN11(VAR6, false);
            FUN12(VAR6);
            FUN2(VAR2->VAR10, VAR20, &VAR8);
            if (VAR8)
            {
                *We need the size of the VMstate data in Secondary VAR21, *With which we can decide how much data should be read.FUN13(VAR2->VAR10, VAR22, VAR4->VAR15, &VAR8);
                if (VAR8)
                {
                    FUN14(VAR2->VAR10, VAR4->VAR23, VAR4->VAR15);
                    FUN12(VAR2->VAR10);
                    VAR9 = FUN15(VAR2->VAR10);
                    if (VAR9 < 0)
                    {
                        FUN3(VAR2->VAR12.VAR13, VAR24, &VAR8);
                        if (VAR8)
                        {
                            FUN3(VAR2->VAR12.VAR13, VAR25, &VAR8);
                            if (VAR8)
                            {
                                VAR9 = 0;
                                FUN6();
                                FUN16();
                                FUN8("", "");
                            VAR26:
                                if (VAR8)
                                {
                                    FUN17(VAR8);
                                    return VAR9;