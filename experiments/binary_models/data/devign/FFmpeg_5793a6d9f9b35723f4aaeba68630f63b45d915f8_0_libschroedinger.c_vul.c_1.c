VAR1 *FUN1(VAR2 *VAR3, SchroFrameFormat VAR4)
{
    VAR5 *VAR6;
    VAR1 *VAR7;
    int VAR8, VAR9;
    int VAR10, VAR11;
    int VAR12;
    VAR8 = VAR3->VAR13;
    VAR10 = VAR3->VAR14;
    VAR9 = VAR8 >> (FUN2(VAR4));
    VAR11 = VAR10 >> (FUN3(VAR4));
    VAR6 = FUN4(sizeof(VAR5));
    FUN5(VAR6, VAR3->VAR15, VAR8, VAR10);
    VAR7 = FUN6();
    VAR7->VAR16 = VAR4;
    VAR7->VAR13 = VAR8;
    VAR7->VAR14 = VAR10;
    FUN7(VAR7, VAR17, (void *)VAR6);
    for (VAR12 = 0; VAR12 < 3; ++VAR12)
    {
        VAR7->VAR18[VAR12].VAR13 = VAR12 ? VAR9 : VAR8;
        VAR7->VAR18[VAR12].VAR19 = VAR6->VAR20[VAR12];
        VAR7->VAR18[VAR12].VAR14 = VAR12 ? VAR11 : VAR10;
        VAR7->VAR18[VAR12].VAR21 = VAR7->VAR18[VAR12].VAR19 * VAR7->VAR18[VAR12].VAR14;
        VAR7->VAR18[VAR12].VAR22 = VAR6->VAR22[VAR12];
        if (VAR12)
        {
            VAR7->VAR18[VAR12].VAR23 = FUN3(VAR7->VAR16);
            VAR7->VAR18[VAR12].VAR24 = FUN2(VAR7->VAR16);
        }
    }
    return VAR7;
}