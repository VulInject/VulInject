static enum VAR1 FUN1(struct VAR2 *VAR3,
unsigned int VAR4)
{
vaddr_t VAR5 = 0;
uint32_t VAR6 = 0;
struct VAR7 *VAR8 = FUN2(VAR3,
struct VAR7,
VAR3);

assert(VAR4 <= VAR9);

VAR5 = VAR8->VAR10 + VAR11;
VAR6 = FUN3(VAR5);

if (VAR6 & FUN4(VAR4))
return VAR12;
else
return VAR13;
}