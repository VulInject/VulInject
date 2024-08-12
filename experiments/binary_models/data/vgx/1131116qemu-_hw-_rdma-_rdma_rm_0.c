int FUN1(VAR1 *VAR2, VAR3 *VAR4,
void *VAR5)
{
void **VAR6;

VAR6 = FUN2(&VAR2->VAR7, VAR4);
if (!VAR6) {
return -VAR8;
}

*VAR6 = VAR5;

return 0;
}