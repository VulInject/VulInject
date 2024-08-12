void FUN1(struct VAR1 *VAR2)
{
u64 VAR3;

VAR2->VAR4 = FUN2(VAR5, 0);
VAR3 = FUN3((void *)VAR2->VAR4);


FUN4(VAR2, VAR6, 4,
(VAR7)(VAR3 & 0xffffffff));
FUN4(VAR2, VAR8, 4,
(VAR7)(VAR3 >> 32 & 0xffffffff));
}