VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5)
{
    VAR1 *VAR6;
    VAR6 = FUN2(sizeof(VAR1));
    if (!VAR6)
        return NULL;
    VAR6->VAR7 = FUN2(sizeof(VAR8));
    memcpy(&VAR6->VAR5, VAR5, sizeof(VAR4));
    VAR3->VAR9[VAR3->VAR10++] = VAR6;
    return VAR6;