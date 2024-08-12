int FUN1(VAR1 *VAR2, int VAR3)
{
    MMCO VAR4[VAR5], *VAR6 = VAR3 ? VAR2->VAR6 : VAR4;
    int VAR7 = 0, VAR8;
    assert(VAR2->VAR9 + VAR2->VAR10 <= VAR2->VAR11.VAR12);
    if (VAR2->VAR10 && VAR2->VAR9 + VAR2->VAR10 == VAR2->VAR11.VAR12 && !(FUN2(VAR2) && !VAR2->VAR13 && VAR2->VAR14->VAR15))
    {
        VAR6[0].VAR16 = VAR17;
        VAR6[0].VAR18 = VAR2->VAR19[VAR2->VAR10 - 1]->VAR20;
        VAR7 = 1;
        if (FUN2(VAR2))
        {
            VAR6[0].VAR18 *= 2;
            VAR6[1].VAR16 = VAR17;
            VAR6[1].VAR18 = VAR6[0].VAR18 + 1;
            VAR7 = 2;
        }
    }
    if (VAR3)
    {
        VAR2->VAR7 = VAR7;
    }
    else if (!VAR3 && VAR7 >= 0 && (VAR7 != VAR2->VAR7 || (VAR8 = FUN3(VAR2->VAR6, VAR4, VAR7))))
    {
        FUN4(VAR2->VAR21, VAR22, "", VAR7, VAR2->VAR7, VAR8);
        return VAR23;
    }
    return 0;
}