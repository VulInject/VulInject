static struct VAR1 *
FUN1(struct VAR1 *VAR2, u32 VAR3,
u64 VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR7;
struct VAR1 *VAR8;
enum intel_engine_id VAR9;

if (FUN2(VAR6) >= 8) {
FUN3(VAR8, VAR6, VAR9) {
if (VAR2 == VAR8)
continue;

if (VAR4 == VAR8->VAR10.VAR11[VAR2->VAR12])
return VAR8;
}
} else {
u32 VAR13 = VAR3 & VAR14;

FUN3(VAR8, VAR6, VAR9) {
if(VAR2 == VAR8)
continue;

if (VAR13 == VAR8->VAR10.VAR15.VAR16[VAR2->VAR12])
return VAR8;
}
}

FUN4("",
VAR2->VAR17, VAR3, VAR4);

return FUN5(-VAR18);
}