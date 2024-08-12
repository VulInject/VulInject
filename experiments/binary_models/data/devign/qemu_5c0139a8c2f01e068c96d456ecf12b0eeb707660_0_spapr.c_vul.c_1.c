static void FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, uint32_t VAR5, bool VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10;
    VAR11 *VAR12;
    uint32_t VAR13 = VAR4 / VAR14;
    int VAR15, VAR16, VAR17;
    void *VAR18;
    uint64_t VAR19 = VAR3;
    for (VAR15 = 0; VAR15 < VAR13; VAR15++)
    {
        VAR10 = FUN2(VAR20, VAR19 / VAR14);
        FUN3(VAR10);
        VAR18 = FUN4(&VAR17);
        VAR16 = FUN5(VAR18, VAR5, VAR19, VAR14);
        VAR12 = FUN6(VAR10);
        VAR12->FUN7(VAR10, VAR2, VAR18, VAR16, !VAR2->VAR21, VAR8);
        VAR19 += VAR14;
        if (VAR2->VAR21)
        {
            if (VAR6)
            {
                VAR10 = FUN2(VAR20, VAR3 / VAR14);
                VAR12 = FUN6(VAR10);
                FUN8(VAR20, VAR13, VAR12->FUN9(VAR10));
            }
            else
            {
                FUN10(VAR20, VAR13);