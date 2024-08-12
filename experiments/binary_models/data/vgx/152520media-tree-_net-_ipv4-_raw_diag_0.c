static struct VAR1 *FUN1(struct VAR2 *VAR2, const struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR4);
struct VAR1 *VAR7 = NULL, *VAR8;
int VAR9;

if (FUN3(VAR6))
return FUN4(VAR6);

FUN5(&VAR6->VAR10);
for (VAR9 = 0; VAR9 < VAR11; VAR9++) {
FUN6(VAR8, &VAR6->VAR12[VAR9]) {
VAR7 = FUN7(VAR2, VAR8, VAR4);
if (VAR7) {

FUN8(VAR7);
goto VAR13;
}
}
}
VAR13:
FUN9(&VAR6->VAR10);

return VAR7 ? VAR7 : FUN10(-VAR14);
}