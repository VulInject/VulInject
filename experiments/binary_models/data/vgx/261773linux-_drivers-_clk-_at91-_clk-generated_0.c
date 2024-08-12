static int FUN1(struct VAR1 *VAR2,
unsigned long VAR3,
unsigned long VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
u32 VAR7;

if (!VAR3)
return -VAR8;

if (VAR6->VAR9.VAR10 && VAR3 > VAR6->VAR9.VAR10)
return -VAR8;

VAR7 = FUN3(VAR4, VAR3);
if (VAR7 > VAR11 + 1 || !VAR7)
return -VAR8;

VAR6->VAR12 = VAR7 - 1;
return 0;
}