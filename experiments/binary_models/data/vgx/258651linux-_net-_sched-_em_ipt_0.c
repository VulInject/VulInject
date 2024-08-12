static struct VAR1 *FUN1(struct VAR2 **VAR3)
{
const struct VAR4 *VAR5;
struct VAR2 *VAR6;
u8 VAR7, VAR8 = 0;
int VAR9;

VAR6 = VAR3[VAR10];
for (VAR5 = VAR11; VAR5->VAR12; VAR5++) {
if (!FUN2(VAR6, VAR5->VAR12))
break;
}

if (!VAR5->VAR12) {
FUN3("");
return FUN4(-VAR13);
}

if (VAR3[VAR14])
VAR8 = FUN5(VAR3[VAR14]);

VAR9 = VAR5->FUN6(VAR3, VAR8);
if (VAR9 < 0)
return FUN4(VAR9);

VAR7 = FUN5(VAR3[VAR15]);
return FUN7(VAR7, VAR5->VAR12, VAR8);
}