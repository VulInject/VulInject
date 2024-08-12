static void FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR3 = VAR1->VAR4;
int VAR5;

switch (VAR1->VAR6) {
case 0:			
break;
case -VAR7:	
case -VAR8:
case -VAR9:
return;

default:		
goto VAR10;
}

for (VAR5 = 0; VAR5 < 8; VAR5++)
FUN2(VAR3->VAR11, VAR12[VAR5 + 224], (VAR3->new[0] >> VAR5) & 1);

for (VAR5 = 2; VAR5 < 8; VAR5++) {

if (VAR3->VAR13[VAR5] > 3 && FUN3(VAR3->new + 2, VAR3->VAR13[VAR5], 6) == VAR3->new + 8) {
if (VAR12[VAR3->VAR13[VAR5]])
FUN2(VAR3->VAR11, VAR12[VAR3->VAR13[VAR5]], 0);
else
FUN4(VAR1->VAR11,
"",
VAR3->VAR13[VAR5]);
}

if (VAR3->new[VAR5] > 3 && FUN3(VAR3->VAR13 + 2, VAR3->new[VAR5], 6) == VAR3->VAR13 + 8) {
if (VAR12[VAR3->new[VAR5]])
FUN2(VAR3->VAR11, VAR12[VAR3->new[VAR5]], 1);
else
FUN4(VAR1->VAR11,
"",
VAR3->new[VAR5]);
}
}

FUN5(VAR3->VAR11);

memcpy(VAR3->VAR13, VAR3->new, 8);

VAR10:
VAR5 = FUN6 (VAR1, VAR14);
if (VAR5)
FUN7(VAR1->VAR11, "",
VAR3->VAR15->VAR16->VAR17,
VAR3->VAR15->VAR18, VAR5);
}