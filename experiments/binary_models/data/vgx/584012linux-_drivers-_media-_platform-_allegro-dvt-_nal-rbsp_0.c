static int FUN1(struct VAR1 *VAR1)
{
unsigned int VAR2 = 0;

VAR1->VAR3 = 0;
FUN2(VAR1, 8, &VAR2);
if (VAR2 != VAR4)
return -VAR5;

return 0;
}