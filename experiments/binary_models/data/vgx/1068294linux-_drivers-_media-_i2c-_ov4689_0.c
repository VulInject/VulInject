static int FUN1(struct VAR1 *VAR1, int VAR2, int *VAR3)
{
const struct VAR4 *VAR5 = &VAR1->VAR6->VAR5;
const struct VAR7 *VAR8;
unsigned int VAR9;

for (VAR9 = 0; VAR9 < FUN2(VAR10); VAR9++) {
if (VAR2 >= VAR10[VAR9].VAR11 &&
VAR2 <= VAR10[VAR9].VAR12)
break;
}

if (VAR9 == FUN2(VAR10)) {
FUN3(VAR5, "",
VAR2);
return -VAR13;
}

VAR8 = &VAR10[VAR9];

*VAR3 = FUN4(VAR8->VAR14 + (VAR2) / VAR8->VAR15,
VAR8->VAR16, VAR8->VAR17);
return 0;
}