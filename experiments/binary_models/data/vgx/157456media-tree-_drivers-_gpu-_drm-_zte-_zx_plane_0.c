static int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6 = VAR4->VAR6;
struct VAR7 *VAR8 = VAR4->VAR8;
struct VAR9 *VAR10;
struct drm_rect VAR11;
int VAR12 = FUN2(1, 8);
int VAR13 = FUN2(8, 1);

if (!VAR8 || !VAR6)
return 0;

VAR10 = FUN3(VAR4->VAR14,
VAR8);
if (FUN4(!VAR10))
return -VAR15;


if (!VAR10->VAR16)
return 0;


if (!VAR4->VAR8)
return -VAR15;

VAR11.VAR17 = 0;
VAR11.VAR18 = 0;
VAR11.VAR19 = VAR10->VAR20.VAR21;
VAR11.VAR22 = VAR10->VAR20.VAR23;

return FUN5(VAR4, &VAR11,
VAR12, VAR13,
true, true);
}