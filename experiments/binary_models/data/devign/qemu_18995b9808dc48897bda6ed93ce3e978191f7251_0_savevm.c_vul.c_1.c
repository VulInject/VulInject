static void FUN1(void *VAR1)
{
    int VAR2, VAR3;
    VAR4 *VAR5;
    VAR6 *VAR7;
    uint8_t VAR8[256];
    static int VAR9 = VAR10;
    VAR11 *VAR12 = *(VAR11 **)VAR1;
    for (VAR2 = 0; VAR2 < VAR13; VAR2++)
    {
        if (!VAR14[VAR2].VAR15)
            continue;
        VAR3 = FUN2(VAR8, VAR14[VAR2].VAR16);
        VAR5 = VAR14[VAR2].VAR5;
        FUN3(VAR7, &VAR5->VAR17, VAR18) { VAR7->FUN4(VAR7, VAR8, VAR3); }
    }
    if (VAR9--)
    {
        FUN5(VAR12, FUN6(VAR19) + 100);
    }
    else
    {
        FUN7(VAR12);
        FUN8(VAR12);
    }
}