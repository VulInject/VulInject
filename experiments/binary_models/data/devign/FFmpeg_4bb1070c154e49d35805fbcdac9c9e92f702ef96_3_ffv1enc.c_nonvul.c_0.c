static void FUN1(VAR1 *VAR2)
{
    uint8_t VAR3[VAR4];
    int VAR5, VAR6;
    VAR7 *const VAR8 = &VAR2->VAR9[0]->VAR8;
    memset(VAR3, 128, sizeof(VAR3));
    if (VAR2->VAR10 < 2)
    {
        FUN2(VAR8, VAR3, VAR2->VAR10, 0);
        FUN2(VAR8, VAR3, VAR2->VAR11, 0);
        if (VAR2->VAR11 == VAR12)
        {
            for (VAR5 = 1; VAR5 < 256; VAR5++)
                FUN2(VAR8, VAR3, VAR2->VAR13[VAR5] - VAR8->VAR14[VAR5], 1);
        }
        FUN2(VAR8, VAR3, VAR2->VAR15, 0);
        if (VAR2->VAR10 > 0)
            FUN2(VAR8, VAR3, VAR2->VAR16, 0);
        FUN3(VAR8, VAR3, VAR2->VAR17);
        FUN2(VAR8, VAR3, VAR2->VAR18, 0);
        FUN2(VAR8, VAR3, VAR2->VAR19, 0);
        FUN3(VAR8, VAR3, VAR2->VAR20);
        FUN4(VAR8, VAR2->VAR21);
    }
    else if (VAR2->VAR10 < 3)
    {
        FUN2(VAR8, VAR3, VAR2->VAR22, 0);
        for (VAR5 = 0; VAR5 < VAR2->VAR22; VAR5++)
        {
            VAR1 *VAR23 = VAR2->VAR9[VAR5];
            FUN2(VAR8, VAR3, (VAR23->VAR24 + 1) * VAR2->VAR25 / VAR2->VAR26, 0);
            FUN2(VAR8, VAR3, (VAR23->VAR27 + 1) * VAR2->VAR28 / VAR2->VAR29, 0);
            FUN2(VAR8, VAR3, (VAR23->VAR30 + 1) * VAR2->VAR25 / VAR2->VAR26 - 1, 0);
            FUN2(VAR8, VAR3, (VAR23->VAR31 + 1) * VAR2->VAR28 / VAR2->VAR29 - 1, 0);
            for (VAR6 = 0; VAR6 < VAR2->VAR32; VAR6++)
            {
                FUN2(VAR8, VAR3, VAR2->VAR33[VAR6].VAR34, 0);
                FUN5(VAR2->VAR33[VAR6].VAR34 == VAR2->VAR35->VAR36);
            }
        }
    }
}