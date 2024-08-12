static int FUN1(struct VAR1 *VAR2, unsigned short VAR3, unsigned VAR4, unsigned VAR5)
{
    int VAR6;
    VAR7 *VAR8;
    if (VAR3 < 1 || VAR3 > VAR9 + 1)
        return -VAR10;
    if (VAR5 > 0x80000000)
        return -VAR11;
    if (VAR5 & ~(VAR12 - 1))
    {
        return -VAR10;
    }
    VAR6 = FUN2(VAR2, VAR13, 0, VAR14);
    if (VAR6 < 0)
        return VAR6;
    VAR8 = VAR2->VAR8 + VAR6;
    FUN3(VAR8 + VAR15, VAR3 - 1);
    FUN4(VAR8 + VAR16, VAR5 | VAR4);
    FUN4(VAR8 + VAR17, (VAR5 + VAR18) | VAR4);
    VAR2->VAR19 = VAR6;
    VAR2->VAR20[VAR6 + VAR21] |= VAR22 | VAR23;
    VAR2->VAR24 = true;
    return 0;
}