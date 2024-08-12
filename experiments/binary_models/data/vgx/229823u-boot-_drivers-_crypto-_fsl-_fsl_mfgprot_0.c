int FUN1(const VAR1 *VAR2, int VAR3, VAR1 *VAR4, VAR1 *VAR5, VAR1 *VAR6)
{
int VAR7, VAR8;
VAR9 *VAR10;


VAR10 = memalign(VAR11,
sizeof(VAR12) * VAR13);
if (!VAR10) {
FUN2("");
return -VAR14;
}

FUN3(VAR10, VAR2, VAR3, VAR4, VAR5, VAR6);

VAR7 = FUN4(sizeof(VAR12) * VAR13,
VAR11);
FUN5((unsigned long)VAR10, (unsigned long)VAR10 + VAR7);

VAR7 = FUN4(VAR3, VAR11);
FUN5((unsigned long)VAR2, (unsigned long)VAR2 + VAR7);

VAR7 = FUN4(VAR15, VAR11);
FUN5((unsigned long)VAR4, (unsigned long)VAR4 + VAR7);

VAR7 = FUN4(VAR16, VAR11);
FUN5((unsigned long)VAR5, (unsigned long)VAR5 + VAR7);
FUN5((unsigned long)VAR6, (unsigned long)VAR6 + VAR7);


FUN6("");

VAR8 = FUN7(VAR10);
if (VAR8) {
FUN2("", VAR8);
goto VAR17;
}

VAR7 = FUN4(VAR15, VAR11);
FUN8((unsigned long)VAR4,
(unsigned long)VAR4 + VAR7);

VAR7 = FUN4(VAR16, VAR11);
FUN8((unsigned long)VAR5, (unsigned long)VAR5 + VAR7);
FUN8((unsigned long)VAR6, (unsigned long)VAR6 + VAR7);

VAR17:
free(VAR10);
return VAR8;
}