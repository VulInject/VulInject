int FUN1(struct VAR1 *VAR2,
unsigned long VAR3, int VAR4)
{
struct VAR5 *VAR6 = NULL, *VAR7;
const struct VAR8 *VAR9;
unsigned long VAR10;
int VAR11 = 0;


if (!FUN2(&VAR12->VAR13))
return 0;


FUN3(&VAR2->VAR14, VAR10);
FUN4(VAR7, &VAR2->VAR15, VAR16) {
VAR9 = VAR7->VAR9;
if ((FUN2(&VAR9->VAR17)) &&
((unsigned long)VAR9->VAR18->VAR19 == VAR3)) {
VAR6 = VAR7;
VAR2->VAR20 = (void *)VAR6;
break;
}
}
FUN5(&VAR2->VAR14, VAR10);


if (VAR6) {

VAR11 = FUN6(VAR6, VAR4);
if (!VAR11) {

FUN3(&VAR2->VAR14, VAR10);
if (VAR2->VAR20)
VAR6->VAR21 = true;
else
VAR11 = -VAR22;
FUN5(&VAR2->VAR14, VAR10);
}
}
return VAR11;
}