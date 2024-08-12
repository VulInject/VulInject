static void FUN1(VAR1 *VAR2)
{
    uint16_t VAR3 = FUN2(VAR2->VAR4, VAR5.VAR6.VAR7);
    VAR2->VAR8 = VAR3 / sizeof(VAR2->VAR9[0]);
    VAR2->VAR9 = FUN3(VAR2->VAR9, VAR3);
    if (!VAR2->VAR9)
    {
        if (VAR2->VAR8 == 0)
        {
            FUN4("");
        }
        else
        {
            FUN5("", VAR2->VAR8);
        }
        VAR2->VAR8 = 0;
    }
    else
    {
        int VAR10;
        hwaddr VAR11 = FUN6(VAR2->VAR4, VAR5.VAR6.VAR12);
        FUN7(FUN8(VAR2), VAR11, VAR2->VAR9, VAR3);
        FUN4("", VAR2->VAR8);
        for (VAR10 = 0; VAR10 < VAR2->VAR8; VAR10++)
        {
            FUN4("" VAR13, FUN9(VAR2->VAR9[VAR10].VAR14));
        }
    }
}