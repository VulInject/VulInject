void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    int *VAR11;
    memset(VAR2, 0, sizeof(*VAR2));
    VAR2->VAR12 = 0;
    VAR4 = 0;
    for (VAR3 = 0; VAR3 < VAR13; VAR3++)
    {
        VAR8 = &VAR14[VAR3];
        VAR5 = VAR8->VAR15 + VAR8->VAR16;
        VAR4 += VAR5;
    }
    VAR10 = FUN2(sizeof(VAR9) * VAR4);
    VAR11 = FUN2(sizeof(int) * VAR4);
    for (VAR3 = 0; VAR3 < VAR13; VAR3++)
    {
        VAR8 = &VAR14[VAR3];
        VAR8->VAR10 = VAR10;
        VAR8->VAR11 = VAR11;
        VAR5 = VAR8->VAR15 + VAR8->VAR16;
        VAR11 += VAR5;
        VAR10 += VAR5;
    }
    for (VAR6 = 0; VAR6 < FUN3(VAR17); ++VAR6)
    {
        FUN4(VAR17[VAR6].VAR18, VAR17[VAR6].VAR19);
    }
    FUN5(VAR2);
}