static struct VAR1 *FUN1(struct VAR1 *VAR2, u64 VAR3,
const VAR4 *VAR5)
{
struct VAR6 *VAR6 = VAR2->VAR6;
struct VAR1 *VAR7;

VAR7 = FUN2(VAR6, &VAR2->VAR8, VAR3);
if (FUN3(VAR7)) {
FUN4(VAR6, "", VAR3);
return VAR7;
}

VAR7->VAR5 = FUN5(VAR5, sizeof(*VAR5), VAR9);
if (!VAR7->VAR5) {
FUN6(VAR7);
return FUN7(-VAR10);
}

FUN8(&VAR7->VAR11);
return VAR7;
}