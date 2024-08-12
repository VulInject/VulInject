void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
    struct VAR5 *VAR6;
    int VAR7;
    VAR6 = FUN2(&VAR2->VAR6);
    VAR4->VAR8 = VAR6->VAR9;
    VAR4->VAR10 = 0;
    VAR4->VAR11 = 0;
    FUN3(&VAR4->VAR12);
    FUN3(&VAR4->VAR13);
    for (VAR7 = 0; VAR7 < VAR6->VAR9; VAR7++)
    {
        struct VAR14 *VAR15 = &VAR6->VAR16[VAR7];
        struct VAR14 *VAR17;
        unsigned int VAR18;
        size_t VAR16;
        size_t VAR11;
        int VAR19;
        do
        {
            VAR18 = FUN4(&VAR15->VAR20);
            VAR16 = 0;
            VAR11 = 0;
            VAR17 = VAR15;
            do
            {
                for (VAR19 = 0; VAR19 < VAR21; VAR19++)
                {
                    if (FUN5(&VAR17->VAR22[VAR19]) == NULL)
                    {
                        break;
                    }
                    VAR11++;
                }
                VAR16++;
                VAR17 = FUN2(&VAR17->VAR23);
            } while (VAR17);
        } while (FUN6(&VAR15->VAR20, VAR18));
        if (VAR11)
        {
            FUN7(&VAR4->VAR12, VAR16);
            FUN7(&VAR4->VAR13, (double)VAR11 / VAR21 / VAR16);
            VAR4->VAR10++;
            VAR4->VAR11 += VAR11;
        }
        else
        {
            FUN7(&VAR4->VAR13, 0);
        }
    }
}