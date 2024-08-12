static inline void FUN1(struct VAR1 *VAR2, uint16_t VAR3, const VAR4 *VAR5, int VAR6, int VAR7)
{
    struct VAR8 *VAR9 = (void *)VAR2->VAR10;
    if (VAR7 + VAR11 > sizeof(VAR2->VAR10))
    {
        fprintf(VAR12, "", VAR13, VAR7);
        return;
    }
    memcpy(VAR2->VAR10 + VAR11, VAR5, VAR7);
    VAR9->VAR3 = FUN2(FUN3(VAR3, VAR6 ? VAR14 : VAR15));
    VAR9->VAR16 = FUN2(VAR7);
    VAR2->VAR17.FUN4(VAR2->VAR17.VAR18, VAR2->VAR10, VAR7 + VAR11);
}