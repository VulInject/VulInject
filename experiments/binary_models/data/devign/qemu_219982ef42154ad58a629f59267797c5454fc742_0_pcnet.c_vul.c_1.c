void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4;
    uint16_t VAR5;
    memcpy(VAR3->VAR6, VAR3->VAR7.VAR8.VAR9, 6);
    VAR3->VAR6[12] = VAR3->VAR6[13] = 0x00;
    VAR3->VAR6[14] = VAR3->VAR6[15] = 0x57;
    for (VAR4 = 0, VAR5 = 0; VAR4 < 16; VAR4++)
        VAR5 += VAR3->VAR6[VAR4];
    *(VAR10 *)&VAR3->VAR6[12] = FUN2(VAR5);
    VAR3->VAR11[VAR12] = 0x0005;
    VAR3->VAR11[VAR13] = 0x0005;
    VAR3->VAR11[VAR14] = 0x0002;
    VAR3->VAR11[VAR15] = 0x00c0;
    VAR3->VAR11[VAR16] = 0x0084;
    VAR3->VAR11[VAR17] = 0x0088;
    VAR3->VAR11[VAR18] = 0x0090;
    VAR3->VAR11[VAR19] = 0x0000;
    VAR3->VAR11[VAR20] = 0x9001;
    VAR3->VAR11[VAR21] = 0x0002;
    VAR3->VAR11[VAR22] = 0x0200;
    VAR3->VAR11[VAR23] = 0xff06;
    FUN3(VAR3);
    FUN4(VAR3);
    FUN5(VAR3);