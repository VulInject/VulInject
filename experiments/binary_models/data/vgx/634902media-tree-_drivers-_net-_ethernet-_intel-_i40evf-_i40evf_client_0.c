void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR5;
struct VAR6 *VAR7;
int VAR8 = 0;

if (VAR2->VAR9 < VAR10)
return;


if (!VAR4)
return;


VAR7 = FUN2(VAR2);
if (!VAR7)
return;

FUN3(&VAR2->VAR11->VAR12, "",
VAR4->VAR13);

if (!FUN4(VAR14, &VAR7->VAR9)) {


if (VAR4->VAR15 && VAR4->VAR15->open)
VAR8 = VAR4->VAR15->open(&VAR7->VAR16, VAR4);
if (!VAR8)
FUN5(VAR14,
&VAR7->VAR9);
else

FUN6(VAR2);
}
}