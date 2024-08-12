static void FUN1(struct VAR1 *VAR2, int VAR3)
{
unsigned VAR4 = 100;

if (VAR3 >= VAR2->VAR5.VAR6)
return;

if (!(FUN2(VAR7 + VAR8[VAR3]) & VAR9))
return;


while (FUN3(VAR2, VAR3)) {
if (VAR4++ == 100) {
VAR4 = 0;
if (!FUN4(VAR2, VAR3))
break;
}
}

while (!FUN3(VAR2, VAR3)) {
if (VAR4++ == 100) {
VAR4 = 0;
if (!FUN4(VAR2, VAR3))
break;
}
}
}