static void FUN1(VAR1 *VAR2, int VAR3, int VAR4) static void FUN1(VAR1 *VAR2, int VAR4)
{
    int VAR5;
    VAR2->VAR3 = VAR3;
    if (VAR2->VAR3 > VAR6)
    {
        FUN2("", VAR3, VAR6);
    }
    VAR2->VAR4 = VAR4 + VAR7;
    if (VAR2->VAR4 > VAR8)
    {
        FUN2("", VAR4, VAR8);
    }
    if (VAR2->VAR4 < 32 || (VAR2->VAR4 % 32))
    {
        FUN2("", VAR4);
    }
    VAR5 = VAR2->VAR4 - VAR9;
    VAR5 += (VAR9 * VAR3);
    FUN3(&VAR2->VAR10.VAR11, VAR12, VAR5);
    for (VAR5 = 0; VAR5 < FUN4(VAR2); VAR5++)
    {
        FUN5(&VAR2->VAR10, &VAR2->VAR13[VAR5]);
    }
    FUN6(&VAR2->VAR14, &VAR15, VAR2, "", 0x1000);
    FUN6(&VAR2->VAR16[0], &VAR17, VAR2, "", 0x100);
    for (VAR5 = 0; VAR5 < FUN4(VAR2); VAR5++)
    {
        VAR2->VAR18[VAR5] = VAR2;
        FUN6(&VAR2->VAR16[VAR5 + 1], &VAR19, &VAR2->VAR18[VAR5], "", 0x100);
    }
    FUN7(VAR2);
    FUN8(NULL, "", -1, 2, VAR20, VAR21, VAR2);
}