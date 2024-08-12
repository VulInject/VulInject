static VAR1 *FUN1(VAR2 *VAR3, unsigned *VAR4,
VAR5 *VAR6, unsigned VAR7)
{
VAR1 *VAR8;
uint8_t VAR9[8], VAR10[8];
uint32_t VAR11;
unsigned VAR12;

if (FUN2(VAR3, VAR9, 8) < 8)
return NULL;

VAR11 = *VAR6;
FUN3(VAR9, VAR10, 8, *VAR6, &VAR11, 0);

VAR12 = FUN4(VAR10+2, 6);

if (VAR10[0] != '' || VAR10[1] != '' || (VAR7>0 && VAR12 != VAR7)) {
uint32_t VAR13 = FUN5(VAR9, VAR7);
VAR11 = VAR13;
FUN3(VAR9, VAR10, 8, VAR13, &VAR11, 0);
VAR12 = FUN4(VAR10+2, 6);
if (VAR10[0] != '' || VAR10[1] != '' || VAR7 != VAR12)
return NULL;
*VAR6 = VAR13;
}

if (VAR12 < 8)
return NULL;

VAR8 = FUN6(VAR12);
if (!VAR8)
return NULL;

memcpy(VAR8, VAR10, 8);

*VAR4 = VAR12;
VAR12 -= 8;

if (FUN2(VAR3, VAR8+8, VAR12) != VAR12) {
FUN7(VAR8);
return NULL;
}

FUN3(VAR8 + 8, VAR8 + 8, VAR12, *VAR6, &VAR11, 0);

return VAR8;
}