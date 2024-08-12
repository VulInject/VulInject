static int FUN1(struct VAR1 *VAR2)
{
int VAR3 = FUN2 (VAR2, VAR4,
((VAR5 == VAR2->VAR6)
? VAR7
: 0));

return VAR3 < 0 ? VAR3 : 0;
}