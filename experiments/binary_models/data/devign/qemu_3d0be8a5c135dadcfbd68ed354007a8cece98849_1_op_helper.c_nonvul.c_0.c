void FUN1(VAR1)(uint32_t VAR2)
{
    if (VAR3->VAR4[VAR5] != VAR2)
    {
        FUN2(VAR3, VAR3->VAR4[VAR5] - 1);
        VAR3->VAR4[VAR5] = VAR2;
        FUN2(VAR3, VAR3->VAR4[VAR5] - 1);
    }
}