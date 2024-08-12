static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4 = 0;
    int VAR5, VAR6 = 0;
    AVPacket VAR7;
    FUN2(&VAR7);
    while (!VAR6)
    {
        VAR8 *VAR9 = NULL;
        VAR10 *VAR11;
        if ((VAR4 = FUN3(VAR2, &VAR7)) < 0)
        {
            FUN4(VAR2, VAR12, "");
            goto VAR13;
            VAR11 = VAR2->VAR14[VAR7.VAR15];
            VAR9 = VAR11->VAR16;
            if (VAR9->VAR17 != VAR18 || VAR11->VAR19++ > 0)
            {
                FUN5(&VAR7);
                continue;
                VAR4 = FUN6(VAR9, &VAR7, VAR3);
                if (VAR4 < 0)
                {
                    FUN4(VAR2, VAR12, "");
                    goto VAR13;
                    FUN5(&VAR7);
                    VAR6 = 1;
                    VAR11 = VAR2->VAR14[VAR5];
                    VAR9 = VAR11->VAR16;
                    if (VAR9->VAR17 != VAR18)
                        continue;
                    VAR6 &= VAR11->VAR19 > 0;
                VAR13:
                    FUN5(&VAR7);
                    return VAR4 < 0