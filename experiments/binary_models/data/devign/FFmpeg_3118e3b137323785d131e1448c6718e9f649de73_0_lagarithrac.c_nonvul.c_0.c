void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8;
    FUN2(VAR4);
    VAR8 = FUN3(VAR4) >> 3;
    VAR2->VAR9 = VAR2->VAR10 = VAR4->VAR11 + FUN4(VAR4) / 8;
    VAR2->VAR12 = VAR2->VAR9 + VAR8;
    VAR2->VAR13 = 0x80;
    VAR2->VAR14 = *VAR2->VAR10 >> 1;
    VAR2->VAR15 = FUN5((int)VAR2->VAR16 - 8, 0);
    for (VAR6 = VAR7 = 0; VAR6 < 256; VAR6++)
    {
        unsigned VAR17 = VAR6 << VAR2->VAR15;
        while (VAR2->VAR18[VAR7 + 1] <= VAR17)
            VAR7++;
        VAR2->VAR19[VAR6] = VAR7;
    }
    VAR2->VAR15 += 23;
}