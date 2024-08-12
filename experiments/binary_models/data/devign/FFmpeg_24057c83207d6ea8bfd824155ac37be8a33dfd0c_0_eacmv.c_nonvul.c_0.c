static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, const VAR3 *VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    if (VAR5 - VAR4 < 16)
    {
        FUN2(VAR2->VAR11, VAR12, "");
        return VAR13;
    }
    VAR2->VAR14 = FUN3(&VAR4[4]);
    VAR2->VAR15 = FUN3(&VAR4[6]);
    VAR9 = FUN4(VAR2->VAR11, VAR2->VAR14, VAR2->VAR15);
    if (VAR9 < 0)
        return VAR9;
    VAR10 = FUN3(&VAR4[10]);
    if (VAR10 > 0)
        VAR2->VAR11->VAR16 = (VAR17){1, VAR10};
    VAR6 = FUN3(&VAR4[12]);
    VAR7 = FUN3(&VAR4[14]);
    VAR4 += 16;
    for (VAR8 = VAR6; VAR8 < VAR6 + VAR7 && VAR8 < VAR18 && VAR5 - VAR4 >= 3; VAR8++)
    {
        VAR2->VAR19[VAR8] = FUN5(VAR4);
        VAR4 += 3;
    }
    return 0;
}