static int FUN1(VAR1 *VAR2, unsigned char *VAR3, int VAR4, void *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    int VAR9 = 1;
    int VAR10, VAR11, VAR12;
    if (VAR4 < VAR7->VAR13->VAR14)
    {
        FUN2(VAR2, VAR15, "");
        return -1;
    }
    FUN3(VAR7, VAR5);
VAR16:
    for (VAR11 = 0; VAR11 < 3; VAR11++)
    {
        VAR7->VAR17[VAR11] = VAR7->VAR18.VAR5[VAR11];
        if (VAR7->VAR19 && VAR7->VAR20)
            VAR7->VAR17[VAR11] += VAR7->VAR18.VAR21[VAR11];
    }
    FUN4(VAR2, VAR3);
    if (VAR2->VAR22 == VAR23)
        VAR12 = FUN5(VAR2, VAR7);
    else
        VAR12 = FUN6(VAR2, VAR7);
    if (VAR12 < 0)
    {
        FUN2(VAR2, VAR15, "");
        return -1;
    }
    FUN7(VAR7, VAR3);
    VAR10 = 0;
    for (VAR11 = 0; VAR11 < VAR7->VAR24.VAR25; VAR11++)
    {
        FUN8(VAR7->VAR26 + VAR11 * 4, VAR10);
        VAR10 += VAR7->VAR27[VAR11];
        assert(!(VAR7->VAR27[VAR11] & 3));
    }
    VAR2->FUN9(VAR2, VAR28, (void **)&VAR7->VAR29[0], NULL, VAR2->VAR30, sizeof(void *));
    FUN8(VAR3 + VAR7->VAR13->VAR31 - 4, 0x600DC0DE);
    if (VAR7->VAR19 && VAR9)
    {
        VAR9 = 0;
        VAR7->VAR20 ^= 1;
        VAR3 += VAR7->VAR13->VAR31;
        VAR4 -= VAR7->VAR13->VAR31;
        goto VAR16;
    }
    VAR7->VAR18.VAR32 = VAR7->VAR33 * VAR34;
    return VAR7->VAR13->VAR14;