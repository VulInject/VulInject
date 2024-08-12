static void FUN1(VAR1 *VAR2, bool VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = FUN3(VAR7);
    VAR10 *VAR11;
    VAR12 *VAR13;
    VAR4 *VAR14 = NULL;
    bool VAR15 = false;
    static int VAR16;
    int VAR17;
    if (VAR7->VAR18 && !VAR9->VAR19)
    {
        FUN4(VAR5, VAR20, FUN5(VAR2));
        return;
        if (VAR3 && !VAR7->VAR21)
        {
            if (!VAR2->VAR22)
            {
                VAR23 *VAR24 = FUN6("", VAR16++);
                FUN7(FUN8(FUN9(), ""), VAR24, VAR2, &VAR25);
                VAR15 = true;
                FUN10(VAR24);
                VAR11 = FUN11(VAR7);
                if (VAR11)
                {
                    FUN12(VAR11, VAR7, &VAR14);
                    if (VAR14 != NULL)
                    {
                        if (VAR9->VAR26)
                        {
                            VAR9->FUN13(VAR7, &VAR14);
                            if (VAR14 != NULL)
                            {
                                FUN14(VAR26, VAR27, VAR7);
                                if (VAR11)
                                {
                                    FUN15(VAR11, VAR7, &VAR14);
                                    if (VAR14 != NULL)
                                    {
                                        goto VAR28;
                                        if (FUN16(VAR7))
                                        {
                                            if (FUN17(VAR7, -1, FUN16(VAR7), VAR7, VAR7->VAR29, VAR7->VAR30, &VAR14) < 0)
                                            {
                                                goto VAR28;
                                                FUN18(VAR13, &VAR7->VAR31, VAR32)
                                                {
                                                    FUN19(FUN20(VAR13), true, "", &VAR14);
                                                    if (VAR14 != NULL)
                                                    {
                                                        goto VAR33;
                                                        if (VAR7->VAR18)
                                                        {
                                                            FUN21(VAR7);
                                                            VAR7->VAR34 = false;
                                                        }
                                                        else if (!VAR3 && VAR7->VAR21)
                                                        {
                                                            VAR4 **VAR35 = NULL;
                                                            FUN18(VAR13, &VAR7->VAR31, VAR32)
                                                            {
                                                                VAR35 = VAR14 ? NULL : &VAR14;
                                                                FUN19(FUN20(VAR13), false, "", VAR35);
                                                                if (FUN16(VAR7))
                                                                {
                                                                    FUN22(VAR7, FUN16(VAR7), VAR7);
                                                                    if (VAR9->VAR36)
                                                                    {
                                                                        VAR35 = VAR14 ? NULL : &VAR14;
                                                                        VAR9->FUN23(VAR7, VAR35);
                                                                        VAR7->VAR34 = true;
                                                                        FUN14(VAR36, VAR37, VAR7);
                                                                        if (VAR14 != NULL)
                                                                        {
                                                                            VAR7->VAR21 = VAR3;
                                                                            return;
                                                                        VAR33:
                                                                            FUN18(VAR13, &VAR7->VAR31, VAR32)
                                                                            {
                                                                                FUN19(FUN20(VAR13), false, "", NULL);
                                                                                if (FUN16(VAR7))
                                                                                {
                                                                                    FUN22(VAR7, FUN16(VAR7), VAR7);
                                                                                VAR28:
                                                                                    if (VAR9->VAR36)
                                                                                    {
                                                                                        VAR9->FUN23(VAR7, NULL);
                                                                                    VAR38:
                                                                                        FUN24(VAR5, VAR14);
                                                                                        if (VAR15)
                                                                                        {
                                                                                            FUN25(FUN20(VAR7));
                                                                                            VAR16--