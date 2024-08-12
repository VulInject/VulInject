static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    int VAR6;
    VAR7 *VAR8;
    FUN2("");
    VAR5 = VAR3->VAR9.VAR10;
    VAR5[0x6a] = 0x01;
    VAR5[0x6b] = 0x00;
    VAR3->VAR11 = 0;
    VAR3->VAR12 = 0;
    VAR3->VAR13 = 0;
    VAR3->VAR14 = 0;
    VAR3->VAR15 = 0;
    VAR3->VAR16 = 64;
    for (VAR6 = 0; VAR6 < VAR17; VAR6++)
    {
        VAR8 = &VAR3->VAR18[VAR6];
        VAR8->VAR19 = 0x0080;
        if (VAR8->VAR8.VAR9 && VAR8->VAR8.VAR9->VAR20)
        {
            FUN3(&VAR8->VAR8);
        }
    }
    FUN4(VAR3);
}