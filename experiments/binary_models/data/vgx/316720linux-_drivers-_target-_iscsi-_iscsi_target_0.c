static struct VAR1 *FUN1(
struct VAR2 *VAR3,
int VAR4)
{
struct VAR1 *VAR5;
bool VAR6;

FUN2(&VAR7);

FUN3(VAR5, &VAR8, VAR9) {
FUN4(&VAR5->VAR10);
if (VAR5->VAR11 != VAR12) {
FUN5(&VAR5->VAR10);
continue;
}

VAR6 = FUN6(VAR3, VAR5, VAR4);
if (VAR6) {

VAR5->VAR13++;
FUN5(&VAR5->VAR10);
return VAR5;
}
FUN5(&VAR5->VAR10);
}

return NULL;
}