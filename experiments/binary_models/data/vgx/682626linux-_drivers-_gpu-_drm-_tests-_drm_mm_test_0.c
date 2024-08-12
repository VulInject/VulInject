static bool FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, u64 VAR5)
{
struct drm_mm_node VAR6 = {};
int VAR7;

VAR7 = FUN2(VAR4, &VAR6, VAR5);
if (FUN3(VAR7 == -VAR8))
return true;

if (!VAR7) {
FUN4(VAR2, "",
VAR6.VAR9, VAR6.VAR5);
FUN5(&VAR6);
} else {
FUN4(VAR2,
"",
VAR7, -VAR8, VAR5);
}
return false;
}