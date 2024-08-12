int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int64_t VAR5, int64_t VAR6, int VAR7)
{
    if (VAR4 > VAR5 || VAR6 < VAR5)
        return -1;
    if (VAR2->VAR8->VAR9)
    {
        int VAR10;
        FUN2(VAR2);
        if (VAR3 == -1 && VAR2->VAR11 == 1)
        {
            AVRational VAR12 = VAR2->VAR13[0]->VAR12;
            VAR5 = FUN3(VAR5, VAR14, VAR12);
            VAR4 = FUN4(VAR4, VAR12.VAR15, VAR12.VAR16 * (VAR17)VAR18, VAR19);
            VAR6 = FUN4(VAR6, VAR12.VAR15, VAR12.VAR16 * (VAR17)VAR18, VAR20);
        }
        VAR10 = VAR2->VAR8->FUN5(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7);
        if (VAR10 >= 0)
            FUN6(VAR2);
        return VAR10;
    }
    if (VAR2->VAR8->VAR21)
    {
    }
    if (VAR2->VAR8->VAR22 || 1)
    {
        int VAR23 = (VAR5 - (VAR24)VAR4 > (VAR24)VAR6 - VAR5 ? VAR25 : 0);
        int VAR10 = FUN7(VAR2, VAR3, VAR5, VAR7 | VAR23);
        if (VAR10 < 0 && VAR5 != VAR4 && VAR6 != VAR5)
        {
            VAR10 = FUN7(VAR2, VAR3, VAR23 ? VAR6 : VAR4, VAR7 | VAR23);
            if (VAR10 >= 0)
                VAR10 = FUN7(VAR2, VAR3, VAR5, VAR7 | (VAR23 ^ VAR25));
        }
        return VAR10;
    }
}