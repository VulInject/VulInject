static struct VAR1 *
FUN1(struct VAR2 *VAR3, u8 VAR4,
struct VAR5 **VAR6)
{
struct VAR5 *VAR5 = VAR3->VAR7;
struct VAR1 *VAR8;

VAR8 = FUN2(VAR9, VAR10);
if (!VAR8)
return FUN3(-VAR11);

*VAR6 = FUN4(VAR8, VAR3->VAR12,
VAR3->VAR13,
&VAR14, 0, VAR4);

if (!*VAR6) {
FUN5(VAR8);
return FUN3(-VAR15);
}
(*VAR6)->VAR16 = VAR5->VAR16;

return VAR8;
}