static int FUN1(struct VAR1 *VAR2, const unsigned char *VAR3,
int VAR4)
{
struct VAR5 *VAR5 = VAR2->VAR6;
int VAR7 = VAR4;
int VAR8 = 0;
int VAR9 = 0;

if (!FUN2(VAR5))
return -VAR10;

if (!VAR4)
return 0;

while (1) {
VAR9 = FUN3(VAR11, VAR7);
VAR5->VAR12->FUN4(VAR5->VAR12->VAR13,
(void *)(VAR3 + VAR8),
VAR9,
VAR5->VAR14,
VAR15,
VAR5);
VAR8 += VAR9;
VAR7 -= VAR9;
if (VAR7 <= 0)
break;
}

return VAR4;
}