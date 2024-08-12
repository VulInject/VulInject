static int FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    FUN2(VAR3->VAR4, NULL, NULL, NULL, NULL);
    return VAR3->close(VAR3);
}