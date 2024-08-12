int FUN1(VAR1 *VAR2, int VAR3, int VAR4, VAR5 *VAR6, VAR7 *VAR8)
{
    int VAR9, VAR10;
    IVIHuffDesc VAR11;
    if (!VAR3)
    {
        VAR6->VAR12 = (VAR4) ? &VAR13[7] : &VAR14[7];
    }
    else
    {
        VAR6->VAR15 = FUN2(VAR2, 3);
        if (VAR6->VAR15 == 7)
        {
            VAR11.VAR16 = FUN2(VAR2, 4);
            if (!VAR11.VAR16)
            {
                FUN3(VAR8, VAR17, "");
                return VAR18;
            }
            for (VAR9 = 0; VAR9 < VAR11.VAR16; VAR9++)
                VAR11.VAR19[VAR9] = FUN2(VAR2, 4);
            if (FUN4(&VAR11, &VAR6->VAR20))
            {
                FUN5(&VAR6->VAR20, &VAR11);
                if (VAR6->VAR21.VAR22)
                    FUN6(&VAR6->VAR21);
                VAR10 = FUN7(&VAR6->VAR20, &VAR6->VAR21, 0);
                if (VAR10)
                {
                    VAR6->VAR20.VAR16 = 0;
                    FUN3(VAR8, VAR17, "");
                    return VAR10;
                }
            }
            VAR6->VAR12 = &VAR6->VAR21;
        }
        else
        {
            VAR6->VAR12 = (VAR4) ? &VAR13[VAR6->VAR15] : &VAR14[VAR6->VAR15];
        }
    }
    return 0;
}