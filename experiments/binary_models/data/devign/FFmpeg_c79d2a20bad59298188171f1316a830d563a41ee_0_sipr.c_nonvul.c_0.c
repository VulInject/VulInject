static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    int VAR7, VAR8;
    if (VAR6->VAR9)
        VAR2->VAR10 = FUN2(VAR4, VAR6->VAR9);
    for (VAR7 = 0; VAR7 < 5; VAR7++)
        VAR2->VAR11[VAR7] = FUN2(VAR4, VAR6->VAR12[VAR7]);
    for (VAR7 = 0; VAR7 < VAR6->VAR13; VAR7++)
    {
        VAR2->VAR14[VAR7] = FUN2(VAR4, VAR6->VAR15[VAR7]);
        if (VAR6->VAR16)
            VAR2->VAR17[VAR7] = FUN2(VAR4, VAR6->VAR16);
        for (VAR8 = 0; VAR8 < VAR6->VAR18; VAR8++)
            VAR2->VAR19[VAR7][VAR8] = FUN2(VAR4, VAR6->VAR20[VAR8]);
        VAR2->VAR21[VAR7] = FUN2(VAR4, VAR6->VAR22);
    }
}