int FUN1(VAR1 *VAR2, VdpDevice VAR3, VAR4 *VAR5, unsigned VAR6)
{
    VAR7 *VAR8;
    if (VAR6 != 0)
        return FUN2(VAR9);
    if (FUN3(&VAR2->VAR10, sizeof(*VAR8)))
        return FUN2(VAR11);
    VAR8 = VAR2->VAR10;
    memset(VAR8, 0, sizeof(*VAR8));
    VAR8->VAR12.VAR13 = VAR14;
    VAR8->VAR3 = VAR3;
    VAR8->VAR15 = VAR5;
    VAR8->VAR16 = 1;
    return 0;
}