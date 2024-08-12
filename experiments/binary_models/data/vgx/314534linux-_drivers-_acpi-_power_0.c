static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
if (VAR2->VAR4 == VAR5) {
int VAR6;

VAR6 = FUN2(VAR2->VAR7.VAR8, &VAR2->VAR4);
if (VAR6)
return VAR6;
}

*VAR4 = VAR2->VAR4;
return 0;
}