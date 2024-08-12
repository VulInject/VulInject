static int FUN1(struct VAR1 *VAR2,
bool VAR3)
{
const struct VAR4 *VAR5 =
VAR6[FUN2(VAR2->VAR7)->VAR8];
int VAR9;

if (!FUN3(FUN4(VAR2->VAR7), VAR3))
return 0;

VAR2->VAR10 = FUN5(VAR2->VAR7, VAR2->VAR11);
if (!VAR2->VAR10)
return -VAR12;

for (VAR9 = 0; VAR9 < VAR2->VAR11; VAR9++) {
if (VAR2->VAR13[VAR9]) {
VAR2->VAR10[VAR9] = VAR2->VAR13[VAR9];
continue;
}

VAR2->VAR10[VAR9] = FUN6();
if (!VAR2->VAR10[VAR9])
return -VAR12;
}

VAR2->VAR14 = FUN7(VAR2->VAR10, VAR2->VAR11);
if (!VAR2->VAR14)
return -VAR12;

VAR2->VAR15 = FUN7(VAR2->VAR16, VAR2->VAR17);
if (!VAR2->VAR15)
return -VAR12;

if (VAR5->VAR18)
return VAR5->FUN8(VAR2);

return 0;
}