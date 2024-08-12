int FUN1(struct VAR1 *VAR2)
{
int VAR3;
void *VAR4;

VAR3 = (VAR2->VAR5->VAR6 & (VAR7 - 1)) / sizeof(VAR8);
if (VAR3 == 0)
return 0;

VAR3 = VAR9 - VAR3;
FUN2(VAR3 & 1);

VAR4 = FUN3(VAR2, VAR3);
if (FUN4(VAR4))
return FUN5(VAR4);

FUN6(VAR4, (VAR10)VAR11 << 32 | VAR11, VAR3 / 2);
FUN7(VAR2, VAR4 + VAR3);

FUN2(VAR2->VAR5->VAR6 & (VAR7 - 1));
return 0;
}