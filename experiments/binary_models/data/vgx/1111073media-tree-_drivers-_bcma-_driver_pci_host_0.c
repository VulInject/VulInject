static VAR1 FUN1(struct VAR2 *VAR3, unsigned int VAR4,
unsigned int VAR5, unsigned int VAR6)
{
u32 VAR7 = 0;


if (VAR4 >= 2 || !(FUN2(VAR3, VAR8)
& VAR9))
goto VAR10;



FUN3(VAR3, VAR11, VAR12);

VAR7 = VAR3->VAR13->VAR14;
VAR7 |= (VAR4 << VAR15);
VAR7 |= (VAR5 << VAR16);
VAR7 |= (VAR6 & ~3);

VAR10:
return VAR7;
}