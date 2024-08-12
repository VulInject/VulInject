int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, uid_t VAR5)
{
uid_t VAR6;

if (FUN2(VAR2, VAR4, &VAR6) == 0)
return VAR6 == VAR5;

return 0;
}