static void FUN1(void *VAR1)
{
    int VAR2;
    VAR3 *VAR4;
    for (VAR4 = VAR5; VAR4 != NULL; VAR4 = VAR4->VAR6)
    {
        VAR2 = VAR7[VAR4->VAR8];
        if (VAR2 & 0x80)
        {
            FUN2(0xe0);
        }
        FUN2(VAR2 | 0x80);
    }
    FUN3(VAR5);
    VAR5 = NULL;
}