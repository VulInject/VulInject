static int FUN1(struct VAR1 *VAR2,
struct VAR3 **VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
struct VAR3 *VAR8;
int VAR9, VAR10;

VAR8 = FUN2(VAR2, sizeof(*VAR8), VAR11);
if (!VAR8)
return -VAR12;

if (FUN3(VAR13, VAR2))
VAR8->VAR14 =
FUN4(VAR2->VAR15, "", 0);

if (VAR6)
VAR8->VAR14 = VAR6->VAR14;

if (FUN5(VAR8->VAR14)) {
int VAR10;

VAR10 = FUN6(VAR2, VAR8->VAR14,
"");
if (VAR10 < 0)
return VAR10;
}

for (VAR9 = 0; VAR9 < FUN7(VAR16); VAR9++)
VAR8->VAR17[VAR9].VAR18 = VAR16[VAR9];

VAR10 = FUN8(VAR2, FUN7(VAR8->VAR17),
VAR8->VAR17);

if (VAR10 < 0) {
FUN9(VAR2, "", VAR10);
return VAR10;
}

*VAR4 = VAR8;
return 0;
}