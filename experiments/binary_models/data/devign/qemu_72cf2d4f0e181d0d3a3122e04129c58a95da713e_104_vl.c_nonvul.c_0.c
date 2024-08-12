void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    FUN2(VAR4, &VAR5, VAR6)
    {
        if (VAR4->VAR2 != VAR2)
            continue;
        FUN3(VAR4->VAR7);
        FUN4(&VAR5, VAR4, VAR6);
        FUN5(VAR4);
        break;
    }
}