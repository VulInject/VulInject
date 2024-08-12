static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = VAR4->VAR2.VAR7;
    VAR6[VAR8] = 0x00;
    VAR6[VAR8 + 1] = 0x00;
    VAR6[VAR9] = VAR10;
    VAR6[VAR9 + 1] = VAR11 >> 8;
    VAR6[VAR12] = 0x00;
    VAR6[VAR13] = VAR14;
    VAR6[VAR13 + 1] = 0x00;
    VAR6[VAR13 + 2] = 0x00;
    VAR6[VAR13 + 3] = 0x00;
    VAR6[VAR13 + 4] = VAR14;
    VAR6[VAR13 + 5] = 0x00;
    VAR6[VAR13 + 6] = 0x00;
    VAR6[VAR13 + 7] = 0x00;
    if (VAR4->VAR15)
    {
        VAR6[VAR16] = 0x86;
        VAR6[VAR16 + 1] = 0x80;
        VAR6[VAR17] = 0x00;
        VAR6[VAR17 + 1] = 0x00;
    }
    VAR6[VAR18] = 0x00;
    VAR6[VAR19] = 0x01;
    FUN3(&VAR4->VAR20, &VAR21, VAR4, "", 1024);
    FUN3(&VAR4->VAR22, &VAR23, VAR4, "", 256);
    FUN4(&VAR4->VAR2, 0, VAR14, &VAR4->VAR20);
    FUN4(&VAR4->VAR2, 1, VAR14, &VAR4->VAR22);
    FUN5(VAR24, VAR4);
    FUN6("", &VAR4->VAR25);
    FUN7(VAR4);
    return 0;
}