static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    FUN2(VAR3->VAR4);
    memset(VAR3->VAR5, 0, sizeof VAR3->VAR5);
    memmove(VAR3->VAR5, VAR6, sizeof VAR6);
    memset(VAR3->VAR7, 0, sizeof VAR3->VAR7);
    memmove(VAR3->VAR7, VAR8, sizeof VAR8);
    VAR3->VAR9 = 1;
    memset(&VAR3->VAR10, 0, sizeof VAR3->VAR10);
    if (VAR3->VAR11->VAR12.VAR13)
    {
        FUN3(VAR3);
    }
    VAR3->VAR7[VAR14] = 0;
    VAR3->VAR7[VAR14 + 1] = VAR15;
    for (VAR16 = 0; VAR16 < 4; VAR16++)
    {
        VAR3->VAR7[VAR14] |= VAR17[VAR16] << (8 * VAR16);
        VAR3->VAR7[VAR14 + 1] |= (VAR16 < 2) ? VAR17[VAR16 + 4] << (8 * VAR16) : 0;
    }