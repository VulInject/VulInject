static int FUN1(struct VAR1 *VAR2, unsigned VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
void VAR6 *VAR7 = VAR5->VAR8;
u32 VAR9;

VAR9 = FUN3(VAR7 + VAR10);
VAR9 >>= VAR3;
VAR9 &= 1;
return VAR9;
}