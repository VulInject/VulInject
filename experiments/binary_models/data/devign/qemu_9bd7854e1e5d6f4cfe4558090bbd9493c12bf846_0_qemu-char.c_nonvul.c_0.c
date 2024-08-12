static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    uint8_t VAR8[VAR9];
    DWORD VAR10;
    FUN2(&VAR4->VAR11, sizeof(VAR4->VAR11));
    VAR4->VAR11.VAR12 = VAR4->VAR13;
    VAR6 = FUN3(VAR4->VAR14, VAR8, VAR4->VAR15, &VAR10, &VAR4->VAR11);
    if (!VAR6)
    {
        VAR7 = FUN4();
        if (VAR7 == VAR16)
        {
            VAR6 = FUN5(VAR4->VAR14, &VAR4->VAR11, &VAR10, VAR17);
        }
    }
    if (VAR10 > 0)
    {
        FUN6(VAR2, VAR8, VAR10);
    }
}