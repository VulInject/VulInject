static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    for (VAR4 = 0; VAR4 < VAR2->VAR6; VAR4++)
    {
        if (FUN2(1, VAR2->VAR7) >= VAR8 / sizeof(VAR9))
        {
            FUN3(VAR2->VAR10, VAR11, "");
            return VAR12;
        }
        if (VAR2->VAR13 + VAR2->VAR14 >= VAR8 / sizeof(VAR9) || VAR2->VAR13 + VAR2->VAR14 <= (unsigned)VAR2->VAR14)
        {
            FUN3(VAR2->VAR10, VAR11, "");
            return VAR12;
        }
        if ((VAR5 = FUN4(&VAR2->VAR15[VAR4], sizeof(VAR9), FUN2(1, VAR2->VAR7))) < 0)
            return VAR5;
        if ((VAR5 = FUN4(&VAR2->VAR16[VAR4], (VAR2->VAR13 + VAR2->VAR14), sizeof(VAR2->VAR16[0][0]))) < 0)
            return VAR5;
        for (VAR3 = 0; VAR3 < VAR2->VAR14; VAR3++)
            VAR2->VAR16[VAR4][VAR3] = 0;
        VAR2->VAR17[VAR4] = VAR2->VAR16[VAR4] + VAR2->VAR14;
    }
    if ((VAR5 = FUN4(&VAR2->VAR18, VAR2->VAR14, sizeof(*VAR2->VAR18))) < 0)
        return VAR5;
    return 0;
}