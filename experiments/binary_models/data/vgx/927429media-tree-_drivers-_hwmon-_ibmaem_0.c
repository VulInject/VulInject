static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5,
const char *VAR6, size_t VAR7)
{
struct VAR8 *VAR9 = FUN2(VAR5);
struct VAR10 *VAR11 = FUN3(VAR3);
unsigned long VAR12;
int VAR13;

VAR13 = FUN4(VAR6, 10, &VAR12);
if (VAR13)
return VAR13;

if (VAR12 < VAR14)
return -VAR15;

FUN5(&VAR11->VAR16);
VAR11->VAR17[VAR9->VAR18] = VAR12;
FUN6(&VAR11->VAR16);

return VAR7;
}