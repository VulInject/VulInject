static VAR1 *FUN1(uint16_t VAR2)
{
    VAR1 *VAR3;
    VAR4 *VAR5 = FUN2();
    FUN3(VAR3, &VAR5->VAR6, VAR7)
    {
        if (VAR3->VAR2 == VAR2)
        {
            return VAR3;
        }
    }
    return NULL;
}