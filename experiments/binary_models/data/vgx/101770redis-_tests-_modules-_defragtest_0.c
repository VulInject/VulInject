int FUN1(VAR1 *VAR2, VAR3 *VAR4, void **VAR5) {
FUN2(VAR4);
unsigned long VAR6 = 0;
int VAR7 = 0;

int VAR8 = FUN3(VAR2);
FUN4(VAR8 != -1);


if (FUN5(VAR2, &VAR6) == VAR9) {
if (VAR6 > 0) VAR10++;


if (VAR6 != VAR11) VAR12++;
} else {
if (VAR11 != 0) VAR12++;
}


VAR13++;
struct VAR14 *VAR15 = FUN6(VAR2, *VAR5);
if (VAR15 == NULL) {

VAR15 = *VAR5;
} else {

*VAR5 = VAR15;
VAR16++;
}


for (; VAR6 < VAR15->VAR17; VAR6++) {
VAR13++;
void *new = FUN6(VAR2, VAR15->VAR18[VAR6]);
if (new) {
VAR15->VAR18[VAR6] = new;
VAR16++;
}

if ((VAR15->VAR19 && ++VAR7 > VAR15->VAR19) ||
((VAR6 % 64 == 0) && FUN7(VAR2)))
{
FUN8(VAR2, VAR6);
VAR11 = VAR6;
return 1;
}
}

VAR11 = 0;
return 0;
}