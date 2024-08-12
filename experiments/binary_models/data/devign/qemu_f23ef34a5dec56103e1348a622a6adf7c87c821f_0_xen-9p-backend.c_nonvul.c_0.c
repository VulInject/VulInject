static int FUN1(struct VAR1 *VAR2)
{
    int VAR3;
    VAR4 *VAR5 = FUN2(VAR2, VAR4, VAR2);
    FUN3(VAR5->VAR6);
    FUN3(VAR5->VAR7);
    FUN3(VAR5->VAR8);
    FUN3(VAR5->VAR9);
    for (VAR3 = 0; VAR3 < VAR5->VAR10; VAR3++)
    {
        if (VAR5->VAR11[VAR3].VAR12 != NULL)
        {
            FUN4(VAR5->VAR2.VAR13, VAR5->VAR11[VAR3].VAR12, (1 << VAR5->VAR11[VAR3].VAR14));
        }
        if (VAR5->VAR11[VAR3].VAR15 != NULL)
        {
            FUN4(VAR5->VAR2.VAR13, VAR5->VAR11[VAR3].VAR15, 1);
        }
        if (VAR5->VAR11[VAR3].VAR16 > 0)
        {
            FUN5(FUN6(VAR5->VAR11[VAR3].VAR16), NULL, NULL, NULL);
            FUN7(VAR5->VAR11[VAR3].VAR16, VAR5->VAR11[VAR3].VAR17);
        }
        if (VAR5->VAR11[VAR3].VAR18 != NULL)
        {
            FUN8(VAR5->VAR11[VAR3].VAR18);
        }
    }
    FUN3(VAR5->VAR11);
    return 0;
}