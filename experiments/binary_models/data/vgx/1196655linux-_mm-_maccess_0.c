}
FUN1(VAR1);

while (VAR2 >= sizeof(VAR3)) {					\
FUN2(VAR4, VAR5, VAR3, VAR6);		\
VAR4 += sizeof(VAR3);					\
VAR5 += sizeof(VAR3);					\
VAR2 -= sizeof(VAR3);					\
}

long FUN3(void *VAR4, const void *VAR5, size_t VAR7)
{
unsigned long VAR8 = 0;

if (!FUN4(VAR9))
VAR8 = (unsigned long)VAR4 | (unsigned long)VAR5;

FUN5();
if (!(VAR8 & 7))
FUN6(VAR4, VAR5, VAR7, VAR10, VAR11);
if (!(VAR8 & 3))
FUN6(VAR4, VAR5, VAR7, VAR12, VAR11);
if (!(VAR8 & 1))
FUN6(VAR4, VAR5, VAR7, VAR13, VAR11);
FUN6(VAR4, VAR5, VAR7, VAR14, VAR11);
FUN7();
return 0;
VAR11:
FUN7();
return -VAR15;
}