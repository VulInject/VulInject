static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4;
    VAR5 *VAR6[VAR7];
    FUN2();
    for (VAR4 = 0; VAR4 < VAR7; VAR4++)
    {
        VAR6[VAR4] = VAR3->VAR8[VAR4].VAR9;
        if (VAR6[VAR4] && VAR6[VAR4]->VAR10)
        {
            FUN3(&VAR3->VAR8[VAR4]);
        }
    }
    memset(&VAR3->VAR11[VAR12], 0x00, VAR13 - VAR12);
    VAR3->VAR14 = VAR15 << VAR16;
    VAR3->VAR17 = VAR18;
    VAR3->VAR19 = 0;
    VAR3->VAR20 = 0;
    VAR3->VAR21 = VAR22;
    VAR3->VAR23 = VAR22;
    for (VAR4 = 0; VAR4 < VAR7; VAR4++)
    {
        if (VAR3->VAR24[VAR4])
        {
            VAR3->VAR25[VAR4] = VAR26 | VAR27;
        }
        else
        {
            VAR3->VAR25[VAR4] = VAR27;
        }
        if (VAR6[VAR4] && VAR6[VAR4]->VAR10)
        {
            FUN4(&VAR3->VAR8[VAR4]);
            FUN5(VAR6[VAR4]);
        }
    }
    FUN6(VAR3, 0);
    FUN6(VAR3, 1);
    FUN7(VAR3->VAR28);
    FUN8(VAR3->VAR29);
}