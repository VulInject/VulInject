int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = VAR6;
    struct VAR7 *VAR8 = NULL;
    VAR9 *VAR10 = FUN2(VAR2);
    int VAR11;
    struct sg_io_hdr VAR12;
    if (VAR4->VAR13 < 2 || VAR4->VAR14 < 3)
    {
        VAR5 = VAR15;
        goto VAR16;
    }
    VAR8 = (void *)VAR4->VAR17[VAR4->VAR14 - 2].VAR18;
    if (!VAR2->VAR19.VAR8)
    {
        VAR5 = VAR20;
        goto VAR16;
    }
    if (VAR4->VAR13 > 2 && VAR4->VAR14 > 3)
    {
        VAR5 = VAR20;
        goto VAR16;
    }
    memset(&VAR12, 0, sizeof(struct VAR21));
    VAR12.VAR22 = '';
    VAR12.VAR23 = VAR4->VAR24[1].VAR25;
    VAR12.VAR26 = VAR4->VAR24[1].VAR18;
    VAR12.VAR27 = 0;
    if (VAR4->VAR13 > 2)
    {
        VAR12.VAR28 = VAR29;
        VAR12.VAR30 = VAR4->VAR13 - 2;
        for (VAR11 = 0; VAR11 < VAR12.VAR30; VAR11++)
            VAR12.VAR27 += VAR4->VAR24[VAR11 + 2].VAR25;
        VAR12.VAR31 = VAR4->VAR24 + 2;
    }
    else if (VAR4->VAR14 > 3)
    {
        VAR12.VAR28 = VAR32;
        VAR12.VAR30 = VAR4->VAR14 - 3;
        for (VAR11 = 0; VAR11 < VAR12.VAR30; VAR11++)
            VAR12.VAR27 += VAR4->VAR17[VAR11].VAR25;
        VAR12.VAR31 = VAR4->VAR17;
    }
    else
    {
        VAR12.VAR28 = VAR33;
    }
    VAR12.VAR34 = VAR4->VAR17[VAR4->VAR14 - 3].VAR18;
    VAR12.VAR35 = VAR4->VAR17[VAR4->VAR14 - 3].VAR25;
    VAR5 = FUN3(VAR2->VAR2, VAR36, &VAR12);
    if (VAR5)
    {
        VAR5 = VAR20;
        goto VAR16;
    }
    if (VAR12.VAR5 == 0 && VAR12.VAR37 > 0)
    {
        VAR12.VAR5 = VAR38;
    }
    FUN4(VAR10, &VAR8->VAR39, VAR12.VAR5 | (VAR12.VAR40 << 8) | (VAR12.VAR41 << 16) | (VAR12.VAR42 << 24));
    FUN4(VAR10, &VAR8->VAR43, VAR12.VAR44);
    FUN4(VAR10, &VAR8->VAR45, VAR12.VAR37);
    FUN4(VAR10, &VAR8->VAR46, VAR12.VAR27);
    return VAR5;
    FUN5();
VAR16:
    if (VAR8)
    {
        FUN4(VAR10, &VAR8->VAR39, 255);
    }
    return VAR5;
}