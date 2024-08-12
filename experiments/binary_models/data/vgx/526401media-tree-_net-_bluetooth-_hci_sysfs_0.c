void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR4;

FUN2("", VAR2);

FUN3(&VAR2->VAR5, "", VAR4->VAR6, VAR2->VAR7);

if (FUN4(&VAR2->VAR5) < 0) {
FUN5("");
return;
}

FUN6(VAR4);
}