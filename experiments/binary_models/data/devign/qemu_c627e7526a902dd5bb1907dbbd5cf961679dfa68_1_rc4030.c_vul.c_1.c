static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    VAR4->VAR6 = 0x410;
    VAR4->VAR7 = 1;
    VAR4->VAR8 = 0;
    memset(VAR4->VAR9, 0, sizeof(VAR4->VAR9));
    FUN3(VAR4, 0, 0);
    VAR4->VAR10 = VAR4->VAR11 = 0;
    VAR4->VAR12 = 0;
    VAR4->VAR13 = VAR4->VAR14 = 0;
    VAR4->VAR15 = 0;
    VAR4->VAR16 = 0x18186;
    VAR4->VAR17 = 7;
    for (VAR5 = 0; VAR5 < 15; VAR5++)
        VAR4->VAR18[VAR5] = 7;
    VAR4->VAR19 = 0x10;
    VAR4->VAR20 = 0;
    VAR4->VAR21 = 0;
    FUN4(VAR4->VAR22);
    FUN4(VAR4->VAR23);
}