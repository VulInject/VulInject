int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 **VAR6)
{
    struct VAR7 *VAR8;
    size_t VAR9, VAR10;
    int VAR11;
    if (VAR2->VAR12 > 16384)
    {
        FUN2(VAR13, "", VAR14, VAR2->VAR12);
        return -1;
    }
    VAR9 = sizeof(*VAR8) * VAR2->VAR12;
    VAR8 = FUN3(VAR9);
    VAR10 = FUN4(VAR4->VAR15.VAR16, VAR4->VAR15.VAR17, sizeof(*VAR2), VAR8, VAR9);
    if (VAR10 != VAR9)
    {
        FUN2(VAR13, "", VAR14, VAR10, VAR9);
        FUN5(VAR8);
        return -1;
    }
    *VAR6 = FUN6(sizeof(struct VAR5) * VAR2->VAR12);
    for (VAR11 = 0; VAR11 < VAR2->VAR12; VAR11++)
    {
        hwaddr VAR18 = VAR8[VAR11].VAR19;
        (*VAR6)[VAR11].VAR20 = VAR8[VAR11].VAR19;
        (*VAR6)[VAR11].VAR21 = FUN7(VAR8[VAR11].VAR22, &VAR18, 1);
        if (!(*VAR6)[VAR11].VAR21 || VAR18 != VAR8[VAR11].VAR19)
        {
            FUN2(VAR13, ""
                                           "",
                          VAR14, VAR2->VAR23, VAR11);
            FUN8(*VAR6, VAR11);
            FUN5(VAR8);
            FUN5(*VAR6);
            *VAR6 = NULL;
            return -1;
        }
    }
    FUN5(VAR8);
    return 0;
}