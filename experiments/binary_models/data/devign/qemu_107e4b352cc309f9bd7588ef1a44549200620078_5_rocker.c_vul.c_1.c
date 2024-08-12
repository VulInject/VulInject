static void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    char *VAR6;
    int VAR7;
    VAR6 = FUN3(VAR2->VAR8);
    if (!VAR6)
    {
        FUN4("");
        return;
    }
    switch (VAR3)
    {
    case VAR9:
        memset(VAR6, 0, VAR2->VAR8);
        break;
    case VAR10:
        memset(VAR6, 0x96, VAR2->VAR8);
        break;
    case VAR11:
        FUN5(VAR5, VAR2->VAR12, VAR6, VAR2->VAR8);
        for (VAR7 = 0; VAR7 < VAR2->VAR8; VAR7++)
        {
            VAR6[VAR7] = ~VAR6[VAR7];
        }
        break;
    default:
        FUN4("", VAR3);
        goto VAR13;
    }
    FUN6(VAR5, VAR2->VAR12, VAR6, VAR2->VAR8);
    FUN7(VAR2, VAR14);
VAR13:
    FUN8(VAR6);
}