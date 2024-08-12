static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
unsigned long VAR5, VAR6;
unsigned int VAR7;
int VAR8;


VAR8 = FUN3(VAR2);
if (VAR8) {
FUN4(&VAR4->VAR9);
VAR4->VAR10 = VAR8;
VAR4->VAR11 = 0;
VAR4->VAR12 = 0;
FUN5(&VAR4->VAR9);
return 0;
}


VAR7 = VAR13;
VAR6 = VAR14 + VAR15;

while (1) {
if (VAR7 != 0) {
--VAR7;
FUN6(1);
} else {
FUN7(1);
}

VAR5 = VAR14;

if (FUN8(VAR2))
break;

if (FUN9(VAR5, VAR6))
return -VAR16;
}


return 0;
}