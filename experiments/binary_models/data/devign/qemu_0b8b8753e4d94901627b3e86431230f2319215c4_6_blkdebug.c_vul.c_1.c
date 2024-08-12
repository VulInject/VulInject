static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8, *VAR9;
    VAR10 *VAR11, *VAR12;
    int VAR13, VAR14 = -VAR15;
    for (VAR13 = 0; VAR13 < VAR16; VAR13++)
    {
        FUN2(VAR11, &VAR5->VAR17[VAR13], VAR12, VAR12)
        {
            if (VAR11->VAR18 == VAR19 && !strcmp(VAR11->VAR20.VAR21.VAR3, VAR3))
            {
                FUN3(VAR11);
                VAR14 = 0;
            }
        }
    }
    FUN2(VAR8, &VAR5->VAR22, VAR12, VAR9)
    {
        if (!strcmp(VAR8->VAR3, VAR3))
        {
            FUN4(VAR8->VAR23, NULL);
            VAR14 = 0;
        }
    }
    return VAR14;
}