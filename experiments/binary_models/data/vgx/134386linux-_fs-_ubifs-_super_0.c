static int FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4;

VAR2->VAR5 = 1;
for (VAR3 = 0; VAR3 < VAR2->VAR6; VAR3++) {
VAR4 = FUN2(VAR2, VAR3);
if (FUN3(VAR4 < 0))
return VAR4;
if (VAR4 == 1) {
VAR2->VAR5 = 0;
break;
}

FUN4();
}

return 0;
}