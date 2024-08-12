static int
FUN1(struct VAR1 *VAR2, enum vchiq_reason VAR3,
struct VAR4 *VAR5, struct VAR6 *VAR6,
void *VAR7)
{
struct VAR8 *VAR9;
int VAR10;

FUN2(VAR11.VAR12);

VAR10 = VAR2->VAR13;
while ((VAR10 - VAR2->VAR14) >= VAR15) {

FUN3(VAR16);
FUN4(VAR17, "", VAR18);
FUN5(VAR19);
if (FUN6(&VAR2->VAR20)) {
FUN7(VAR17, "");
return -VAR21;
} else if (VAR2->VAR22) {
FUN7(VAR17, "");
return 0;
}
FUN3(VAR16);
}

VAR9 = &VAR2->VAR23[VAR10 & (VAR15 - 1)];

VAR9->VAR5 = VAR5;
VAR9->VAR3 = VAR3;

VAR9->VAR24 = VAR6->VAR25;
VAR9->VAR7 = VAR7;

if (VAR3 == VAR26) {

FUN8(VAR6->VAR25);
if (VAR2->VAR27)
VAR6->VAR28 = 1;
}


FUN9();

if (VAR3 == VAR29)
VAR6->VAR30 = VAR10;

VAR10++;
VAR2->VAR13 = VAR10;

FUN10(&VAR2->VAR31);

return 0;
}