int FUN1(struct VAR1 *VAR2, struct VAR3 *or,
struct VAR4 *VAR5)
{
struct drm_mode_fb_cmd2 VAR6 = {};
int VAR7;

if (!FUN2(VAR2, VAR8))
return -VAR9;

VAR6.VAR10 = FUN3(VAR2, or->VAR11, or->VAR12);
if (VAR6.VAR10 == VAR13) {
FUN4(VAR2, "", or->VAR11, or->VAR12);
return -VAR14;
}


VAR6.VAR15 = or->VAR15;
VAR6.VAR16 = or->VAR16;
VAR6.VAR17 = or->VAR17;
VAR6.VAR18[0] = or->VAR19;
VAR6.VAR20[0] = or->VAR21;

VAR7 = FUN5(VAR2, &VAR6, VAR5);
if (VAR7)
return VAR7;

or->VAR15 = VAR6.VAR15;

return 0;
}