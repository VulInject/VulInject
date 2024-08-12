static int
FUN1(hx509_validate_ctx VAR1,
struct VAR2 *VAR3,
enum critical_flag VAR4,
const VAR5 *VAR6)
{
CRLDistributionPoints VAR7;
size_t VAR8;
int VAR9;
size_t VAR10;

FUN2(VAR1, VAR3, VAR4, VAR6);

VAR9 = FUN3(VAR6->VAR11.VAR12,
VAR6->VAR11.VAR13,
&VAR7, &VAR8);
if (VAR9) {
FUN4(VAR1, VAR14,
"", VAR9);
return 1;
}

FUN4(VAR1, VAR15, "");
for (VAR10 = 0 ; VAR10 < VAR7.VAR16; VAR10++) {
if (VAR7.VAR17[VAR10].VAR18) {
DistributionPointName VAR19 = VAR7.VAR17[VAR10].VAR18[0];
size_t VAR20;

switch (VAR19.VAR21) {
case VAR22:
FUN4(VAR1, VAR15, "");

for (VAR20 = 0 ; VAR20 < VAR19.VAR23.VAR24.VAR16; VAR20++) {
char *VAR25;
VAR26 *VAR27 = &VAR19.VAR23.VAR24.VAR17[VAR20];

VAR9 = FUN5(VAR1->VAR28, VAR27, &VAR25);
if (VAR9) {
VAR25 = FUN6(VAR1->VAR28, VAR9);
FUN4(VAR1, VAR14,
"", VAR25);
FUN7(VAR25);
} else {
FUN4(VAR1, VAR15, "", VAR25);
free(VAR25);
}
}
break;
case VAR29:
FUN4(VAR1, VAR15,
"");
break;
default:
FUN4(VAR1, VAR14,
"");
break;
}
}
}
FUN8(&VAR7);

VAR3->VAR30 = 1;

return 0;
}