void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR2->VAR4 = VAR2->VAR5 * 2 + 1;
    VAR2->VAR6 = ((VAR2->VAR7 + VAR2->VAR4 - 1) / VAR2->VAR4) + 1;
    for (VAR2->VAR8 = 0; (1 << VAR2->VAR8) < VAR2->VAR6; VAR2->VAR8++)
        ;
    VAR2->VAR9 = FUN2(FUN3(VAR2->VAR7) + 1, 2);
    VAR2->VAR10 = 2 * (VAR2->VAR9 + FUN2(VAR2->VAR9, 8)) - VAR2->VAR8;
    for (VAR3 = 0; VAR3 < 367; VAR3++)
    {
        VAR2->VAR11[VAR3] = FUN2((VAR2->VAR6 + 32) >> 6, 2);
        VAR2->VAR12[VAR3] = 1;
    }
}