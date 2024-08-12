static bool FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6, void *VAR7, uint32_t VAR8, bool *VAR9)
{
    struct VAR5 *VAR10 = VAR6;
    struct VAR5 *VAR11 = NULL;
    struct VAR5 *new = NULL;
    int VAR12;
    do
    {
        for (VAR12 = 0; VAR12 < VAR13; VAR12++)
        {
            if (VAR10->VAR14[VAR12])
            {
                if (FUN2(VAR10->VAR14[VAR12] == VAR7))
                {
                    return false;
                }
            }
            else
            {
                goto VAR15;
            }
        }
        VAR11 = VAR10;
        VAR10 = VAR10->VAR16;
    } while (VAR10);
    VAR10 = FUN3(VAR17, sizeof(*VAR10));
    memset(VAR10, 0, sizeof(*VAR10));
    new = VAR10;
    VAR12 = 0;
    FUN4(&VAR4->VAR18);
    if (FUN2(FUN5(VAR4)) && VAR9)
    {
        *VAR9 = true;
    }
VAR15:
    FUN6(&VAR6->VAR19);
    if (new)
    {
        FUN7(&VAR11->VAR16, VAR10);
    }
    VAR10->VAR20[VAR12] = VAR8;
    FUN8(&VAR10->VAR14[VAR12], VAR7);
    FUN9(&VAR6->VAR19);
    return true;
}