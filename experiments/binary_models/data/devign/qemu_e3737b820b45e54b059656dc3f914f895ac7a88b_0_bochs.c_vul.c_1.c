static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    uint32_t VAR11;
    struct bochs_header VAR12;
    int VAR13;
    VAR2->VAR14 = 1;
    VAR13 = FUN2(VAR2->VAR15, 0, &VAR12, sizeof(VAR12));
    if (VAR13 < 0)
    {
        return VAR13;
        if (strcmp(VAR12.VAR16, VAR17) || strcmp(VAR12.VAR18, VAR19) || strcmp(VAR12.VAR20, VAR21) || ((FUN3(VAR12.VAR22) != VAR23) && (FUN3(VAR12.VAR22) != VAR24)))
        {
            FUN4(VAR7, "");
            return -VAR25;
            if (FUN3(VAR12.VAR22) == VAR24)
            {
                VAR2->VAR26 = FUN5(VAR12.VAR27.VAR28.VAR29) / 512;
            }
            else
            {
                VAR2->VAR26 = FUN5(VAR12.VAR27.VAR30.VAR29) / 512;
                VAR9->VAR31 = FUN3(VAR12.VAR32);
                VAR9->VAR33 = FUN6(VAR9->VAR31 * 4);
                VAR13 = FUN2(VAR2->VAR15, FUN3(VAR12.VAR34), VAR9->VAR33, VAR9->VAR31 * 4);
                if (VAR13 < 0)
                {
                    goto VAR35;
                    for (VAR11 = 0; VAR11 < VAR9->VAR31; VAR11++)
                        FUN7(&VAR9->VAR33[VAR11]);
                    VAR9->VAR36 = FUN3(VAR12.VAR34) + (VAR9->VAR31 * 4);
                    VAR9->VAR37 = 1 + (FUN3(VAR12.VAR38) - 1) / 512;
                    VAR9->VAR39 = 1 + (FUN3(VAR12.VAR40) - 1) / 512;
                    VAR9->VAR41 = FUN3(VAR12.VAR40);
                    if (VAR9->VAR31 < VAR2->VAR26 / VAR9->VAR41)
                    {
                        FUN4(VAR7, "");
                        VAR13 = -VAR25;
                        goto VAR35;
                        FUN8(&VAR9->VAR42);
                        return 0;
                    VAR35:
                        FUN9(VAR9->VAR33);
                        return VAR13