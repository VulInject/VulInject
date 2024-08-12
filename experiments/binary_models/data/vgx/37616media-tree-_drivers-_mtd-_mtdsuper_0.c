static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;

if (VAR2->VAR6 == VAR5) {
FUN2(""%VAR7\"",
VAR5->VAR8, VAR5->VAR9);
return 1;
}

FUN2(""%VAR7\""%VAR7\"",
VAR2->VAR6->VAR8, VAR2->VAR6->VAR9, VAR5->VAR8, VAR5->VAR9);
return 0;
}