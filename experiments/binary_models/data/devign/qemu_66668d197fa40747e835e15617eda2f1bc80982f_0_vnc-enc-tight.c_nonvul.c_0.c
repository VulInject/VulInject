static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    uint32_t VAR7 = 0, VAR8 = 0;
    int VAR9;
    int VAR10 = 0;
    bool VAR11 = false;
    bool VAR12 = true;
    if (!VAR13)
    {
        VAR13 = FUN2(sizeof(VAR14));
        VAR15.VAR16 = VAR17;
        FUN3(&VAR15);
    }
    FUN4(VAR2, VAR3, VAR4, VAR5, VAR6, VAR2->VAR18.VAR19);
    FUN5(VAR2);
    FUN6(VAR2, VAR3, VAR4, VAR5, VAR6);
    FUN7(VAR2);
    if (!VAR2->VAR20->VAR21 && VAR2->VAR18.VAR22 != (VAR23)-1)
    {
        double VAR24 = FUN8(VAR2, VAR3, VAR4, VAR5, VAR6);
        if (VAR24 < VAR25[VAR2->VAR18.VAR22].VAR26)
        {
            VAR12 = false;
        }
        if (VAR24 >= VAR25[VAR2->VAR18.VAR22].VAR27)
        {
            VAR11 = true;
            FUN9(VAR2, VAR3, VAR4, VAR5, VAR6);
        }
    }
    VAR9 = FUN10(VAR2, VAR3, VAR4, VAR5 * VAR6, &VAR7, &VAR8, VAR13);
    if (VAR12 && VAR2->VAR18.VAR22 != (VAR23)-1)
    {
        VAR10 = FUN11(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR13, VAR11);
    }
    else
    {
        VAR10 = FUN12(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR13);
    }
    VAR10 = FUN12(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR13);
    return VAR10;
}