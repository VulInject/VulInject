static void FUN1(void *VAR1, uint32_t VAR2, struct VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR1;
    int VAR10 = VAR4->VAR11;
    VAR12 *VAR13;
    FUN2("", VAR4->VAR14, VAR10, VAR2);
    VAR13 = FUN3(VAR9, VAR2);
    if (!VAR13)
    {
        free(VAR6);
        return;
    }
    VAR13->VAR4.VAR14 = VAR4->VAR14;
    VAR13->VAR4.VAR11 = VAR4->VAR11;
    if (memcmp(&VAR13->VAR4, VAR4, sizeof(*VAR4)))
    {
        FUN4("");
        VAR10 = VAR15;
    }
    if (VAR13->VAR16)
    {
        VAR10 = FUN5(VAR9, VAR4->VAR14, VAR10);
        if (VAR10 > 0)
        {
            FUN6(VAR9, "", VAR6, VAR7);
            if (VAR7 <= sizeof(VAR9->VAR9.VAR17))
            {
                memcpy(VAR9->VAR9.VAR17, VAR6, VAR7);
            }
            else
            {
                FUN4("", VAR7, sizeof(VAR9->VAR9.VAR17));
                VAR10 = VAR18;
            }
        }
        VAR13->VAR16->VAR10 = VAR10;
        FUN7(&VAR9->VAR9, VAR13->VAR16);
    }
    FUN8(VAR9, VAR13);
    free(VAR6);
}