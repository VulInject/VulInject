static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);


VAR4->VAR5 = (void *)FUN3(VAR2, 0);
if ((VAR6)VAR4->VAR5 == VAR7)
return -VAR8;


VAR4->VAR9 = (void *)FUN4(VAR2, 1,
&VAR4->VAR10);
if ((VAR6)VAR4->VAR9 == VAR7)
return -VAR8;

return 0;
}