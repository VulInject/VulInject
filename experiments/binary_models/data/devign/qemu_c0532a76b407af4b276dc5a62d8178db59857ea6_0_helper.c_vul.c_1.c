void FUN1(VAR1 *VAR2, int VAR3, uint64_t VAR4, uint64_t VAR5, uint64_t VAR6, uint64_t VAR7)
{
    uint64_t VAR8 = VAR2->VAR8;
    unsigned VAR9 = VAR8 & 0xff;
    VAR10 *VAR11 = VAR2->VAR12;
    if (VAR3 >= VAR9 || !(VAR4 & VAR13))
        return;
    if (FUN2())
    {
        FUN3(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7);
        return;
    }
    if ((VAR4 & VAR14) && (VAR8 & VAR15) && VAR2->VAR16 != ~(VAR10)0)
        return;
    VAR11 += 4 * VAR3;
    if ((VAR4 & VAR14) && VAR11[0] != ~(VAR10)0)
        return;
    if (VAR4 & VAR14)
    {
        if ((VAR2->VAR5 & VAR17) || !(VAR2->VAR18[4] & VAR19))
        {
            fprintf(VAR20, ""
                            "");
            FUN4(VAR21, "");
            FUN5();
            return;
        }
        if (VAR11[1] & VAR13)
            VAR4 |= VAR22;
        VAR11[2] = VAR6;
        VAR11[3] = VAR7;
        VAR2->VAR5 = VAR5;
        VAR11[1] = VAR4;
        FUN6(VAR2, VAR23);
    }
    else if (!(VAR11[1] & VAR13) || !(VAR11[1] & VAR14))
    {
        if (VAR11[1] & VAR13)
            VAR4 |= VAR22;
        VAR11[2] = VAR6;
        VAR11[3] = VAR7;
        VAR11[1] = VAR4;
    }
    else
        VAR11[1] |= VAR22;
}