int FUN1(void)
{
    struct VAR1 *VAR2 = NULL;
    int VAR3, VAR4 = -1;
    for (VAR3 = 0; VAR5[VAR3].VAR6; VAR3++)
    {
        VAR2 = &VAR5[VAR3];
        VAR4 = VAR2->FUN2(VAR2);
        if (!VAR4)
            break;
    }
    if (VAR4)
    {
        VAR4 = -VAR7;
        goto VAR8;
    }
    FUN3(VAR9);
    VAR10 = VAR2;
    return 0;
VAR8:
    return VAR4;
}