static struct VAR1 *FUN1(struct VAR2 *VAR2, u32 VAR3)
{
struct VAR1 *VAR4;
struct VAR5 *VAR6;
struct VAR7 *VAR8;
struct VAR7;

if (!VAR2)
return NULL;

VAR6 = FUN2(VAR2, VAR3);
if (!VAR6) {
FUN3("", VAR3);
return NULL;
}

VAR8 = FUN4(VAR6);
VAR4 = VAR8 ? FUN5(VAR8) : NULL;

FUN6(VAR6);
return VAR4;
}