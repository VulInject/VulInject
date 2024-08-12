static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR1;
    uint8_t VAR6[VAR7];
    int VAR8, VAR9;
    if (!VAR5->VAR10 || VAR5->VAR11 <= 0)
        return;
    VAR8 = sizeof(VAR6);
    if (VAR8 > VAR5->VAR11)
        VAR8 = VAR5->VAR11;
    VAR9 = FUN2(VAR3, (void *)VAR6, VAR8);
    if (VAR9 == 0)
    {
        VAR5->VAR10 = 0;
        if (VAR5->VAR12 >= 0)
        {
            FUN3(VAR5->VAR12, VAR13, NULL, VAR3);
        }
        FUN3(VAR5->VAR14, NULL, NULL, NULL);
        FUN4(VAR5->VAR14);
        VAR5->VAR14 = -1;
        FUN5(VAR3, VAR15);
    }
    else if (VAR9 > 0)
    {
        if (VAR5->VAR16)
            FUN6(VAR3, VAR5, VAR6, &VAR9);
        if (VAR9 > 0)
            FUN7(VAR3, VAR6, VAR9);
        if (VAR5->VAR17 != -1)
        {
            close(VAR5->VAR17);
            VAR5->VAR17 = -1;
        }
    }
}