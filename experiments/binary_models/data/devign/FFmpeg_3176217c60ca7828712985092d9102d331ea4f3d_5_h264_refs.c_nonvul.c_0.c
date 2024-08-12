int FUN1(VAR1 *VAR2, int VAR3)
{
    MMCO VAR4[VAR5], *VAR6 = VAR3 ? VAR2->VAR6 : VAR4;
    int VAR7 = 0, VAR8 = 0;
    assert(VAR2->VAR9 + VAR2->VAR10 <= VAR2->VAR11.VAR12->VAR13);
    if (VAR2->VAR10 && VAR2->VAR9 + VAR2->VAR10 == VAR2->VAR11.VAR12->VAR13 && !(FUN2(VAR2) && !VAR2->VAR14 && VAR2->VAR15->VAR16))
    {
        VAR6[0].VAR17 = VAR18;
        VAR6[0].VAR19 = VAR2->VAR20[VAR2->VAR10 - 1]->VAR21;
        VAR7 = 1;
        if (FUN2(VAR2))
        {
            VAR6[0].VAR19 *= 2;
            VAR6[1].VAR17 = VAR18;
            VAR6[1].VAR19 = VAR6[0].VAR19 + 1;
            VAR7 = 2;
        }
    }
    if (VAR3)
    {
        VAR2->VAR7 = VAR7;
    }
    else if (!VAR3 && VAR7 >= 0 && (VAR7 != VAR2->VAR7 || (VAR8 = FUN3(VAR2->VAR6, VAR4, VAR7))))
    {
        FUN4(VAR2->VAR22, VAR23, "", VAR7, VAR2->VAR7, VAR8);
        return VAR24;
    }
    return 0;
}