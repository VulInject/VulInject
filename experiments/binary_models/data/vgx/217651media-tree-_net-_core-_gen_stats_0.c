int
FUN1(struct VAR1 *VAR2,
struct net_rate_estimator VAR3 **VAR4)
{
struct gnet_stats_rate_est64 VAR5;
struct gnet_stats_rate_est VAR6;
int VAR7;

if (!FUN2(VAR4, &VAR5))
return 0;
VAR6.VAR8 = FUN3(VAR9, VAR10, VAR5.VAR8);

VAR6.VAR11 = VAR5.VAR11;

if (VAR2->VAR12) {
VAR2->VAR13.VAR8 = VAR6.VAR8;
VAR2->VAR13.VAR11 = VAR6.VAR11;
}

if (VAR2->VAR14) {
VAR7 = FUN4(VAR2, VAR15, &VAR6, sizeof(VAR6),
VAR16);
if (VAR7 < 0 || VAR6.VAR8 == VAR5.VAR8)
return VAR7;

return FUN4(VAR2, VAR17, &VAR5,
sizeof(VAR5), VAR16);
}

return 0;
}