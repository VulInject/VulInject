static int FUN1(struct tmem_pool_uuid VAR1,
u32 VAR2, unsigned long VAR3)
{
struct tmem_op VAR4;
int VAR5 = 0, VAR6;

for (VAR6 = 0; VAR3 != 1; VAR6++)
VAR3 >>= 1;
VAR2 |= (VAR6 - 12) << VAR7;
VAR2 |= VAR8 << VAR9;
VAR4.VAR10 = VAR11;
VAR4.VAR12.new.VAR1[0] = VAR1.VAR13;
VAR4.VAR12.new.VAR1[1] = VAR1.VAR14;
VAR4.VAR12.new.VAR2 = VAR2;
VAR5 = FUN2(&VAR4);
return VAR5;
}