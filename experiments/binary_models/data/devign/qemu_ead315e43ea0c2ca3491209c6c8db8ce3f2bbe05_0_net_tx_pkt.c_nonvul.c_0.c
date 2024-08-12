static bool FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    struct iovec VAR5[VAR6];
    size_t VAR7 = 0;
    bool VAR8 = false;
    void *VAR9, *VAR10;
    size_t VAR11, VAR12;
    int VAR13 = VAR14, VAR15;
    size_t VAR16 = 0;
    size_t VAR17 = 0;
    VAR9 = VAR2->VAR18[VAR19].VAR20;
    VAR11 = VAR2->VAR18[VAR19].VAR21;
    VAR10 = VAR2->VAR18[VAR22].VAR20;
    VAR12 = VAR2->VAR18[VAR22].VAR21;
    VAR5[VAR23].VAR20 = VAR9;
    VAR5[VAR23].VAR21 = VAR11;
    VAR5[VAR24].VAR20 = VAR10;
    VAR5[VAR24].VAR21 = VAR12;
    do
    {
        VAR7 = FUN2(VAR2, &VAR13, &VAR16, VAR5, &VAR15);
        VAR8 = (VAR17 + VAR7 < VAR2->VAR25);
        FUN3(VAR9, VAR11, VAR10, VAR12, VAR7, VAR17, VAR8);
        FUN4(VAR10, VAR12);
        FUN5(VAR2, VAR4, VAR5, VAR15);
        VAR17 += VAR7;
    } while (VAR7 && VAR8);
    return true;
}