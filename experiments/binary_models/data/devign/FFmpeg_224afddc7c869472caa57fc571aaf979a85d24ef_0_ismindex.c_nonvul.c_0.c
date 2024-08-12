static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = NULL;
    uint16_t VAR7, VAR8;
    int VAR9 = FUN2(VAR10);
    if (VAR4->VAR11 == VAR12)
        return FUN3(VAR2, VAR4);
    if (FUN4(&VAR6) < 0)
    {
        VAR9 = FUN2(VAR13);
        goto VAR14;
    }
    if (VAR4->VAR15 < 11 || VAR4->VAR16[0] != 1)
        goto VAR14;
    VAR7 = FUN5(&VAR4->VAR16[6]);
    if (11 + VAR7 > VAR4->VAR15)
        goto VAR14;
    FUN6(VAR6, 0x00000001);
    FUN7(VAR6, &VAR4->VAR16[8], VAR7);
    VAR8 = FUN5(&VAR4->VAR16[9 + VAR7]);
    if (11 + VAR7 + VAR8 > VAR4->VAR15)
        goto VAR14;
    FUN6(VAR6, 0x00000001);
    FUN7(VAR6, &VAR4->VAR16[11 + VAR7], VAR8);
    VAR9 = 0;
VAR14:
    VAR2->VAR17 = FUN8(VAR6, &VAR2->VAR18);
    return VAR9;
}