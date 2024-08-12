static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
static int VAR5;
int VAR6;
struct VAR7 *VAR8;
struct VAR1 *VAR9, *VAR10;
char VAR11[VAR12];

if (FUN2(VAR2))
return -VAR13;	
for (; VAR5 < VAR14; VAR5++) {
if (VAR15[VAR5] && VAR16[VAR5])
break;
}
if (VAR5 >= VAR14)
return -VAR17;


strcpy(VAR11, VAR2->VAR4[0].VAR4);
VAR11[5] = '';
VAR9 = NULL;
FUN3(VAR10, &(VAR2->VAR18->VAR19), VAR20) {
if (!strcmp(VAR10->VAR4[0].VAR4, VAR11)) {
VAR9 = VAR10;
break;
}
}
VAR6 = FUN4(&VAR2->VAR5, VAR5, &VAR8);
if (VAR6 < 0)
return VAR6;
VAR6 = FUN5(VAR5, VAR8->VAR21, VAR2, VAR9);
if (VAR6 < 0) {
FUN6(VAR22 "" VAR23 "");
return VAR6;
}
VAR6 = FUN7(VAR8, VAR5);
if (VAR6 < 0)
return VAR6;
FUN8(VAR2, VAR8);
VAR5++;
return 0;
}