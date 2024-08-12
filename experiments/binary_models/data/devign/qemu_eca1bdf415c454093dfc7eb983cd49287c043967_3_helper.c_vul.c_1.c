void FUN1(VAR1 *VAR2)
{
    uint32_t VAR3;
    VAR3 = VAR2->VAR4.VAR5;
    memset(VAR2, 0, FUN2(VAR1, VAR6));
    if (VAR3)
        FUN3(VAR2, VAR3);
    VAR2->VAR7 = VAR8;
    VAR2->VAR9.VAR10[VAR11] = 1 << 30;
    VAR2->VAR7 = VAR12 | VAR13 | VAR14 | VAR15;
    if (FUN4(VAR2))
        VAR2->VAR7 &= ~VAR15;
    VAR2->VAR9.VAR10[VAR11] = 0;
    VAR2->VAR4.VAR16 = 0xffffc000u;
    VAR2->VAR17[15] = 0;
    FUN5(VAR2, 1)