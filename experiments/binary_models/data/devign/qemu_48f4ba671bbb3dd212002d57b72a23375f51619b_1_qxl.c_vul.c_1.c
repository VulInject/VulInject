static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    switch (FUN2(VAR4->VAR5.VAR6))
    {
    case VAR7:
    {
        VAR8 *VAR5 = FUN3(VAR2, VAR4->VAR5.VAR9, VAR4->VAR10);
        if (!VAR5)
        {
            uint32_t VAR11 = FUN2(VAR5->VAR12);
            if (VAR11 >= VAR2->VAR13.VAR14)
            {
                FUN4(VAR2, "", VAR11, VAR2->VAR13.VAR14);
                FUN5(&VAR2->VAR15);
                if (VAR5->VAR6 == VAR16)
                {
                    VAR2->VAR17.VAR18[VAR11] = VAR4->VAR5.VAR9;
                    VAR2->VAR17.VAR19++;
                    if (VAR2->VAR17.VAR20 < VAR2->VAR17.VAR19)
                        VAR2->VAR17.VAR20 = VAR2->VAR17.VAR19;
                    if (VAR5->VAR6 == VAR21)
                    {
                        VAR2->VAR17.VAR18[VAR11] = 0;
                        VAR2->VAR17.VAR19--;
                        FUN6(&VAR2->VAR15);
                        break;
                    case VAR22:
                    {
                        VAR23 *VAR5 = FUN3(VAR2, VAR4->VAR5.VAR9, VAR4->VAR10);
                        if (!VAR5)
                        {
                            if (VAR5->VAR6 == VAR24)
                            {
                                FUN5(&VAR2->VAR15);
                                VAR2->VAR25 = VAR4->VAR5.VAR9;
                                FUN6(&VAR2->VAR15);
                                break;
                                return 0;