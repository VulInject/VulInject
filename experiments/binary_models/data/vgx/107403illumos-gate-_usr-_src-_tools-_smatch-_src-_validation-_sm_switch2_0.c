struct VAR1 *VAR2;
struct VAR1 *VAR3;
struct VAR1 *VAR4;
int VAR5;

void FUN1 (void)
{
VAR6 = 0;
VAR2 = 0;
VAR3 = 0;
VAR4 = 0;

if (VAR5 == 1)
VAR6 = FUN2();
else if (VAR5 == 2)
VAR2 = FUN2();
else if (VAR5 == 3)
VAR3 = FUN2();
else
VAR4 = FUN2();

switch(VAR5) {
case 1:
VAR6->VAR6 = 1;
case 2:
VAR6->VAR6 = 2;
VAR2->VAR6 = 3;
break;
case 3:
VAR3->VAR6 = 4;
break;
case 4:
VAR4->VAR6 = 5;
break;
}
}