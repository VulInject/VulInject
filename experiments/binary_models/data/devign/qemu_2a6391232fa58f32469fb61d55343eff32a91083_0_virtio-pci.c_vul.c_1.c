static VAR1 FUN1(VAR2 *VAR3, uint32_t VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR6, VAR3, VAR3);
    struct VAR8 *VAR9;
    if (VAR7->VAR10 && FUN3(VAR4, VAR5, VAR7->VAR10 + FUN4(struct VAR8, VAR11), sizeof VAR9->VAR11))
    {
        uint32_t VAR12;
        uint32_t VAR5;
        VAR9 = (void *)(VAR7->VAR3.VAR13 + VAR7->VAR10);
        VAR12 = FUN5(VAR9->VAR14.VAR15);
        VAR5 = FUN5(VAR9->VAR14.VAR16);
        if (VAR5 <= sizeof VAR9->VAR11)
        {
            FUN6(&VAR7->VAR17, VAR12, VAR9->VAR11, VAR5);
        }
    }
    return FUN7(VAR3, VAR4, VAR5);
}