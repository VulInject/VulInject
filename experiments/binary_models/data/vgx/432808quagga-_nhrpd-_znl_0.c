struct VAR1 *FUN1(struct VAR2 *VAR3, uint16_t VAR4, uint16_t VAR5)
{
struct VAR1 *VAR6;

VAR6 = FUN2(VAR3, sizeof(*VAR6));
if (!VAR6) return NULL;

*VAR6 = (struct VAR1) {
.VAR7 = VAR4,
.VAR8 = VAR5,
};
return VAR6;
}