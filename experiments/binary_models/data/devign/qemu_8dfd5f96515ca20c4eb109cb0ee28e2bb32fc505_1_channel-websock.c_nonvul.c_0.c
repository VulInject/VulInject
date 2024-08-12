static void FUN1(VAR1 *VAR2, uint16_t VAR3, const char *VAR4)
{
    struct iovec VAR5[2] = {
        {.VAR6 = &VAR3, .VAR7 = sizeof(VAR3)},
    };
    size_t VAR8 = 1;
    size_t VAR9 = VAR5[0].VAR7;
    FUN2(&VAR3);
    if (VAR4)
    {
        VAR5[1].VAR6 = (void *)VAR4;
        VAR5[1].VAR7 = strlen(VAR4);
        VAR9 += VAR5[1].VAR7;
        VAR8++;
    }
    FUN3(VAR2, VAR10, VAR5, VAR8, VAR9);
    FUN4(VAR2, NULL);
    FUN5(VAR2->VAR11, VAR12, NULL);
}