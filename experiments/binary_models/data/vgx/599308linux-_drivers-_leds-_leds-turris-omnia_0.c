static VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR3);
struct VAR10 *VAR11 = FUN3(VAR9);
unsigned long VAR12;
int VAR13;

if (FUN4(VAR6, 10, &VAR12))
return -VAR14;

if (VAR12 > 100)
return -VAR14;

FUN5(&VAR11->VAR15);
VAR13 = FUN6(VAR9, VAR16,
(VAR17)VAR12);
FUN7(&VAR11->VAR15);

if (VAR13 < 0)
return VAR13;

return VAR7;
}