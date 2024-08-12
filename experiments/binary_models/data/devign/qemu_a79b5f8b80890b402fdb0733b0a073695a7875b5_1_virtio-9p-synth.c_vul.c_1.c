int FUN1(VAR1 *VAR2, int VAR3, const char *VAR4, v9fs_synth_read read, v9fs_synth_write write, void *VAR5)
{
    int VAR6;
    VAR1 *VAR7, *VAR8;
    if (!VAR9)
    {
        return VAR10;
    }
    if (!VAR4 || (strlen(VAR4) >= VAR11))
    {
        return VAR12;
    }
    if (!VAR2)
    {
        VAR2 = &VAR13;
    }
    FUN2(&VAR14);
    FUN3(VAR8, &VAR2->VAR15, VAR16)
    {
        if (!strcmp(VAR8->VAR4, VAR4))
        {
            VAR6 = VAR17;
            goto VAR18;
        }
    }
    VAR3 = ((VAR3 & 0777) | VAR19);
    VAR7 = FUN4(sizeof(VAR1));
    VAR7->VAR20 = &VAR7->VAR21;
    VAR7->VAR20->VAR22 = VAR23++;
    VAR7->VAR20->VAR24 = 1;
    VAR7->VAR20->read = read;
    VAR7->VAR20->write = write;
    VAR7->VAR20->VAR3 = VAR3;
    VAR7->private = VAR5;
    strncpy(VAR7->VAR4, VAR4, sizeof(VAR7->VAR4));
    FUN5(&VAR2->VAR15, VAR7, VAR16);
    VAR6 = 0;
VAR18:
    FUN6(&VAR14);
    return VAR6;
}