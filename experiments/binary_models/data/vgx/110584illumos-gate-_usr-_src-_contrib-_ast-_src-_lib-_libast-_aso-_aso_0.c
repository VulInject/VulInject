VAR1
FUN1(uint8_t volatile* VAR2, int VAR3, int VAR4)
{
ssize_t		VAR5;

if (!VAR6.VAR7)
return FUN2(VAR2, VAR3, VAR4);
if (!VAR6.VAR7)
{
U16_8_t		VAR8;
U16_8_t		VAR9;
VAR10*	VAR11;
int		VAR12;
int		VAR13;

VAR12 = (int)(FUN3(VAR2) & (sizeof(VAR8.VAR13) - 1));
VAR11 = (VAR10*)((char*)0 + (FUN3(VAR2) & ~(sizeof(VAR8.VAR13) - 1)));
for (;;)
{
VAR8.VAR13 = VAR11->VAR13;
VAR8.VAR14[VAR12] = VAR3;
VAR9.VAR13 = VAR8.VAR13;
VAR9.VAR14[VAR12] = VAR4;
if (FUN4(&VAR11->VAR13, VAR8.VAR13, VAR9.VAR13) == VAR8.VAR13)
break;
for (VAR13 = 0;; VAR13++)
if (VAR13 >= FUN5(VAR8.VAR14))
return VAR11->VAR14[VAR12];
else if (VAR13 != VAR12 && VAR8.VAR14[VAR13] != VAR11->VAR14[VAR13])
break;
}
return VAR3;
}
if (!VAR6.VAR7)
{
U32_8_t		VAR8;
U32_8_t		VAR9;
VAR15*	VAR11;
int		VAR12;
int		VAR13;

VAR12 = (int)(FUN3(VAR2) & (sizeof(VAR8.VAR13) - 1));
VAR11 = (VAR15*)((char*)0 + (FUN3(VAR2) & ~(sizeof(VAR8.VAR13) - 1)));
for (;;)
{
VAR8.VAR13 = VAR11->VAR13;
VAR8.VAR14[VAR12] = VAR3;
VAR9.VAR13 = VAR8.VAR13;
VAR9.VAR14[VAR12] = VAR4;
if (FUN6(&VAR11->VAR13, VAR8.VAR13, VAR9.VAR13) == VAR8.VAR13)
break;
for (VAR13 = 0;; VAR13++)
if (VAR13 >= FUN5(VAR8.VAR14))
return VAR11->VAR14[VAR12];
else if (VAR13 != VAR12 && VAR8.VAR14[VAR13] != VAR11->VAR14[VAR13])
break;
}
return VAR3;
}
if (!VAR6.VAR7)
{
U64_8_t		VAR8;
U64_8_t		VAR9;
VAR16*	VAR11;
int		VAR12;
int		VAR13;

VAR12 = (int)(FUN3(VAR2) & (sizeof(VAR8.VAR13) - 1));
VAR11 = (VAR16*)((char*)0 + (FUN3(VAR2) & ~(sizeof(VAR8.VAR13) - 1)));
for (;;)
{
VAR8.VAR13 = VAR11->VAR13;
VAR8.VAR14[VAR12] = VAR3;
VAR9.VAR13 = VAR8.VAR13;
VAR9.VAR14[VAR12] = VAR4;
if (FUN7(&VAR11->VAR13, VAR8.VAR13, VAR9.VAR13) == VAR8.VAR13)
break;
for (VAR13 = 0;; VAR13++)
if (VAR13 >= FUN5(VAR8.VAR14))
return VAR11->VAR14[VAR12];
else if (VAR13 != VAR12 && VAR8.VAR14[VAR13] != VAR11->VAR14[VAR13])
break;
}
return VAR3;
}
VAR5 = FUN8(VAR6.VAR17, 0, VAR2);
if (*VAR2 == VAR3)
*VAR2 = VAR4;
else
VAR3 = *VAR2;
FUN8(VAR6.VAR17, VAR5, VAR2);
return VAR3;
}