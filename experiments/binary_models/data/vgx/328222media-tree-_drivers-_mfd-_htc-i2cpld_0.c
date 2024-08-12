static int FUN1(struct VAR1 *VAR2, unsigned int VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);

if (VAR3 & ~VAR6)
return -VAR7;


if (VAR3 & (VAR8|VAR9))
return -VAR7;

VAR5->VAR10 = VAR3;
return 0;
}