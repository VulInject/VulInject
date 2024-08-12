static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    memset(VAR2->VAR4, 0, VAR5 * sizeof(VAR6));
    for (VAR3 = 0; VAR3 < FUN2(VAR2); VAR3++)
    {
        VAR2->VAR7[VAR3] = 0xf0;
        VAR2->VAR8[VAR3] = 1023;
        VAR2->VAR9[VAR3] = 1023;
        VAR2->VAR10[VAR3] = 0x100;
        VAR2->VAR11[VAR3] = 1;
        VAR2->VAR11[VAR3] = 0;
    }
    for (VAR3 = 0; VAR3 < 16; VAR3++)
    {
        FUN3(VAR3, VAR12);
        FUN4(VAR3);
    }
    VAR2->VAR13 = 1;
    VAR2->VAR13 = 0;
}