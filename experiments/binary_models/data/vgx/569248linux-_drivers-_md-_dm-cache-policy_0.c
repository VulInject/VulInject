struct VAR1 *FUN1(const char *VAR2,
dm_cblock_t VAR3,
sector_t VAR4,
sector_t VAR5)
{
struct VAR1 *VAR6 = NULL;
struct VAR7 *VAR8;

VAR8 = FUN2(VAR2);
if (!VAR8) {
FUN3("");
return FUN4(-VAR9);
}

VAR6 = VAR8->FUN5(VAR3, VAR4, VAR5);
if (!VAR6) {
FUN6(VAR8);
return FUN4(-VAR10);
}
VAR6->private = VAR8;

return VAR6;
}