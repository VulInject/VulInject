static int FUN1(struct VAR1 *VAR2)
{
int VAR3 = 0;


if (!VAR2)
return -VAR4;

FUN2(VAR2);


VAR3 = FUN3(VAR2);
if (VAR3)
return VAR3;


VAR3 = FUN4(VAR2);
if (VAR3)
return VAR3;


VAR3 = FUN5(VAR2, VAR5);
if (!VAR3)
VAR2->VAR6.VAR7 = 1;


if (VAR8)
VAR2->VAR9 = VAR8;
else
FUN6(VAR2);

return 0;
}