static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8->VAR9[VAR2->VAR8->VAR10 - 1];
    uint32_t VAR11;
    uint32_t VAR12;
    FUN2(VAR4);
    FUN3(VAR4);
    VAR12 = FUN4(VAR4);
    VAR11 = FUN4(VAR4);
    FUN5(VAR2->VAR8, "", *((char *)&VAR12), ((char *)&VAR12)[1], ((char *)&VAR12)[2], ((char *)&VAR12)[3], (int)VAR12);
    FUN5(VAR2->VAR8, "", *((char *)&VAR11), ((char *)&VAR11)[1], ((char *)&VAR11)[2], ((char *)&VAR11)[3]);
    if (!VAR12)
        VAR2->VAR13 = 1;
    if (VAR11 == FUN6('', '', '', ''))
        VAR7->VAR14->VAR15 = VAR16;
    else if (VAR11 == FUN6('', '', '', ''))
        VAR7->VAR14->VAR15 = VAR17;
    else if (VAR11 == FUN6('', '', '', ''))
        VAR7->VAR14->VAR18 = VAR19;
    else if (VAR11 == FUN6('', '', '', ''))
    {
        VAR7->VAR14->VAR15 = VAR20;
    }
    FUN7(VAR4);
    FUN7(VAR4);
    FUN7(VAR4);
    if (VAR5.VAR21 <= 24)
        return 0;
    FUN8(VAR4, VAR5.VAR21 - (FUN9(VAR4) - VAR5.VAR22));
    return 0;
}