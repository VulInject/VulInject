static VAR1 FUN1(struct VAR2 *VAR3,
const struct VAR4 *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR3);
struct exynos_dsi_transfer VAR8;
int VAR9;

if (!(VAR7->VAR10 & VAR11))
return -VAR12;

if (!(VAR7->VAR10 & VAR13)) {
VAR9 = FUN3(VAR7);
if (VAR9)
return VAR9;
VAR7->VAR10 |= VAR13;
}

VAR9 = FUN4(&VAR8.VAR14, VAR5);
if (VAR9 < 0)
return VAR9;

VAR8.VAR15 = VAR5->VAR15;
VAR8.VAR16 = VAR5->VAR17;
VAR8.VAR18 = VAR5->VAR18;

VAR9 = FUN5(VAR7, &VAR8);
return (VAR9 < 0) ? VAR9 : VAR8.VAR19;
}