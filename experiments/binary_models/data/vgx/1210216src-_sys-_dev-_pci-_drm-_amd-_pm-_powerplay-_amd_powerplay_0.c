static int FUN1(void *VAR1, uint32_t VAR2)
{
struct VAR3 *VAR4 = VAR1;
uint32_t VAR5;

if (!VAR4 || !VAR4->VAR6)
return -VAR7;

if (VAR4->VAR8->VAR9 == NULL) {
FUN2("", VAR10);
return -VAR7;
}

if (VAR2 == 0)
VAR2 = VAR4->VAR11;

VAR5 = VAR4->VAR11;
if (VAR4->VAR12) {
VAR5 *= (100 + VAR4->VAR13.VAR14);
VAR5 /= 100;
}

if (VAR2 > VAR5)
return -VAR7;

VAR4->VAR8->FUN3(VAR4, VAR2);
VAR4->VAR15 = VAR2;
return 0;
}