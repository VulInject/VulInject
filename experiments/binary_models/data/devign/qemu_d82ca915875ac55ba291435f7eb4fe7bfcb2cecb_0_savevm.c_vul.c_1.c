int FUN1(VAR1 *VAR2)
{
    int VAR3 = 0;
    FUN2(VAR2);
    if (VAR2->close)
        VAR3 = VAR2->close(VAR2->VAR4);
    FUN3(VAR2);
    return VAR3;
}