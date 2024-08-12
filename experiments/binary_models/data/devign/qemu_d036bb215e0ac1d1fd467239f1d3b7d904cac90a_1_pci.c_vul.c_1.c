static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    memset(VAR2->VAR4, 0, sizeof VAR2->VAR4);
    VAR2->VAR5[VAR6] &= ~(VAR7 | VAR8 | VAR9);
    VAR2->VAR5[VAR10] = 0x0;
    VAR2->VAR5[VAR11] = 0x0;
    for (VAR3 = 0; VAR3 < VAR12; ++VAR3)
    {
        if (!VAR2->VAR13[VAR3].VAR14)
        {
            continue;
        }
        FUN2(VAR2->VAR5 + FUN3(VAR2, VAR3), VAR2->VAR13[VAR3].VAR15);
    }
    FUN4(VAR2);
}