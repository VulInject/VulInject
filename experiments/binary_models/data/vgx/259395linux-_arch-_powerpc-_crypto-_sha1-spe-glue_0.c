static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
const unsigned int VAR7 = VAR6->VAR8 & 0x3f;
char *VAR9 = (char *)VAR6->VAR10 + VAR7;
int VAR11;
VAR12 *VAR13 = (VAR12 *)(((char *)&VAR6->VAR10) + 56);
VAR14 *VAR15 = (VAR14 *)VAR4;

VAR11 = 55 - VAR7;
*VAR9++ = 0x80;

FUN3();

if (VAR11 < 0) {
memset(VAR9, 0x00, VAR11 + sizeof (VAR16));
FUN4(VAR6->VAR17, VAR6->VAR10, 1);
VAR9 = (char *)VAR6->VAR10;
VAR11 = 56;
}

memset(VAR9, 0, VAR11);
*VAR13 = FUN5(VAR6->VAR8 << 3);
FUN4(VAR6->VAR17, VAR6->VAR10, 1);

FUN6();

VAR15[0] = FUN7(VAR6->VAR17[0]);
VAR15[1] = FUN7(VAR6->VAR17[1]);
VAR15[2] = FUN7(VAR6->VAR17[2]);
VAR15[3] = FUN7(VAR6->VAR17[3]);
VAR15[4] = FUN7(VAR6->VAR17[4]);

FUN8(VAR6);
return 0;
}