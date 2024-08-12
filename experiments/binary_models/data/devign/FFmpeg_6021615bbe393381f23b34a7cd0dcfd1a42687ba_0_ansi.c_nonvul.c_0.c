static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7 = VAR5->VAR7;
    int VAR8 = VAR5->VAR8;
    if ((VAR5->VAR9 & VAR10))
        VAR7 += 8;
    if ((VAR5->VAR9 & VAR11))
        VAR8 += 8;
    if ((VAR5->VAR9 & VAR12))
        FUN2(int, VAR7, VAR8);
    if ((VAR5->VAR9 & VAR13))
        VAR7 = VAR8;
    FUN3(VAR5->VAR14->VAR15[0] + VAR5->VAR16 * VAR5->VAR14->VAR17[0] + VAR5->VAR18, VAR5->VAR14->VAR17[0], VAR5->VAR19, VAR5->VAR20, VAR3, VAR7, VAR8);
    VAR5->VAR18 += VAR21;
    if (VAR5->VAR18 > VAR2->VAR22 - VAR21)
    {
        VAR5->VAR18 = 0;
        FUN4(VAR2);
    }
}