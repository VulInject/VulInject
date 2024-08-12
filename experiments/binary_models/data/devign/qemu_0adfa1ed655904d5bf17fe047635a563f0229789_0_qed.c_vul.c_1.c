static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    QEDHeader VAR11;
    int64_t VAR12;
    int VAR13;
    VAR9->VAR2 = VAR2;
    FUN2(&VAR9->VAR14);
    VAR13 = FUN3(VAR2->VAR15, 0, &VAR11, sizeof(VAR11));
    if (VAR13 < 0)
    {
        return VAR13;
        FUN4(&VAR11, &VAR9->VAR16);
        if (VAR9->VAR16.VAR17 != VAR18)
        {
            FUN5(VAR7, "");
            if (VAR9->VAR16.VAR19 & ~VAR20)
            {
                char VAR21[64];
                snprintf(VAR21, sizeof(VAR21), "" VAR22, VAR9->VAR16.VAR19 & ~VAR20);
                FUN6(VAR7, VAR23, FUN7(VAR2), "", VAR21);
                return -VAR24;
                if (!FUN8(VAR9->VAR16.VAR25))
                {
                    VAR12 = FUN9(VAR2->VAR15);
                    if (VAR12 < 0)
                    {
                        return VAR12;
                        VAR9->VAR12 = FUN10(VAR9, VAR12);
                        if (!FUN11(VAR9->VAR16.VAR26))
                        {
                            if (!FUN12(VAR9->VAR16.VAR27, VAR9->VAR16.VAR25, VAR9->VAR16.VAR26))
                            {
                                if (!FUN13(VAR9, VAR9->VAR16.VAR28))
                                {
                                    VAR9->VAR29 = (VAR9->VAR16.VAR25 * VAR9->VAR16.VAR26) / sizeof(VAR30);
                                    VAR9->VAR31 = FUN14(VAR9->VAR16.VAR25) - 1;
                                    VAR9->VAR32 = VAR9->VAR29 - 1;
                                    VAR9->VAR33 = VAR9->VAR31 + FUN14(VAR9->VAR29) - 1;
                                    if ((VAR9->VAR16.VAR19 & VAR34))
                                    {
                                        if ((VAR30)VAR9->VAR16.VAR35 + VAR9->VAR16.VAR36 > VAR9->VAR16.VAR25 * VAR9->VAR16.VAR37)
                                        {
                                            VAR13 = FUN15(VAR2->VAR15, VAR9->VAR16.VAR35, VAR9->VAR16.VAR36, VAR2->VAR38, sizeof(VAR2->VAR38));
                                            if (VAR13 < 0)
                                            {
                                                return VAR13;
                                                if (VAR9->VAR16.VAR19 & VAR39)
                                                {
                                                    FUN16(VAR2->VAR40, sizeof(VAR2->VAR40), "");
                                                    if ((VAR9->VAR16.VAR41 & ~VAR42) != 0 && !FUN17(VAR2->VAR15) && !(VAR5 & VAR43))
                                                    {
                                                        VAR9->VAR16.VAR41 &= VAR42;
                                                        VAR13 = FUN18(VAR9);
                                                        if (VAR13)
                                                        {
                                                            return VAR13;
                                                            FUN19(VAR2->VAR15);
                                                            VAR9->VAR44 = FUN20(VAR9);
                                                            FUN21(&VAR9->VAR45);
                                                            VAR13 = FUN22(VAR9);
                                                            if (VAR13)
                                                            {
                                                                goto VAR46;
                                                                if (!(VAR5 & VAR47) && (VAR9->VAR16.VAR19 & VAR48))
                                                                {
                                                                    if (!FUN17(VAR2->VAR15) && !(VAR5 & VAR43))
                                                                    {
                                                                        BdrvCheckResult VAR49 = {0};
                                                                        VAR13 = FUN23(VAR9, &VAR49, true);
                                                                        if (VAR13)
                                                                        {
                                                                            goto VAR46;
                                                                            FUN24(VAR2, FUN25(VAR2));
                                                                        VAR46:
                                                                            if (VAR13)
                                                                            {
                                                                                FUN26(&VAR9->VAR45);
                                                                                FUN27(VAR9->VAR44);
                                                                                return VAR13