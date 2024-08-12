static void FUN1(struct VAR1 *VAR2)
{
    VAR2->VAR3 = 0;
    VAR2->VAR4 = 0;
    VAR2->VAR5 = 0;
    VAR2->VAR6 = -1;
    VAR2->VAR7 = -1;
    VAR2->VAR8 = VAR9;
    VAR2->VAR10 = 24;
    VAR2->VAR11 = (VAR2->VAR10 + 7) >> 3;
    VAR2->VAR12.VAR13 = 0;
    VAR2->VAR14 = 0;
    VAR2->VAR15 = 0;
    switch (VAR2->VAR10)
    {
    case 8:
        VAR2->VAR16 = 0x00000007;
        VAR2->VAR17 = 0x00000038;
        VAR2->VAR18 = 0x000000c0;
        break;
    case 15:
        VAR2->VAR16 = 0x0000001f;
        VAR2->VAR17 = 0x000003e0;
        VAR2->VAR18 = 0x00007c00;
        break;
    case 16:
        VAR2->VAR16 = 0x0000001f;
        VAR2->VAR17 = 0x000007e0;
        VAR2->VAR18 = 0x0000f800;
        break;
    case 24:
        VAR2->VAR16 = 0x00ff0000;
        VAR2->VAR17 = 0x0000ff00;
        VAR2->VAR18 = 0x000000ff;
        break;
    case 32:
        VAR2->VAR16 = 0x00ff0000;
        VAR2->VAR17 = 0x0000ff00;
        VAR2->VAR18 = 0x000000ff;
        break;
    }
    VAR2->VAR19 = 0;
}