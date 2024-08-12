static void FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, uint32_t VAR5, bool VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10;
    uint32_t VAR11 = VAR4 / VAR12;
    int VAR13, VAR14, VAR15;
    void *VAR16;
    uint64_t VAR17 = VAR3;
    for (VAR13 = 0; VAR13 < VAR11; VAR13++)
    {
        VAR10 = FUN2(VAR18, VAR17 / VAR12);
        FUN3(VAR10);
        VAR16 = FUN4(&VAR15);
        VAR14 = FUN5(VAR16, VAR5, VAR17, VAR12);
        FUN6(VAR10, VAR2, VAR16, VAR14, !VAR2->VAR19, VAR8);
        VAR17 += VAR12;
    }
    if (VAR2->VAR19)
    {
        if (VAR6)
        {
            VAR10 = FUN2(VAR18, VAR3 / VAR12);
            FUN7(VAR20, VAR11, FUN8(VAR10));
        }
        else
        {
            FUN9(VAR20, VAR11);
        }
    }
}