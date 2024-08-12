VAR1 *FUN1(VAR2 *VAR3)
{
    int VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR1 *VAR9 = FUN2(sizeof(VAR1));
    if (!VAR9)
        return NULL;
    VAR9->VAR10 = FUN2(sizeof(VAR7) * VAR3->VAR11);
    if (!VAR9->VAR10)
    {
        FUN3(VAR9);
        return NULL;
    }
    VAR9->VAR12 = FUN4(VAR3->VAR13);
    VAR9->VAR14 = VAR3->VAR14;
    VAR9->VAR15 = VAR3->VAR15;
    VAR9->VAR16 = VAR3->VAR16;
    VAR9->VAR17 = VAR3->VAR17;
    VAR3->VAR14 = NULL;
    VAR3->VAR15 = NULL;
    VAR3->VAR16 = NULL;
    VAR3->VAR17 = VAR18;
    VAR9->VAR11 = VAR3->VAR11;
    for (VAR4 = 0; VAR4 < VAR3->VAR11; VAR4++)
    {
        VAR6 = VAR3->VAR19[VAR4];
        VAR8 = &VAR9->VAR10[VAR4];
        VAR8->VAR20 = VAR6->VAR20;
        VAR8->VAR21 = VAR6->VAR21;
        VAR8->VAR22 = VAR6->VAR22;
        VAR8->VAR23 = VAR6->VAR23;
        VAR8->VAR24 = VAR6->VAR24;
        VAR6->VAR20 = NULL;
        VAR6->VAR21 = VAR25;
        VAR6->VAR22 = VAR25;
        VAR6->VAR23 = VAR25;
        VAR6->VAR24 = VAR26;
    }
    return VAR9;
}