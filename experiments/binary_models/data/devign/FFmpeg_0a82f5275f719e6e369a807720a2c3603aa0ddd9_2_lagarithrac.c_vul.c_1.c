void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7;
    FUN2(VAR4);
    VAR2->VAR8 = VAR2->VAR9 = VAR4->VAR10 + FUN3(VAR4) / 8;
    VAR2->VAR11 = VAR2->VAR8 + VAR5;
    VAR2->VAR12 = 0x80;
    VAR2->VAR13 = *VAR2->VAR9 >> 1;
    VAR2->VAR14 = FUN4(VAR2->VAR15 - 8, 0);
    for (VAR6 = VAR7 = 0; VAR6 < 256; VAR6++)
    {
        unsigned VAR16 = VAR6 << VAR2->VAR14;
        while (VAR2->VAR17[VAR7 + 1] <= VAR16)
            VAR7++;
        VAR2->VAR18[VAR6] = VAR7;
    }
    VAR2->VAR14 += 23;
}