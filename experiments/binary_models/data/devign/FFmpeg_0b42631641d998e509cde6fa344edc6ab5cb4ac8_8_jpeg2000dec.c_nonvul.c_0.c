static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    int VAR6, VAR7;
    if (FUN2(&VAR2->VAR8) < 1)
        return FUN3(VAR9);
    VAR7 = FUN4(&VAR2->VAR8);
    VAR5->VAR10 = VAR7 >> 5;
    VAR5->VAR11 = VAR7 & 0x1f;
    if (VAR5->VAR11 == VAR12)
    {
        VAR3 -= 3;
        if (FUN2(&VAR2->VAR8) < VAR3 || 32 * 3 < VAR3)
            return FUN3(VAR9);
        for (VAR6 = 0; VAR6 < VAR3; VAR6++)
            VAR5->VAR13[VAR6] = FUN4(&VAR2->VAR8) >> 3;
    }
    else if (VAR5->VAR11 == VAR14)
    {
        if (FUN2(&VAR2->VAR8) < 2)
            return FUN3(VAR9);
        VAR7 = FUN5(&VAR2->VAR8);
        VAR5->VAR13[0] = VAR7 >> 11;
        VAR5->VAR15[0] = VAR7 & 0x7ff;
        for (VAR6 = 1; VAR6 < 32 * 3; VAR6++)
        {
            int VAR16 = FUN6(0, VAR5->VAR13[0] - (VAR6 - 1) / 3);
            VAR5->VAR13[VAR6] = VAR16;
            VAR5->VAR15[VAR6] = VAR5->VAR15[0];
        }
    }
    else
    {
        VAR3 = (VAR3 - 3) >> 1;
        if (FUN2(&VAR2->VAR8) < 2 * VAR3 || 32 * 3 < VAR3)
            return FUN3(VAR9);
        for (VAR6 = 0; VAR6 < VAR3; VAR6++)
        {
            VAR7 = FUN5(&VAR2->VAR8);
            VAR5->VAR13[VAR6] = VAR7 >> 11;
            VAR5->VAR15[VAR6] = VAR7 & 0x7ff;
        }
    }
    return 0;
}