int FUN1(const VAR1 *VAR2,  VAR3 *VAR4,
int VAR5, VAR6 *VAR7, size_t VAR8)
{
void *VAR9 = FUN2(4096);
int VAR10 = 0;

switch (VAR5) {
case 0x0004:
VAR10 = FUN3(VAR2, VAR9);
break;
case 0x0005:
VAR10 = FUN4(VAR2, VAR9);
break;
}

if (VAR10 > VAR8) {
VAR10 = VAR8;
}
memcpy(VAR7, VAR9, VAR10);
FUN5(VAR9);

VAR4->VAR11 = VAR10;
return 0;
}