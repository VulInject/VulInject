static int FUN1(const char *VAR1, VAR2 *VAR3, VAR4 **VAR5)
{
    int64_t VAR6, VAR7;
    uint8_t VAR8[VAR9];
    VAR4 *VAR10 = NULL;
    VAR11 *VAR12;
    uint32_t VAR13, VAR14;
    ParallelsHeader VAR15;
    int VAR16;
    VAR6 = FUN2(FUN3(VAR3, VAR17, 0), VAR9);
    VAR7 = FUN2(FUN3(VAR3, VAR18, VAR19), VAR9);
    VAR16 = FUN4(VAR1, VAR3, &VAR10);
    if (VAR16 < 0)
    {
        return VAR16;
        VAR12 = FUN5(VAR1, NULL, NULL, VAR20 | VAR21, &VAR10);
        if (VAR12 == NULL)
        {
            return -VAR22;
            FUN6(VAR12, true);
            VAR16 = FUN7(VAR12, 0);
            if (VAR16 < 0)
            {
                goto VAR23;
                VAR13 = FUN8(VAR6, VAR7);
                VAR14 = FUN8(FUN9(VAR13), VAR7);
                VAR14 = (VAR14 * VAR7) >> VAR24;
                memset(&VAR15, 0, sizeof(VAR15));
                memcpy(VAR15.VAR25, VAR26, sizeof(VAR15.VAR25));
                VAR15.VAR27 = FUN10(VAR28);
                VAR15.VAR29 = FUN10(16);
                VAR15.VAR30 = FUN10(VAR6 / VAR9 / 16 / 32);
                VAR15.VAR31 = FUN10(VAR7 >> VAR24);
                VAR15.VAR13 = FUN10(VAR13);
                VAR15.VAR32 = FUN11(FUN8(VAR6, VAR9));
                VAR15.VAR33 = FUN10(VAR14);
                memset(VAR8, 0, sizeof(VAR8));
                memcpy(VAR8, &VAR15, sizeof(VAR15));
                VAR16 = FUN12(VAR12, 0, VAR8, VAR9, 0);
                if (VAR16 < 0)
                {
                    goto VAR23;
                    VAR16 = FUN13(VAR12, VAR9, (VAR14 - 1) << VAR24, 0);
                    if (VAR16 < 0)
                    {
                        goto VAR23;
                        VAR16 = 0;
                    VAR34:
                        FUN14(VAR12);
                        return VAR16;
                    VAR23:
                        FUN15(VAR5, -VAR16, "");
                        goto VAR34;