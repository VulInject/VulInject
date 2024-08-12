static int FUN1(VAR1 *VAR2, void *VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR11[VAR4];
    VAR9 *VAR12 = NULL, *VAR13 = NULL;
    VAR14 *VAR15 = VAR7->VAR15;
    int VAR16, VAR17 = VAR7->VAR17;
    VAR10->VAR18 = VAR5;
    for (VAR16 = VAR4; VAR16 < VAR7->VAR19; VAR16 += VAR17)
    {
        if (VAR16 >= VAR7->VAR19)
            break;
        VAR10->VAR20 = VAR16 << 16;
        FUN2(VAR2, VAR3, VAR4, VAR5);
        if (VAR7->VAR21)
            FUN3(VAR2, VAR3, VAR4, VAR5);
        FUN4(VAR10, VAR16, VAR22 & 0xFFFF);
        VAR7->VAR23.VAR24 -= 64;
        VAR7->VAR25.VAR24 -= 64;
        if (VAR2->VAR26 == VAR27)
            FUN5(&VAR15->VAR28, VAR16, 0);
    }
    return 0;
}