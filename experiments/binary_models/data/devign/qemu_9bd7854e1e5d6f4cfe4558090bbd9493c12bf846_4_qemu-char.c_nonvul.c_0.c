static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR1;
    int VAR6, VAR7;
    uint8_t VAR8[VAR9];
    VAR7 = sizeof(VAR8);
    if (VAR7 > VAR5->VAR10)
        VAR7 = VAR5->VAR10;
    if (VAR7 == 0)
        return;
    VAR6 = read(VAR5->VAR11, VAR8, VAR7);
    if (VAR6 == 0)
    {
        FUN2(VAR5->VAR11, NULL, NULL, NULL, NULL);
        FUN3(VAR3, VAR12);
        return;
    }
    if (VAR6 > 0)
    {
        FUN4(VAR3, VAR8, VAR6);
    }
}