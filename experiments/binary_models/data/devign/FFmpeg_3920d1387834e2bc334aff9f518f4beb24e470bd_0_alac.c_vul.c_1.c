static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4 = VAR2->VAR5 * sizeof(VAR6);
    for (VAR3 = 0; VAR3 < FUN2(VAR2->VAR7, 2); VAR3++)
    {
        FUN3(VAR2->VAR8, VAR2->VAR9[VAR3], VAR4, VAR10);
        VAR2->VAR11 = VAR2->VAR12 > 16 && FUN4(VAR2->VAR8->VAR13);
        if (!VAR2->VAR11)
        {
            FUN3(VAR2->VAR8, VAR2->VAR14[VAR3], VAR4, VAR10);
        }
        FUN3(VAR2->VAR8, VAR2->VAR15[VAR3], VAR4, VAR10);
    }
    return 0;
VAR10:
    FUN5(VAR2->VAR8);
    return FUN6(VAR16);
}