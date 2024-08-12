static int FUN1(struct VAR1 *VAR2)
{
struct i915_gem_ww_ctx VAR3;
int VAR4;

FUN2(&VAR3, false);
VAR5:
VAR4 = FUN3(VAR2->VAR6->VAR7, &VAR3);
if (!VAR4)
VAR4 = FUN4(VAR2, &VAR3);

if (VAR4 == -VAR8) {
VAR4 = FUN5(&VAR3);
if (!VAR4)
goto VAR5;
}
FUN6(&VAR3);
return VAR4;
}