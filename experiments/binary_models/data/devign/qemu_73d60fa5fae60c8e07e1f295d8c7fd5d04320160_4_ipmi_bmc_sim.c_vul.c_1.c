static void FUN1(VAR1 *VAR2)
{
    unsigned int VAR3, VAR4;
    VAR5 *VAR6;
    for (VAR3 = 0; VAR3 < VAR7; VAR3++)
    {
        memset(VAR2->VAR8 + VAR3, 0, sizeof(*VAR6));
    }
    VAR4 = 0;
    for (VAR3 = 0; !FUN2(&VAR2->VAR9, VAR3, &VAR4, NULL); VAR3++)
    {
        struct VAR10 *VAR9 = (struct VAR10 *)&VAR2->VAR9.VAR9[VAR4];
        unsigned int VAR11 = VAR9->VAR12.VAR13;
        if (VAR11 < 20)
        {
            continue;
        }
        if (VAR9->VAR12.VAR14 != VAR15)
        {
            continue;
        }
        if (VAR9->VAR16 > VAR7)
        {
            continue;
        }
        VAR6 = VAR2->VAR8 + VAR9->VAR16;
        FUN3(VAR6, 1);
        FUN4(VAR6, (VAR9->VAR17 >> 6) & 1);
        FUN5(VAR6, (VAR9->VAR17 >> 5) & 1);
        VAR6->VAR18 = VAR9->VAR19[0] | (VAR9->VAR19[1] << 8);
        VAR6->VAR20 = VAR9->VAR21[0] | (VAR9->VAR21[1] << 8);
        VAR6->VAR22 = VAR9->VAR23[0] | (VAR9->VAR23[1] << 8);
        VAR6->VAR24 = VAR9->VAR24;
        VAR6->VAR25 = VAR9->VAR26 & 0x7f;
        VAR6->VAR27 = VAR6->VAR18;
        VAR6->VAR28 = VAR6->VAR20;
    }
}