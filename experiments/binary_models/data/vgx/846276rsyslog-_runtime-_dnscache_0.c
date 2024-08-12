static unsigned int
FUN1(void *VAR1)
{
int VAR2 = 0;
VAR3 *VAR4; 
unsigned VAR5 = 1;

switch (((struct VAR6 *)VAR1)->VAR7) {
case VAR8:
VAR2 = sizeof (struct VAR9);
VAR4 = (VAR3*) &(((struct VAR10 *)VAR1)->VAR11);
break;
case VAR12:
VAR2 = sizeof (struct VAR13);
VAR4 = (VAR3*) &(((struct VAR14 *)VAR1)->VAR15);
break;
default:
FUN2("");
VAR2 = 0;
VAR4 = NULL;
}
while(VAR2--)
VAR5 = VAR5 * 33 + *VAR4++;

return VAR5;
}