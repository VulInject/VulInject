static VAR1 FUN1(void)
{
u32 VAR2;
asm volatile("":"" (VAR2));
return VAR2;
}