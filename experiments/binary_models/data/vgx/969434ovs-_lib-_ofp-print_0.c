static enum VAR1
FUN1(struct VAR2 *VAR3, const struct VAR4 *VAR5,
const struct VAR6 *VAR7,
const struct VAR8 *VAR9, int VAR10)
{
struct ofputil_packet_out VAR11;
struct ofpbuf VAR12;
enum ofperr VAR13;

FUN2(&VAR12, 64);
VAR13 = FUN3(&VAR11, VAR5, NULL, &VAR12);
if (!VAR13) {
FUN4(VAR3, &VAR11, VAR7, VAR9, VAR10);
}
FUN5(&VAR12);
return VAR13;
}