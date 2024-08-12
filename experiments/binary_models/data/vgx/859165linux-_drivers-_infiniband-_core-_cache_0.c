const struct VAR1 *FUN1(struct VAR2 *VAR3,
const union VAR4 *VAR5,
enum ib_gid_type VAR6,
struct VAR7 *VAR8)
{
unsigned long VAR9 = VAR10 |
VAR11;
struct ib_gid_attr VAR12 = {.VAR8 = VAR8, .VAR6 = VAR6};
u32 VAR13;

if (VAR8)
VAR9 |= VAR14;

FUN2(VAR3, VAR13) {
struct VAR15 *VAR16;
unsigned long VAR17;
int VAR18;

VAR16 = VAR3->VAR19[VAR13].VAR20.VAR5;
FUN3(&VAR16->VAR21, VAR17);
VAR18 = FUN4(VAR16, VAR5, &VAR12, false, VAR9, NULL);
if (VAR18 >= 0) {
const struct VAR1 *VAR22;

FUN5(VAR16->VAR23[VAR18]);
VAR22 = &VAR16->VAR23[VAR18]->VAR22;
FUN6(&VAR16->VAR21, VAR17);
return VAR22;
}
FUN6(&VAR16->VAR21, VAR17);
}

return FUN7(-VAR24);
}