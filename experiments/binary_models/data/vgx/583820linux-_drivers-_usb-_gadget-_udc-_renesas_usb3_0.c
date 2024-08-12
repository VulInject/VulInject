static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
const struct VAR5 *VAR6)
{
struct VAR7 *VAR8;
int VAR9;
u32 VAR10[2], VAR11[2];	
VAR12 *VAR13, *VAR14;
u32 VAR15;

memset(VAR10, 0, sizeof(VAR10));
memset(VAR11, 0, sizeof(VAR11));


FUN2(VAR8, VAR2, VAR9) {
if (!VAR9)
continue;	
if (VAR8->VAR16.VAR17.VAR18) {
VAR13 = &VAR10[0];
VAR14 = &VAR11[0];
} else {
VAR13 = &VAR10[1];
VAR14 = &VAR11[1];
}

if (*VAR14 > VAR6->VAR19)
continue;	


VAR15 = FUN3(*VAR13);
VAR15 |= FUN4(VAR6->VAR20);
VAR15 |= FUN5(*VAR14);
VAR8->VAR21 = VAR15;

FUN6(VAR4, "",
VAR9, VAR15, *VAR13, *VAR14);


if (*VAR13 + 1 == VAR6->VAR22) {
*VAR13 = 0;
*VAR14 += VAR6->VAR20;
} else {
(*VAR13)++;
}
}
}