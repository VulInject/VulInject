static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6;
struct VAR7 *VAR8 = NULL;
int VAR9, VAR10 = 0;
char VAR11[VAR12];

FUN3(VAR6, &VAR4->VAR13, VAR14) {
VAR8 = VAR6->VAR15->VAR8;
snprintf(VAR11, sizeof(VAR11),
"", VAR6->VAR16);
VAR9 = FUN4(VAR2, VAR11,
VAR17, &VAR18[VAR10],
NULL, 0);

if (VAR9)
return VAR9;

VAR9 = FUN5(VAR6->VAR15, VAR6->VAR16,
&VAR18[VAR10]);
if (VAR9 < 0)
return VAR9;

VAR10++;
}

if (!VAR8)
return -VAR19;

return FUN6(VAR8, &VAR2->VAR20);
}