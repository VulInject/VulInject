static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR11;
    int VAR12;
    FUN2(&VAR10->VAR13, VAR4, VAR5 * 8);
    VAR12 = FUN3(&VAR10->VAR13, 4);
    switch (VAR12)
    {
    case 0x1:
        FUN4(VAR10);
        break;
    case 0x3:
        FUN5(VAR10);
        break;
    case 0x8:
        FUN6(VAR10);
        break;
    }
}