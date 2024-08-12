static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
if (FUN2(VAR2))
return VAR4;

switch (FUN3(VAR2->VAR5, VAR2)) {
case VAR6:
FUN4("", VAR2, 0);
break;

case VAR7:

FUN5(VAR2, NULL);
break;

default:

return VAR4;
}


VAR2->VAR5 += VAR8;	
return VAR9;
}