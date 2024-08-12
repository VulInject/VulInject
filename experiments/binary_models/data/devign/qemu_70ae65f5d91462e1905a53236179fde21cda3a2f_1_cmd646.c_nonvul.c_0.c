static void FUN1(VAR1 *VAR2, int VAR3, pcibus_t VAR4, pcibus_t VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(VAR7, VAR9, VAR2);
    int VAR10;
    for (VAR10 = 0; VAR10 < 2; VAR10++)
    {
        VAR11 *VAR12 = &VAR8->VAR13[VAR10];
        VAR8->VAR14[VAR10].VAR13 = VAR12;
        VAR12->VAR14 = VAR8->VAR14 + VAR10;
        FUN3(VAR15, VAR12);
        FUN4(VAR4, 1, 1, VAR16, VAR12);
        if (VAR10 == 0)
        {
            FUN4(VAR4 + 1, 3, 1, VAR17, VAR8);
            FUN5(VAR4, 4, 1, VAR18, VAR8);
        }
        else
        {
            FUN4(VAR4 + 1, 3, 1, VAR19, VAR8);
            FUN5(VAR4, 4, 1, VAR20, VAR8);
        }
        FUN4(VAR4 + 4, 4, 1, VAR21, VAR12);
        FUN5(VAR4 + 4, 4, 1, VAR22, VAR12);
        FUN4(VAR4 + 4, 4, 2, VAR23, VAR12);
        FUN5(VAR4 + 4, 4, 2, VAR24, VAR12);
        FUN4(VAR4 + 4, 4, 4, VAR25, VAR12);
        FUN5(VAR4 + 4, 4, 4, VAR26, VAR12);
        VAR4 += 8;
    }
}