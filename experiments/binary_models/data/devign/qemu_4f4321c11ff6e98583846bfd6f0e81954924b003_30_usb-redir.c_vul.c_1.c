static void FUN1(void *VAR1, uint32_t VAR2, struct VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR1;
    uint8_t VAR10 = VAR4->VAR11;
    FUN2("", VAR4->VAR12, VAR10, VAR7, VAR2);
    if (VAR9->VAR11[FUN3(VAR10)].VAR13 != VAR14)
    {
        FUN4("", VAR10);
        free(VAR6);
        return;
    }
    if (VAR10 & VAR15)
    {
        if (VAR9->VAR11[FUN3(VAR10)].VAR16 == 0)
        {
            FUN2("", VAR10);
            free(VAR6);
            return;
        }
        FUN5(VAR9, VAR6, VAR7, VAR4->VAR12, VAR10);
    }
    else
    {
        int VAR17 = VAR4->VAR18;
        VAR19 *VAR20 = FUN6(VAR9, VAR2);
        if (!VAR20)
        {
            return;
        }
        if (VAR20->VAR4.VAR11 != VAR4->VAR11)
        {
            FUN4("");
            VAR17 = VAR21;
        }
        if (VAR20->VAR22)
        {
            VAR20->VAR22->VAR17 = FUN7(VAR9, VAR4->VAR12, VAR17);
            FUN8(&VAR9->VAR9, VAR20->VAR22);
        }
        FUN9(VAR9, VAR20);
    }
}