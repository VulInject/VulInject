static int FUN1(struct VAR1 *VAR2,
unsigned VAR3, size_t VAR4,
const void VAR5 *VAR6)
{
unsigned VAR7;
void *VAR8;
int VAR9;

if (VAR4 > VAR10)
return 0;

VAR7 = VAR10;
VAR8 = NULL;	
while (VAR3--) {
if (VAR7 > VAR10-VAR4) {
struct VAR11 *VAR11 = FUN2(VAR12);

VAR9 = -VAR13;
if (VAR11 == NULL)
goto VAR14;

VAR8 = FUN3(VAR11);

FUN4(&VAR11->VAR15, VAR2);
VAR7 = 0;
}

VAR9 = -VAR16;
if (FUN5(VAR8 + VAR7, VAR6, VAR4))
goto VAR14;

VAR6 += VAR4;
VAR7 += VAR4;
}

VAR9 = 0;

VAR14:
return VAR9;
}