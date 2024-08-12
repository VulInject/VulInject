static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
struct VAR4 *VAR5;
int VAR6;

VAR5 = FUN2(sizeof(*VAR5), VAR7);
if (!VAR5)
return -VAR8;

if (!VAR2->VAR9) {
VAR2->VAR9 = FUN2(sizeof(*VAR2->VAR9), VAR7);
if (!VAR2->VAR9) {
VAR3 = -VAR8;
goto VAR10;
}

VAR5->VAR11 = true;
}

if (!VAR2->VAR9->VAR12)
FUN3(&VAR2->VAR13, "");

FUN4(VAR2, VAR5);

if (VAR2->VAR14 > 0) {
VAR3 = VAR2->VAR15->FUN5(VAR2,
VAR5->VAR16,
&VAR6);
if (!VAR3)
FUN6(VAR2, VAR2->VAR9->VAR12,
VAR5->VAR17,
VAR6, false);
}

FUN7(VAR5);

VAR2->VAR18 = VAR5;

return 0;

VAR10:
FUN8(VAR5);

return VAR3;
}