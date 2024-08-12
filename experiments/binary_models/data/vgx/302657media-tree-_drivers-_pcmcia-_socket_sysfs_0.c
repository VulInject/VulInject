static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
ssize_t VAR8;
struct VAR9 *VAR10 = FUN2(VAR3);
u32 VAR11;

if (!VAR7)
return -VAR12;

VAR8 = sscanf(VAR6, "", &VAR11);

if (VAR8 == 1) {
FUN3(&VAR10->VAR13);
VAR10->VAR14 &= VAR11;
FUN4(&VAR10->VAR13);
VAR8 = 0;
}

return VAR8 ? VAR8 : VAR7;
}