static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7;
    if (VAR2->VAR8->VAR9 < 1)
        return 0;
    VAR7 = VAR2->VAR8->VAR10[VAR2->VAR8->VAR9 - 1];
    if ((VAR11)VAR5.VAR12 > (1 << 30))
        return -1;
    FUN2(VAR7->VAR13->VAR14);
    VAR7->VAR13->VAR14 = FUN3(VAR5.VAR12 + 0x5a + VAR15);
    if (!VAR7->VAR13->VAR14)
        return FUN4(VAR16);
    VAR7->VAR13->VAR17 = 0x5a + VAR5.VAR12;
    memcpy(VAR7->VAR13->VAR14, "", 4);
    FUN5(VAR4, VAR7->VAR13->VAR14 + 0x5a, VAR5.VAR12);
    FUN6(VAR2->VAR8, "" VAR18 "", VAR5.VAR12, VAR7->VAR13->VAR14 + 0x5a);
    return 0;
}