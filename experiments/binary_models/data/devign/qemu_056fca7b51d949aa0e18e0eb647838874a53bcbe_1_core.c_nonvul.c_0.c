int FUN1(VAR1 *VAR2)
{
    uint8_t VAR3;
    int VAR4 = FUN2(VAR2, &VAR3, false);
    return VAR4 < 0 ? VAR4 : VAR3;
}