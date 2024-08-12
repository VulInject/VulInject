static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    struct VAR5 *VAR6, *VAR7;
    int VAR8;
    VAR4->VAR9 = 0;
    FUN3(VAR6, &VAR4->VAR10, VAR11, VAR7) { FUN4(VAR4, VAR6); }
    for (VAR8 = 0; VAR8 < VAR4->VAR12.VAR13; VAR8++)
    {
        VAR4->VAR14[VAR8].VAR15 = 0;
        VAR4->VAR14[VAR8].VAR16 = 0;
        if (VAR8 == 0)
        {
            VAR4->VAR14[0].VAR17 = 1024;
            VAR4->VAR14[0].VAR18 = 768;
        }
        else
        {
            VAR4->VAR14[VAR8].VAR17 = 0;
            VAR4->VAR14[VAR8].VAR18 = 0;
        }
        VAR4->VAR19[VAR8].VAR20 = 0;
        VAR4->VAR19[VAR8].VAR17 = 0;
        VAR4->VAR19[VAR8].VAR18 = 0;
        VAR4->VAR19[VAR8].VAR15 = 0;
        VAR4->VAR19[VAR8].VAR16 = 0;
        VAR4->VAR19[VAR8].VAR21 = NULL;
    }
    VAR4->VAR22 = 1;
    if (VAR4->VAR23)
    {
        FUN5(VAR4);
        VAR4->VAR23 = 0;
    }
}