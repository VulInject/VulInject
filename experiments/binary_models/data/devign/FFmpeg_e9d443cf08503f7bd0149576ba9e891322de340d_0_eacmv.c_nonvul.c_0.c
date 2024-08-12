static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5)
{
    int VAR6, VAR7, VAR8;
    if (VAR5 - VAR4 < 16)
    {
        FUN2(VAR2->VAR9, VAR10, "");
        return;
    }
    VAR2->VAR11 = FUN3(&VAR4[4]);
    VAR2->VAR12 = FUN3(&VAR4[6]);
    if (VAR2->VAR9->VAR11 != VAR2->VAR11 || VAR2->VAR9->VAR12 != VAR2->VAR12)
    {
        FUN4(VAR2->VAR9, VAR2->VAR11, VAR2->VAR12);
        if (VAR2->VAR13.VAR14[0])
            VAR2->VAR9->FUN5(VAR2->VAR9, &VAR2->VAR13);
        if (VAR2->VAR15.VAR14[0])
            VAR2->VAR9->FUN5(VAR2->VAR9, &VAR2->VAR15);
    }
    VAR2->VAR9->VAR16.VAR17 = 1;
    VAR2->VAR9->VAR16.VAR18 = FUN3(&VAR4[10]);
    VAR6 = FUN3(&VAR4[12]);
    VAR7 = FUN3(&VAR4[14]);
    VAR4 += 16;
    for (VAR8 = VAR6; VAR8 < VAR6 + VAR7 && VAR8 < VAR19 && VAR5 - VAR4 >= 3; VAR8++)
    {
        VAR2->VAR20[VAR8] = 0xFFU << 24 | FUN6(VAR4);
        VAR4 += 3;
    }
}