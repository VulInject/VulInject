static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6 = 0;
    int VAR7 = 0;
    VAR8 *VAR9 = NULL;
    int VAR10 = VAR2->VAR10;
    if (!FUN2(VAR2))
    {
        const VAR11 *VAR12 = FUN3(VAR2->VAR13);
        VAR6 = FUN4(VAR2, VAR12, NULL);
        if (VAR6 < 0)
        {
            FUN5(VAR2, VAR14, "");
            goto VAR15;
        }
    }
    VAR9 = FUN6();
    if (!VAR9)
    {
        FUN5(NULL, VAR14, "");
        goto VAR15;
    }
    if (!VAR5 && VAR2->VAR12->VAR16 & VAR17)
    {
        VAR2->VAR10 = VAR18;
    }
    do
    {
        VAR6 = FUN7(VAR2, VAR9, &VAR7, VAR4);
        FUN8(VAR5 || (!VAR5 && !VAR7));
        if (VAR6 < 0)
            break;
        VAR4->VAR19 += VAR6;
        VAR4->VAR20 -= VAR6;
        if (VAR7)
        {
            break;
        }
    } while (VAR4->VAR20 > 0);
VAR15:
    VAR2->VAR10 = VAR10;
    FUN9(&VAR9);
    return VAR6;
}