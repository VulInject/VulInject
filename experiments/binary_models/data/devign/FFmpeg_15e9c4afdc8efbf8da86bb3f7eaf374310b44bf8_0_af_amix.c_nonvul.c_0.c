static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7;
    FUN2(VAR5->VAR8 > 1);
    for (VAR7 = 1; VAR7 < VAR5->VAR8; VAR7++)
    {
        if (!(VAR5->VAR9[VAR7] & VAR10))
            continue;
        if (FUN3(VAR5->VAR11[VAR7]) >= VAR3)
            continue;
        FUN4(VAR2->VAR12[VAR7]);
    }
    return FUN5(VAR2->VAR13[0]);
}