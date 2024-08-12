static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    int VAR4;
    VAR3->VAR5 = 0x80000000;
    VAR3->VAR6 = ((VAR7 - 1) << 16) | ((VAR8 - 1) << 8) | VAR9;
    VAR3->VAR10 = VAR11;
    VAR3->VAR12 = 0x00000000;
    VAR3->VAR13 = 0x000000FF;
    VAR3->VAR14 = 0x003F7A00;
    VAR3->VAR15 = 0x00000000;
    for (VAR4 = 0; VAR4 < VAR3->VAR16; VAR4++)
    {
        VAR3->VAR17[VAR4].VAR18 = 0xA0000000;
        VAR3->VAR17[VAR4].VAR19 = 0x00000000;
    }
    for (VAR4 = 0; VAR4 < VAR8; VAR4++)
    {
        VAR3->VAR20[VAR4].VAR21 = 0x0000000F;
        VAR3->VAR20[VAR4].VAR22 = 0x00000000;
        memset(&VAR3->VAR20[VAR4].VAR23, 0, sizeof(VAR24));
        memset(&VAR3->VAR20[VAR4].VAR25, 0, sizeof(VAR24));
    }
    for (VAR4 = 0; VAR4 < VAR26; VAR4++)
    {
        VAR3->VAR27[VAR4].VAR28 = 0x00000000;
        VAR3->VAR27[VAR4].VAR29 = 0x80000000;
    }
    VAR3->VAR30 = 0x00000000;
    for (VAR4 = 0; VAR4 < VAR31; VAR4++)
    {
        VAR3->VAR32[VAR4].VAR33 = 0x00000000;
    }
    for (VAR4 = 0; VAR4 < VAR34; VAR4++)
    {
        VAR3->VAR35[VAR4].VAR36 = 0x00000000;
    }
    VAR3->VAR5 = 0x00000000;