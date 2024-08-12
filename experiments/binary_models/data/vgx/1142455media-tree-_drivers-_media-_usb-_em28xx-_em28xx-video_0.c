static int FUN1(struct VAR1 *VAR2, unsigned int VAR3,
unsigned VAR4, unsigned VAR5)
{
struct VAR6     *VAR7;
struct VAR8    *VAR9 = VAR2->VAR9;

VAR7 = FUN2(VAR3);
if (!VAR7)
return -VAR10;

VAR9->VAR11 = VAR7;
VAR9->VAR4  = VAR4;
VAR9->VAR5 = VAR5;


FUN3(VAR2, VAR9->VAR4, VAR9->VAR5,
&VAR9->VAR12, &VAR9->VAR13);

FUN4(VAR2);

return 0;
}