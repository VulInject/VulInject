static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    int VAR4;
    VAR3->VAR5 = 0x80000000;
    VAR3->VAR6 = 0x004f0002;
    VAR3->VAR7 = VAR8;
    VAR3->VAR9 = 0x00000000;
    VAR3->VAR10 = 0x0000FFFF;
    for (VAR4 = 0; VAR4 < VAR3->VAR11; VAR4++)
    {
        VAR3->VAR12[VAR4].VAR13 = 0x80800000;
        VAR3->VAR12[VAR4].VAR14 = 0x00000001;
    }
    for (VAR4 = VAR3->VAR15; VAR4 < (VAR3->VAR15 + VAR16); VAR4++)
    {
        VAR3->VAR12[VAR4].VAR14 = 0;
    }
    for (VAR4 = 0; VAR4 < VAR17; VAR4++)
    {
        VAR3->VAR18[VAR4].VAR19 = 0x0000000F;
        VAR3->VAR18[VAR4].VAR20 = 0x00000000;
        memset(&VAR3->VAR18[VAR4].VAR21, 0, sizeof(VAR22));
        VAR3->VAR18[VAR4].VAR21.VAR23 = -1;
        memset(&VAR3->VAR18[VAR4].VAR24, 0, sizeof(VAR22));
        VAR3->VAR18[VAR4].VAR24.VAR23 = -1;
    }
    for (VAR4 = 0; VAR4 < VAR25; VAR4++)
    {
        VAR3->VAR26[VAR4].VAR27 = 0x00000000;
        VAR3->VAR26[VAR4].VAR28 = 0x80000000;
    }
    VAR3->VAR5 = 0x00000000;
}