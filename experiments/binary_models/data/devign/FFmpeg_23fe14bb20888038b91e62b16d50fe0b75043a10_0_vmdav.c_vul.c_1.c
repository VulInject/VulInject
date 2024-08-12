static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2->VAR5;
    int VAR6;
    VAR4->VAR7 = VAR2->VAR7;
    VAR4->VAR8 = VAR2->VAR9;
    VAR4->VAR10 = VAR2->VAR10;
    FUN2("", VAR4->VAR7, VAR4->VAR8, VAR4->VAR10);
    for (VAR6 = 0; VAR6 < 8; VAR6++)
    {
        if (VAR6 < 4)
            VAR4->VAR11[VAR6] = VAR6;
        else
            VAR4->VAR11[VAR6] = VAR4->VAR11[VAR6 - 1] + VAR6 - 1;
        if (VAR6 == 0)
            VAR4->VAR12[VAR6] = 0;
        else if (VAR6 == 1)
            VAR4->VAR12[VAR6] = 4;
        else if (VAR6 == 2)
            VAR4->VAR12[VAR6] = 16;
        else
            VAR4->VAR12[VAR6] = 1 << (VAR6 + 4);
    }
    VAR4->VAR13[0] = 0;
    VAR4->VAR13[1] = 8;
    for (VAR6 = 0x02; VAR6 <= 0x20; VAR6++)
        VAR4->VAR13[VAR6] = (VAR6 - 1) << 4;
    for (VAR6 = 0x21; VAR6 <= 0x60; VAR6++)
        VAR4->VAR13[VAR6] = (VAR6 + 0x1F) << 3;
    for (VAR6 = 0x61; VAR6 <= 0x70; VAR6++)
        VAR4->VAR13[VAR6] = (VAR6 - 0x51) << 6;
    for (VAR6 = 0x71; VAR6 <= 0x78; VAR6++)
        VAR4->VAR13[VAR6] = (VAR6 - 0x69) << 8;
    for (VAR6 = 0x79; VAR6 <= 0x7D; VAR6++)
        VAR4->VAR13[VAR6] = (VAR6 - 0x75) << 10;
    VAR4->VAR13[0x7E] = 0x3000;
    VAR4->VAR13[0x7F] = 0x4000;
    for (VAR6 = 0; VAR6 < 8; VAR6++)
    {
        VAR4->VAR11[VAR6 + 8] = -VAR4->VAR11[VAR6];
        VAR4->VAR12[VAR6 + 8] = -VAR4->VAR12[VAR6];
    }
    for (VAR6 = 0; VAR6 < 128; VAR6++)
        VAR4->VAR13[VAR6 + 128] = -VAR4->VAR13[VAR6];
    return 0;
}