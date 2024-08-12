static int FUN1(struct VAR1 *VAR2,
const VAR3 *VAR4, unsigned int VAR5)
{
unsigned long VAR6 = FUN2(VAR2);
struct VAR7 *VAR8 = FUN3(VAR2);
VAR3 *VAR9, *VAR10;
unsigned long VAR11;
int VAR12;

VAR11 = VAR5 + VAR6;
VAR9 = FUN4(VAR11, VAR13);
if (!VAR9)
return -VAR14;

VAR10 = (VAR3 *)FUN5((unsigned long)VAR9, VAR6 + 1);
memcpy(VAR10, VAR4, VAR5);
VAR12 = VAR8->FUN6(VAR2, VAR10, VAR5);
FUN7(VAR9);
return VAR12;
}