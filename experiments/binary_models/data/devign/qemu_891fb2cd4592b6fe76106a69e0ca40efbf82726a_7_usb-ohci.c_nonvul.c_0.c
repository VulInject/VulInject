static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    int VAR6;
    FUN2(VAR3);
    VAR3->VAR7 = 0;
    VAR3->VAR8 = 0;
    VAR3->VAR9 = 0;
    VAR3->VAR10 = 0;
    VAR3->VAR11 = VAR12;
    VAR3->VAR13 = 0;
    VAR3->VAR14 = VAR3->VAR15 = 0;
    VAR3->VAR16 = VAR3->VAR17 = 0;
    VAR3->VAR18 = 0;
    VAR3->VAR19 = 0;
    VAR3->VAR20 = 7;
    VAR3->VAR21 = 0x2778;
    VAR3->VAR22 = 0x2edf;
    VAR3->VAR23 = 0;
    VAR3->VAR24 = 0;
    VAR3->VAR25 = 0;
    VAR3->VAR26 = 0;
    VAR3->VAR27 = VAR28;
    VAR3->VAR29 = VAR30 | VAR3->VAR31;
    VAR3->VAR32 = 0x0;
    VAR3->VAR33 = 0;
    for (VAR6 = 0; VAR6 < VAR3->VAR31; VAR6++)
    {
        VAR5 = &VAR3->VAR34[VAR6];
        VAR5->VAR35 = 0;
        if (VAR5->VAR5.VAR36 && VAR5->VAR5.VAR36->VAR37)
        {
            FUN3(&VAR5->VAR5);
        }
    }
    if (VAR3->VAR38)
    {
        FUN4(&VAR3->VAR39);
        VAR3->VAR38 = 0;
    }
    FUN5("", VAR3->VAR40);
}