static VAR1 FUN1(gpointer VAR2)
{
    VAR3 *VAR4;
    union
    {
        TraceRecord VAR5;
        uint8_t VAR6[sizeof(VAR3) + sizeof(VAR7)];
    } VAR8;
    unsigned int VAR9 = 0;
    int VAR10;
    size_t VAR11 FUN2((VAR11));
    for (;;)
    {
        FUN3();
        if (FUN4(&VAR12))
        {
            VAR8.VAR5.VAR13 = VAR14, VAR8.VAR5.VAR15 = FUN5();
            VAR8.VAR5.VAR16 = sizeof(VAR3) + sizeof(VAR7), VAR8.VAR5.VAR17 = 0;
            while (1)
            {
                VAR10 = FUN4(&VAR12);
                if (FUN6(&VAR12, VAR10, 0))
                {
                    break;
                }
            }
            VAR8.VAR5.VAR18[0] = VAR10;
            VAR11 = fwrite(&VAR8.VAR5, VAR8.VAR5.VAR16, 1, VAR19);
        }
        while (FUN7(VAR9, &VAR4))
        {
            VAR11 = fwrite(VAR4, VAR4->VAR16, 1, VAR19);
            VAR20 += VAR4->VAR16;
            free(VAR4);
            VAR9 = VAR20 % VAR21;
        }
        FUN8(VAR19);
    }
    return NULL;
}