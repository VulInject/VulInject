static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VirtQueueElement VAR7;
    VAR8 *VAR9;
    size_t VAR10 = 0;
    size_t VAR11 = 0;
    VAR9 = VAR3->VAR12;
    if (!FUN2(VAR9))
    {
        return 0;
    }
    while (VAR10 < VAR6)
    {
        int VAR13;
        if (!FUN3(VAR9, &VAR7))
        {
            break;
        }
        for (VAR13 = 0; VAR10 < VAR6 && VAR13 < VAR7.VAR14; VAR13++)
        {
            VAR11 = FUN4(VAR7.VAR15[VAR13].VAR16, VAR6 - VAR10);
            memcpy(VAR7.VAR15[VAR13].VAR17, VAR5 + VAR10, VAR11);
            VAR10 += VAR11;
        }
        FUN5(VAR9, &VAR7, VAR11);
    }
    FUN6(&VAR3->VAR18->VAR19, VAR9);
    return VAR10;
}