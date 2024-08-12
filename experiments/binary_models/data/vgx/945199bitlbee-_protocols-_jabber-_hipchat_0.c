VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5, struct VAR4 *VAR6)
{
struct VAR4 *VAR7, *VAR8;

if (!(VAR7 = FUN2(VAR5->VAR9, ""))) {
FUN3(VAR3, "");
return VAR10;
}

VAR8 = FUN2(VAR7->VAR9, "");
if (!VAR8) {
FUN3(VAR3, "");
return VAR10;
}

FUN4(&VAR3->VAR11->VAR12, "", VAR8->VAR13);
return VAR14;

}