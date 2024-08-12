static struct VAR1 *
FUN1(struct VAR2 *VAR3,
struct VAR4 **VAR5, int VAR6)
{
struct VAR1 *VAR7;
int VAR8;

VAR8 = FUN2(&VAR7, VAR5, VAR6);
if (VAR8)
return FUN3(VAR8);

VAR8 = FUN4(VAR3, VAR7);
if (VAR8) {
FUN5(VAR7);
FUN6(VAR7);
return FUN3(VAR8);
}

return VAR7;
}