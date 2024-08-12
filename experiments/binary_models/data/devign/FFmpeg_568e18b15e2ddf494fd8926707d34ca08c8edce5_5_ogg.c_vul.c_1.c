static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    ogg_packet VAR8;
    char *VAR9;
    ogg_page VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    int VAR17;
    FUN2(&VAR6->VAR18);
    VAR9 = FUN3(&VAR6->VAR18, VAR19);
    if (FUN4(&VAR2->VAR20, VAR9, VAR19) <= 0)
        return VAR21;
    FUN5(&VAR6->VAR18, VAR19);
    FUN6(&VAR6->VAR18, &VAR10);
    FUN7(&VAR6->VAR22, FUN8(&VAR10));
    FUN9(&VAR6->VAR22, &VAR10);
    VAR12 = FUN10(VAR2, 0);
    if (!VAR12)
        return VAR23;
    FUN11(VAR12, 60, 1, VAR24);
    VAR14 = &VAR12->VAR14;
    VAR14->VAR25 = VAR26;
    VAR14->VAR27 = VAR28;
    for (VAR17 = 0; VAR17 < 3; VAR17++)
    {
        if (FUN12(VAR2, &VAR8))
        {
        }
        VAR14->VAR29 += 2 + VAR8.VAR30;
        VAR14->VAR31 = FUN13(VAR14->VAR31, VAR14->VAR29 + VAR32);
        VAR16 = VAR14->VAR31 + VAR14->VAR29 - 2 - VAR8.VAR30;
        *(VAR16++) = VAR8.VAR30 >> 8;
        *(VAR16++) = VAR8.VAR30 & 0xFF;
        memcpy(VAR16, VAR8.VAR33, VAR8.VAR30);
    }
    return 0;