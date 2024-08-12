static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    uint8_t VAR4[VAR5];
    int VAR6;
    VAR6 = FUN2(VAR3->VAR7, (char *)VAR4, sizeof(VAR4), 0);
    if (VAR6 > 0)
    {
        FUN3(&VAR3->VAR8, VAR4, VAR6);
    }
}