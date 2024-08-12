static VAR1 FUN1(
const struct VAR2 *VAR3,
void				*VAR4,
u32				VAR5,
u32				VAR6)
{
void *VAR7 = FUN2(VAR3);
u32 VAR8 = FUN3(VAR3);

memcpy(VAR4, VAR7 + VAR6, VAR5);

VAR6 += VAR5;
if (VAR6 >= VAR8)
VAR6 -= VAR8;

return VAR6;
}