static inline int FUN1(struct VAR1 *VAR2)
{
unsigned long VAR3 = VAR4 + VAR5;

do {
u32 VAR6;

VAR6 = FUN2(VAR2);
if (!(VAR6 & VAR7))
return (VAR6 & VAR8) ? -VAR9 : 0;

FUN3(50, 100);
} while (FUN4(VAR4, VAR3));

return -VAR10;
}