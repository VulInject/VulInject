int
FUN1(VAR1 *VAR2)
{
struct mod_hash_entry VAR3;
int VAR4;

if (VAR2->VAR5 == 0)
return (VAR6);

if (FUN2(&VAR3, sizeof (VAR3), VAR2->VAR5) == -1) {
FUN3("",
VAR2->VAR5);
return (VAR7);
}

VAR4 = VAR2->FUN4(VAR2->VAR5, &VAR3, VAR2->VAR8);

VAR2->VAR5 = (VAR9)VAR3.VAR10;

return (VAR4);
}