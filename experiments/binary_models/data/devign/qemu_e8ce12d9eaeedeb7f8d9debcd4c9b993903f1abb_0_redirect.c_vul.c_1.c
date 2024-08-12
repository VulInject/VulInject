static void FUN1(void *VAR1, uint64_t VAR2, struct VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR1;
    uint8_t VAR10, VAR11 = VAR4->VAR12;
    void *VAR13;
    int VAR14, VAR15;
    FUN2("" VAR16 "", VAR4->VAR10, VAR11, VAR7, VAR2);
    if (VAR9->VAR12[FUN3(VAR11)].VAR17 != VAR18)
    {
        FUN4("", VAR11);
        free(VAR6);
        return;
    }
    if (VAR9->VAR12[FUN3(VAR11)].VAR19 == 0)
    {
        FUN2("", VAR11);
        free(VAR6);
        return;
    }
    VAR15 = VAR9->VAR12[FUN3(VAR11)].VAR20;
    VAR10 = VAR21;
    VAR13 = NULL;
    for (VAR14 = 0; VAR14 < VAR7; VAR14 += VAR15)
    {
        if (VAR15 >= (VAR7 - VAR14))
        {
            VAR15 = VAR7 - VAR14;
            VAR10 = VAR4->VAR10;
            VAR13 = VAR6;
        }
        FUN5(VAR9, VAR6 + VAR14, VAR15, VAR10, VAR11, VAR13);
    }
    if (VAR9->VAR12[FUN3(VAR11)].VAR22)
    {
        VAR23 *VAR24 = VAR9->VAR12[FUN3(VAR11)].VAR22;
        VAR9->VAR12[FUN3(VAR11)].VAR22 = NULL;
        FUN6(VAR9, VAR24, VAR11);
        FUN7(&VAR9->VAR9, VAR24);
    }
}