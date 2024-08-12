static inline int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = &VAR2->VAR5.VAR4;
    int VAR6;
    if (VAR2->VAR7)
        return 0;
    VAR6 = (-FUN2(VAR4)) & 7;
    if (!VAR6 && (FUN3(VAR4, 8) == 0x80))
        VAR6 = 8;
    if ((FUN4(VAR4, 24 + VAR6) & 0xFFFFFF) == 0x000001)
    {
        FUN5(VAR4, 24 + VAR6);
        VAR2->VAR8 = FUN6(VAR4, 8);
        FUN7(VAR2, VAR4);
        return 1;
    }
    return 0;
}