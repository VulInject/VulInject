static void FUN1(struct VAR1 *VAR2,
const struct gnet_stats_queue VAR3 *VAR4,
const struct VAR1 *VAR5,
__u32 VAR6)
{
if (VAR4) {
FUN2(VAR2, VAR4);
} else {
VAR2->VAR6 = VAR5->VAR6;
VAR2->VAR7 = VAR5->VAR7;
VAR2->VAR8 = VAR5->VAR8;
VAR2->VAR9 = VAR5->VAR9;
VAR2->VAR10 = VAR5->VAR10;
}

VAR2->VAR6 = VAR6;
}