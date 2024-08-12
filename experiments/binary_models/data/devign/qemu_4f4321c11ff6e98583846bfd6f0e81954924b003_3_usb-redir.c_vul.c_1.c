static void FUN1(void *VAR1, uint32_t VAR2, struct VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR1;
    uint8_t VAR10 = VAR4->VAR11;
    int VAR12 = VAR4->VAR13;
    VAR14 *VAR15;
    FUN2("", VAR4->VAR16, VAR10, VAR12, VAR2);
    VAR15 = FUN3(VAR9, VAR2);
    if (!VAR15)
    {
        free(VAR6);
        return;
    }
    if (VAR15->VAR4.VAR11 != VAR4->VAR11 || VAR15->VAR4.VAR17 != VAR4->VAR17)
    {
        FUN4("");
        VAR12 = VAR18;
    }
    if (VAR15->VAR19)
    {
        VAR12 = FUN5(VAR9, VAR4->VAR16, VAR12);
        if (VAR12 > 0)
        {
            FUN6(VAR9, "", VAR6, VAR7);
            if (VAR7 <= VAR15->VAR19->VAR12)
            {
                memcpy(VAR15->VAR19->VAR6, VAR6, VAR7);
            }
            else
            {
                FUN4("", VAR7, VAR15->VAR19->VAR12);
                VAR12 = VAR20;
            }
        }
        VAR15->VAR19->VAR12 = VAR12;
        FUN7(&VAR9->VAR9, VAR15->VAR19);
    }
    FUN8(VAR9, VAR15);
    free(VAR6);
}