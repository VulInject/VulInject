int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10;
    int64_t VAR11;
    VAR7 = VAR2->VAR12[0];
    VAR8 = VAR7->VAR13->VAR8 ? VAR7->VAR13->VAR8 : (FUN2(VAR7->VAR13->VAR14) * VAR7->VAR13->VAR15) >> 3;
    VAR9 = VAR7->VAR13->VAR16 ? VAR7->VAR13->VAR16 >> 3 : VAR8 * VAR7->VAR13->VAR17;
    if (VAR8 <= 0 || VAR9 <= 0)
        return -1;
    VAR11 = FUN3(VAR4 * VAR9, VAR7->VAR18.VAR19, VAR7->VAR18.VAR20 * (VAR21)VAR8, (VAR5 & VAR22) ? VAR23 : VAR24);
    VAR11 *= VAR8;
    VAR7->VAR25 = FUN4(VAR11, VAR7->VAR18.VAR20, VAR9 * (VAR21)VAR7->VAR18.VAR19);
    if ((VAR10 = FUN5(VAR2->VAR26, VAR11 + VAR2->VAR27, VAR28)) < 0)
        return VAR10;
    return 0;
}