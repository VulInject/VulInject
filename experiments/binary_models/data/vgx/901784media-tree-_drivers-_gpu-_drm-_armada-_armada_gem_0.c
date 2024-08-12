static struct VAR1 *FUN1(struct VAR2 *VAR3,
size_t VAR4)
{
struct VAR1 *VAR5;
struct VAR6 *VAR7;

VAR4 = FUN2(VAR4);

VAR5 = FUN3(sizeof(*VAR5), VAR8);
if (!VAR5)
return NULL;

if (FUN4(VAR3, &VAR5->VAR5, VAR4)) {
FUN5(VAR5);
return NULL;
}

VAR5->VAR9 = VAR10;

VAR7 = VAR5->VAR5.VAR11->VAR12;
FUN6(VAR7, VAR13 | VAR14);

FUN7("", VAR5, VAR4);

return VAR5;
}