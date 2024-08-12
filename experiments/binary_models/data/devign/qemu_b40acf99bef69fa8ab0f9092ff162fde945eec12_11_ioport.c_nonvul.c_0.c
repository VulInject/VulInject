static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, unsigned VAR5, unsigned VAR6, unsigned VAR7, unsigned VAR8)
{
    VAR9 *VAR10;
    unsigned VAR11;
    VAR10 = FUN2(sizeof(VAR9) + sizeof(VAR3) * (VAR5 + 1));
    VAR10->VAR12 = VAR2->VAR13;
    memcpy(VAR10->VAR14, VAR4, sizeof(VAR3) * VAR5);
    memset(VAR10->VAR14 + VAR5, 0, sizeof(VAR3));
    for (VAR11 = 0; VAR11 < VAR5; ++VAR11)
    {
        VAR10->VAR14[VAR11].VAR15 -= VAR7;
        VAR10->VAR14[VAR11].VAR16 = VAR6 + VAR7;
    }
    FUN3(&VAR10->VAR17, &VAR18, VAR10, VAR2->VAR19, VAR8 - VAR7);
    FUN4(VAR2->VAR20, VAR6 + VAR7, &VAR10->VAR17);
    VAR2->VAR21[VAR2->VAR22] = &VAR10->VAR17;
    ++VAR2->VAR22;
}