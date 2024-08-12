void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, VAR6 *VAR7)
{
    int VAR8;
    VAR2->VAR7 = VAR7;
    VAR2->VAR3 = VAR3;
    VAR2->VAR5 = VAR5;
    VAR2->VAR9 = VAR4;
    VAR2->VAR10 = FUN2(sizeof(VAR6 *) * VAR3);
    if (!VAR2->VAR10)
        return FUN3(VAR11);
    VAR2->VAR12 = FUN4(sizeof(VAR6 *) * VAR4);
    if (!VAR2->VAR12)
    {
        FUN5(VAR2->VAR10);
        return FUN3(VAR11);
    }
    for (VAR8 = 0; VAR8 < VAR4; VAR8++)
    {
        VAR2->VAR12[VAR8] = FUN4(sizeof(VAR6) * VAR5);
        if (!VAR2->VAR12[VAR8])
        {
            for (VAR8--; VAR8 >= 0; VAR8--)
                FUN5(VAR2->VAR12[VAR8]);
            FUN5(VAR2->VAR12);
            FUN5(VAR2->VAR10);
            return FUN3(VAR11);
        }
    }
    VAR2->VAR13 = VAR4 - 1;
}