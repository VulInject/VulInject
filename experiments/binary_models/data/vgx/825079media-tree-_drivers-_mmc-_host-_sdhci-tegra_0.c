static int FUN1(struct VAR1 *VAR2, u32 VAR3)
{
unsigned int VAR4, VAR5;


VAR4 = 10;
while (VAR4 < 255) {
FUN2(VAR2, VAR4);
if (!FUN3(VAR2->VAR6, VAR3, NULL))
break;
VAR4++;
}


VAR5 = VAR4 + 1;
while (VAR5 < 255) {
FUN2(VAR2, VAR5);
if (FUN3(VAR2->VAR6, VAR3, NULL)) {
VAR5--;
break;
}
VAR5++;
}


FUN2(VAR2, VAR4 + ((VAR5 - VAR4) * 3 / 4));

return FUN3(VAR2->VAR6, VAR3, NULL);
}