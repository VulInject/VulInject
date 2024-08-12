static VAR1 FUN1(struct VAR2 *VAR3)
{
enum dmc520_mem_width VAR4;
u32 VAR5 = 0;
u32 VAR6;

VAR6 = FUN2(VAR3, VAR7);
VAR4 = FUN3(VAR8, VAR6);

if (VAR4 == VAR9)
VAR5 = 4;
else if (VAR4 == VAR10)
VAR5 = 8;
return VAR5;
}