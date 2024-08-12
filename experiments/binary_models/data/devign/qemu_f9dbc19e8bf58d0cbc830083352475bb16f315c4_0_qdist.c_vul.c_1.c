void FUN1(struct VAR1 *VAR2, const struct VAR1 *VAR3, size_t VAR4)
{
    double VAR5, VAR6;
    double VAR7;
    size_t VAR8, VAR9;
    FUN2(VAR2);
    if (VAR3->VAR4 == 0)
    {
        return;
    }
    if (VAR4 == 0 || VAR3->VAR4 == 1)
    {
        VAR4 = VAR3->VAR4;
    }
    VAR5 = FUN3(VAR3);
    VAR6 = FUN4(VAR3);
    VAR7 = (VAR6 - VAR5) / VAR4;
    if (VAR4 == VAR3->VAR4)
    {
        for (VAR8 = 0; VAR8 < VAR3->VAR4; VAR8++)
        {
            if (VAR3->VAR10[VAR8].VAR11 != VAR5 + VAR8 * VAR7)
            {
                goto VAR12;
            }
        }
        VAR2->VAR10 = FUN5(struct VAR13, VAR3->VAR4);
        VAR2->VAR4 = VAR3->VAR4;
        memcpy(VAR2->VAR10, VAR3->VAR10, sizeof(*VAR2->VAR10) * VAR2->VAR4);
        return;
    }
VAR12:
    VAR9 = 0;
    for (VAR8 = 0; VAR8 < VAR4; VAR8++)
    {
        double VAR11;
        double VAR14, VAR15;
        VAR14 = VAR5 + VAR8 * VAR7;
        VAR15 = VAR5 + (VAR8 + 1) * VAR7;
        VAR11 = VAR14;
        FUN6(VAR2, VAR11, 0);
        while (VAR9 < VAR3->VAR4 && (VAR3->VAR10[VAR9].VAR11 < VAR15 || VAR8 == VAR4 - 1))
        {
            struct VAR13 *VAR16 = &VAR3->VAR10[VAR9];
            FUN6(VAR2, VAR11, VAR16->VAR17);
            VAR9++;
        }
    }
}