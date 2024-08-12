static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = sizeof(VAR2->VAR6) - VAR2->VAR7;
    struct VAR8 *VAR9 = (struct VAR8 *)VAR2->VAR6;
    uint32_t VAR10;
    fprintf(VAR11, "", VAR4->VAR12.VAR13);
    FUN2(VAR4->VAR12.VAR12, VAR4->VAR12.VAR14, VAR11, "", VAR4->VAR12.VAR13);
    if (VAR5 > VAR4->VAR12.VAR13)
    {
        VAR5 = VAR4->VAR12.VAR13;
    }
    FUN3(VAR4, &VAR2->VAR6[VAR2->VAR7], VAR5);
    VAR2->VAR7 += VAR5;
    if (!FUN4(VAR2))
    {
        if (VAR4->VAR12.VAR13 < 64)
        {
            FUN5(FUN6(VAR2->VAR15), VAR2->VAR6, VAR2->VAR7);
            VAR2->VAR7 = 0;
        }
        return;
    }
    VAR10 = FUN7(VAR9->VAR16);
    if (VAR2->VAR7 < 8 || VAR2->VAR7 < VAR10)
    {
        return;
    }
    if (FUN7(VAR9->VAR17) == VAR18)
    {
        uint32_t VAR19 = 8 + FUN7(VAR9->VAR20);
        uint32_t VAR13 = FUN7(VAR9->VAR21);
        if (VAR19 + VAR13 <= VAR10)
            FUN5(FUN6(VAR2->VAR15), VAR2->VAR6 + VAR19, VAR13);
    }
    VAR2->VAR7 -= VAR10;
    memmove(VAR2->VAR6, &VAR2->VAR6[VAR10], VAR2->VAR7);
}