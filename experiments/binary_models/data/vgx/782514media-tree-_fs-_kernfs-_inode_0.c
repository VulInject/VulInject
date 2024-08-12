static int FUN1(const struct VAR1 *VAR2,
struct VAR3 *VAR4, struct VAR5 *VAR5,
const char *VAR6, const void *VAR7,
size_t VAR8, int VAR9)
{
const char *VAR10 = FUN2(VAR2, VAR6);
struct VAR11 *VAR12 = VAR5->VAR13;
struct VAR14 *VAR15;

VAR15 = FUN3(VAR12);
if (!VAR15)
return -VAR16;

return FUN4(&VAR15->VAR17, VAR10, VAR7, VAR8, VAR9);
}

static const struct xattr_handler VAR18 = {
.VAR19 = VAR20,
.VAR21 = VAR22,
.VAR23 = VAR24,
};