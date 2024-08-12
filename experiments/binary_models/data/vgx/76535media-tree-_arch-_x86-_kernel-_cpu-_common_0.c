void FUN1(struct VAR1 *VAR2)
{
unsigned int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8;

VAR3 = VAR2->VAR9;

if (VAR3 >= 0x80000005) {
FUN2(0x80000005, &VAR4, &VAR5, &VAR6, &VAR7);
VAR2->VAR10 = (VAR6>>24) + (VAR7>>24);

VAR2->VAR11 = 0;
}

if (VAR3 < 0x80000006)	
return;

FUN2(0x80000006, &VAR4, &VAR5, &VAR6, &VAR7);
VAR8 = VAR6 >> 16;

VAR2->VAR11 += ((VAR5 >> 16) & 0xfff) + (VAR5 & 0xfff);

if (VAR12->VAR13)
VAR8 = VAR12->FUN3(VAR2, VAR8);


if (VAR14 != -1)
VAR8 = VAR14;

if (VAR8 == 0)
return;		

VAR2->VAR10 = VAR8;
}