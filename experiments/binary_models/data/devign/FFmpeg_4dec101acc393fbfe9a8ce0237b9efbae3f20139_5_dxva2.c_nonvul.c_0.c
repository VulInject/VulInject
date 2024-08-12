int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, unsigned VAR7, const void *VAR8, unsigned VAR9, unsigned VAR10)
{
    void *VAR11;
    unsigned VAR12;
    int VAR13;
    HRESULT VAR14;
    if (FUN2(VAR2))
        VAR14 = FUN3(FUN4(VAR4)->VAR15, FUN4(VAR4)->VAR16, VAR7, &VAR12, &VAR11);
    if (VAR2->VAR17 == VAR18)
        VAR14 = FUN5(FUN6(VAR4)->VAR16, VAR7, &VAR11, &VAR12);
    if (FUN7(VAR14))
    {
        FUN8(VAR2, VAR19, "", VAR7, VAR14);
        return -1;
    }
    if (VAR9 <= VAR12)
    {
        memcpy(VAR11, VAR8, VAR9);
        if (FUN2(VAR2))
        {
            VAR20 *VAR21 = VAR6;
            memset(VAR21, 0, sizeof(*VAR21));
            VAR21->VAR22 = VAR7;
            VAR21->VAR23 = VAR9;
            VAR21->VAR24 = VAR10;
        }
        if (VAR2->VAR17 == VAR18)
        {
            VAR25 *VAR26 = VAR6;
            memset(VAR26, 0, sizeof(*VAR26));
            VAR26->VAR27 = VAR7;
            VAR26->VAR23 = VAR9;
            VAR26->VAR24 = VAR10;
        }
        VAR13 = 0;
    }
    else
    {
        FUN8(VAR2, VAR19, "", VAR7);
        VAR13 = -1;
    }
    if (FUN2(VAR2))
        VAR14 = FUN9(FUN4(VAR4)->VAR15, FUN4(VAR4)->VAR16, VAR7);
    if (VAR2->VAR17 == VAR18)
        VAR14 = FUN10(FUN6(VAR4)->VAR16, VAR7);
    if (FUN7(VAR14))
    {
        FUN8(VAR2, VAR19, "", VAR7, VAR14);
        VAR13 = -1;
    }
    return VAR13;
}