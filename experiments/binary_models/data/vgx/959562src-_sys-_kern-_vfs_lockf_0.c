int
FUN1(struct VAR1 *VAR2)
{
struct VAR1 *VAR3, *VAR4;
int VAR5;

FUN2(&VAR6);

VAR3 = FUN3(&VAR2->VAR7->VAR8);
if (VAR3 == NULL)
return (0);

FUN4(("", VAR2), VAR9);
while ((VAR5 = FUN5(VAR3, VAR2, VAR10, &VAR4))) {
FUN6(VAR4, 0);

switch (VAR5) {
case 1: 
FUN7(&VAR2->VAR7->VAR8, VAR4,
VAR11);
FUN8(VAR4);
break;
case 2: 
if (VAR4->VAR12 == VAR2->VAR12) {
VAR4->VAR12 = VAR2->VAR13 + 1;
break;
}
FUN9(VAR4, VAR2);

FUN7(&VAR2->VAR7->VAR8, VAR2, VAR11);
break;
case 3: 
VAR3 = FUN10(VAR4, VAR11);
FUN7(&VAR2->VAR7->VAR8, VAR4,
VAR11);
FUN8(VAR4);
continue;
case 4: 
VAR4->VAR13 = VAR2->VAR12 - 1;
VAR3 = FUN10(VAR4, VAR11);
continue;
case 5: 
VAR4->VAR12 = VAR2->VAR13 + 1;
break;
}
break;
}
return (0);
}