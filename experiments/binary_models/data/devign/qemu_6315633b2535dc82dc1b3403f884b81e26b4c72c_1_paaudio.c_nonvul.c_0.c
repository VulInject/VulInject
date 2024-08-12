static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = &VAR3->VAR5;
    if (FUN2(&VAR3->VAR6, VAR7))
    {
        return NULL;
    }
    for (;;)
    {
        int VAR8, VAR9, VAR10;
        for (;;)
        {
            if (VAR3->VAR11)
            {
                goto VAR12;
            }
            if (VAR3->VAR13 > 0)
            {
                break;
            }
            if (FUN3(&VAR3->VAR6, VAR7))
            {
                goto VAR12;
            }
        }
        VAR8 = VAR9 = FUN4(VAR3->VAR13, VAR14.VAR15 >> 2);
        VAR10 = VAR3->VAR10;
        if (FUN5(&VAR3->VAR6, VAR7))
        {
            return NULL;
        }
        while (VAR9)
        {
            int VAR16;
            int VAR17 = FUN4(VAR9, VAR5->VAR15 - VAR10);
            struct VAR18 *VAR19 = VAR5->VAR20 + VAR10;
            VAR5->FUN6(VAR3->VAR21, VAR19, VAR17);
            if (FUN7(VAR3->VAR22, VAR3->VAR21, VAR17 << VAR5->VAR23.VAR24, &VAR16) < 0)
            {
                FUN8(VAR16, "");
                return NULL;
            }
            VAR10 = (VAR10 + VAR17) % VAR5->VAR15;
            VAR9 -= VAR17;
        }
        if (FUN2(&VAR3->VAR6, VAR7))
        {
            return NULL;
        }
        VAR3->VAR10 = VAR10;
        VAR3->VAR13 -= VAR8;
        VAR3->VAR8 += VAR8;
    }
VAR12:
    FUN5(&VAR3->VAR6, VAR7);
    return NULL;
}