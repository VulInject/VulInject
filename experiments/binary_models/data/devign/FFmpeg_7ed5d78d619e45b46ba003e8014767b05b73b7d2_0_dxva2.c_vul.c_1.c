int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, unsigned VAR7, const void *VAR8, unsigned VAR9, unsigned VAR10)
{
    void *VAR11;
    unsigned VAR12;
    int VAR13;
    HRESULT VAR14;
    if (VAR2->VAR15 == VAR16)
        VAR14 = FUN2(FUN3(VAR4)->VAR17, FUN3(VAR4)->VAR18, VAR7, &VAR12, &VAR11);
    if (VAR2->VAR15 == VAR19)
        VAR14 = FUN4(FUN5(VAR4)->VAR18, VAR7, &VAR11, &VAR12);
    if (FUN6(VAR14))
    {
        FUN7(VAR2, VAR20, "", VAR7, VAR14);
        return -1;
    }
    if (VAR9 <= VAR12)
    {
        memcpy(VAR11, VAR8, VAR9);
        if (VAR2->VAR15 == VAR16)
        {
            VAR21 *VAR22 = VAR6;
            memset(VAR22, 0, sizeof(*VAR22));
            VAR22->VAR23 = VAR7;
            VAR22->VAR24 = VAR9;
            VAR22->VAR25 = VAR10;
        }
        if (VAR2->VAR15 == VAR19)
        {
            VAR26 *VAR27 = VAR6;
            memset(VAR27, 0, sizeof(*VAR27));
            VAR27->VAR28 = VAR7;
            VAR27->VAR24 = VAR9;
            VAR27->VAR25 = VAR10;
        }
        VAR13 = 0;
    }
    else
    {
        FUN7(VAR2, VAR20, "", VAR7);
        VAR13 = -1;
    }
    if (VAR2->VAR15 == VAR16)
        VAR14 = FUN8(FUN3(VAR4)->VAR17, FUN3(VAR4)->VAR18, VAR7);
    if (VAR2->VAR15 == VAR19)
        VAR14 = FUN9(FUN5(VAR4)->VAR18, VAR7);
    if (FUN6(VAR14))
    {
        FUN7(VAR2, VAR20, "", VAR7, VAR14);
        VAR13 = -1;
    }
    return VAR13;
}