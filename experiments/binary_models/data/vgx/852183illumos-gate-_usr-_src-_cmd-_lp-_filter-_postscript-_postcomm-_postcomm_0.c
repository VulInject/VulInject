static void
FUN1(void)
{
if ((VAR1 = malloc(VAR2)) == NULL)
FUN2(VAR3, "");

VAR4 = FUN3(VAR5);

if ((VAR6 = FUN4(VAR4)) == -1)
FUN2(VAR3, "");




FUN5("");

while ( 1 )
switch (FUN6(1))
{
case VAR7:
if (VAR8 != NULL)
write(VAR6, VAR8, strlen(VAR8));
else
write(VAR6, "", 1);
return;

case VAR9:
case VAR10:
case VAR11:
write(VAR6, "", 2);
sleep(1);
break;

case VAR12:
write(VAR6, "", 1);
sleep(1);
break;

case VAR13:
case VAR14:
sleep(15);
break;

case VAR15:

FUN2(VAR3, "");
break;

default:
sleep(1);
break;

}   

}