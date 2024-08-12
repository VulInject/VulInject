static VAR1 *FUN1(VAR2 *VAR3, int64_t VAR4, VAR5 *VAR6, int VAR7, VAR8 *VAR9, void *VAR10)
{
    const VAR11 *VAR12;
    int VAR13 = 0, VAR14;
    for (VAR14 = 0; VAR14 < VAR6->VAR15; VAR14++)
    {
        if (VAR6->VAR16[VAR14].VAR17)
        {
            assert(VAR6->VAR16[VAR14].VAR17 >= 512);
            VAR13 = VAR14;
            break;
        }
    }
    VAR12 = VAR6->VAR16[VAR13].VAR18;
    if (FUN2(VAR3, VAR4, VAR12, VAR7))
    {
        VAR19 *VAR20;
        int VAR21;
        VAR21 = FUN3(VAR3, VAR12);
        if (VAR21 < 0)
        {
            return NULL;
        }
        VAR20 = FUN4(sizeof(*VAR20));
        VAR20->VAR9 = VAR9;
        VAR20->VAR10 = VAR10;
        FUN5(&VAR20->VAR6, VAR6->VAR22);
        FUN6(&VAR20->VAR6, VAR6, VAR6->VAR23);
        VAR20->VAR6.VAR23 -= 512;
        VAR20->VAR6.VAR16[VAR13].VAR18 += 512;
        VAR20->VAR6.VAR16[VAR13].VAR17 -= 512;
        return FUN7(VAR3->VAR24, VAR4 + 1, &VAR20->VAR6, VAR7 - 1, VAR25, VAR20);
    }
    return FUN7(VAR3->VAR24, VAR4, VAR6, VAR7, VAR9, VAR10);
}