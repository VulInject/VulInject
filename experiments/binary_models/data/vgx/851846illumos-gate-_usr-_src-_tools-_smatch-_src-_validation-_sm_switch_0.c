struct VAR1 {
int VAR2;
};

struct VAR1 *VAR2;
struct VAR1 *VAR3;
struct VAR1 *VAR4;
struct VAR1 *VAR5;
int VAR6;

void FUN1 (void)
{
VAR2 = 0;
VAR3 = 0;
VAR4 = 0;
VAR5 = 0;

switch(VAR6) {
case 1:
VAR2 = FUN2();
break;
case 2:
VAR3 = FUN2();
break;
case 3:
VAR4 = FUN2();
break;
default:
VAR5 = FUN2();
}

switch(VAR6) {
case 1:
VAR2->VAR2 = 1;
case 2:
VAR2->VAR2 = 2;
VAR3->VAR2 = 3;
break;
case 3:
VAR4->VAR2 = 4;
break;
case 4:
VAR5->VAR2 = 5;
break;
}
}