int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
unsigned int VAR4, unsigned int VAR5)
{
if (VAR3 > 2)
return -VAR6;
if (VAR4 > 0xffff)
return -VAR6;
if (VAR5 > (VAR7 | VAR8))
return -VAR6;

FUN2(VAR2, VAR3, VAR5);
FUN3(VAR2, VAR3, VAR4);

return 0;
}