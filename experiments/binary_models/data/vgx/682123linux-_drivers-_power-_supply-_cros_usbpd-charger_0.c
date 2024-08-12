static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3,
unsigned int VAR4,
void *VAR5,
unsigned int VAR6,
void *VAR7,
unsigned int VAR8)
{
struct VAR9 *VAR10 = VAR2->VAR10;
struct VAR11 *VAR12;
int VAR13;

VAR12 = FUN2(FUN3(VAR12, VAR14, FUN4(VAR6, VAR8)), VAR15);
if (!VAR12)
return -VAR16;

VAR12->VAR3 = VAR3;
VAR12->VAR4 = VAR10->VAR17 + VAR4;
VAR12->VAR6 = VAR6;
VAR12->VAR8 = VAR8;

if (VAR6)
memcpy(VAR12->VAR14, VAR5, VAR6);

VAR13 = FUN5(VAR2->VAR18, VAR12);
if (VAR13 >= 0 && VAR8)
memcpy(VAR7, VAR12->VAR14, VAR8);

FUN6(VAR12);
return VAR13;
}