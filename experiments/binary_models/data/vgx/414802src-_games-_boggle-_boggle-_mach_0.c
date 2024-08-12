void
FUN1(char *VAR1)
{
int VAR2, VAR3, VAR4, VAR5, VAR6;
char *VAR7;

VAR4 = 0;
VAR5 = 0;
VAR7 = VAR1;
FUN2('');
FUN3();
while (!VAR4 && VAR5 < VAR8 - 1) {
VAR2 = FUN4();
switch (VAR2) {
case '':			
case '':			
if (VAR7 == VAR1)
break;
VAR7--;
FUN5(VAR9, VAR6, VAR3);
move(VAR6, VAR3 - 1);
FUN6();
break;
case '':			
case '':			
if (VAR7 == VAR1)
break;
FUN5(VAR9, VAR6, VAR3);
move(VAR6, VAR3 - (int) (VAR7 - VAR1));
VAR7 = VAR1;
FUN6();
break;
case '':
case '':
case '':
VAR4 = 1;
break;
case '':			
case '':			
FUN7(VAR9, 1);
FUN3();
break;
default:
if (FUN8(VAR2)) {
*VAR7++ = VAR2;
FUN2(VAR2);
VAR5++;
}
break;
}
FUN3();
}
*VAR7 = '';
FUN2('');
FUN3();
}