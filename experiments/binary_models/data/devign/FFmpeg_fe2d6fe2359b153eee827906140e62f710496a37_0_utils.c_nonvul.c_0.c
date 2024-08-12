int FUN1(VAR1 *VAR2)
{
    int VAR3;
    for (;;)
    {
        AVPacket VAR4;
        VAR3 = FUN2(VAR2, &VAR4, NULL, 1);
        if (VAR3 < 0)
            return VAR3;
        if (!VAR3)
            break;
        FUN3(VAR2->VAR5[VAR4.VAR6], &VAR4);
        VAR3 = VAR2->VAR7->FUN4(VAR2, &VAR4);
        FUN5(&VAR4);
        if (VAR3 < 0)
            return VAR3;
    }
    VAR3 = VAR2->VAR7->FUN6(VAR2);
    FUN7(&VAR2->VAR8);
    return VAR3;
}