static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4;
    FUN2(VAR3);
    VAR3->VAR5 = (VAR3->VAR6 & ~0x3800) | (VAR3->VAR7 & 0x7) << 11;
    VAR3->VAR8 = 0;
    for (VAR4 = 0; VAR4 < 8; VAR4++)
    {
        VAR3->VAR8 |= ((!VAR3->VAR9[VAR4]) << VAR4);
    }
    VAR3->VAR10 = 0;
    VAR3->VAR10 = 1;
}