static int FUN1(VAR1 *VAR2, int VAR3)
{
    const VAR4 *VAR5 = FUN2(VAR2->VAR6);
    int VAR7, VAR8;
    if (!VAR5)
        return FUN3(VAR9);
    if ((VAR7 = FUN4(VAR2->VAR10, VAR2->VAR11, 0, NULL)) < 0)
        return VAR7;
    if (!VAR2->VAR12[0])
    {
        VAR7 = FUN5(VAR2->VAR12, VAR2->VAR6, VAR2->VAR10);
        if (VAR7 < 0)
            return VAR7;
        for (VAR8 = 0; VAR8 < 4 && VAR2->VAR12[VAR8]; VAR8++)
            VAR2->VAR12[VAR8] = FUN6(VAR2->VAR12[VAR8], VAR3);
    }
    for (VAR8 = 0; VAR8 < 4 && VAR2->VAR12[VAR8]; VAR8++)
    {
        int VAR13 = FUN6(VAR2->VAR11, 32);
        if (VAR8 == 1 || VAR8 == 2)
            VAR13 = -((-VAR13) >> VAR5->VAR14);
        VAR2->VAR15[VAR8] = FUN7(VAR2->VAR12[VAR8] * VAR13 + 16);
        if (!VAR2->VAR15[VAR8])
            goto VAR16;
        VAR2->VAR17[VAR8] = VAR2->VAR15[VAR8]->VAR17;
    }
    if (VAR5->VAR18 & VAR19 || VAR5->VAR18 & VAR20)
    {
        FUN8(&VAR2->VAR15[1]);
        VAR2->VAR15[1] = FUN7(1024);
        if (!VAR2->VAR15[1])
            goto VAR16;
        VAR2->VAR17[1] = VAR2->VAR15[1]->VAR17;
    }
    VAR2->VAR21 = VAR2->VAR17;
    return 0;
VAR16:
    FUN9(VAR2);
    return FUN3(VAR22);
}