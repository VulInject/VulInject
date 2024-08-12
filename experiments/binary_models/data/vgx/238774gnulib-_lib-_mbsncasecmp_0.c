FUN1 (const char *VAR1, const char *VAR2, size_t VAR3)
{
if (VAR1 == VAR2 || VAR3 == 0)
return 0;


if (VAR4 > 1)
{
mbui_iterator_t VAR5;
mbui_iterator_t VAR6;

FUN2 (VAR5, VAR1);
FUN2 (VAR6, VAR2);

while (FUN3 (VAR5) && FUN3 (VAR6))
{
int VAR7 = FUN4 (FUN5 (VAR5), FUN5 (VAR6));

if (VAR7 != 0)
return VAR7;

if (--VAR3 == 0)
return 0;

FUN6 (VAR5);
FUN6 (VAR6);
}
if (FUN3 (VAR5))

return 1;
if (FUN3 (VAR6))

return -1;
return 0;
}
else
{
const unsigned char *VAR8 = (const unsigned char *) VAR1;
const unsigned char *VAR9 = (const unsigned char *) VAR2;
unsigned char VAR10, VAR11;

for (; ; VAR8++, VAR9++)
{
VAR10 = FUN7 (*VAR8);
VAR11 = FUN7 (*VAR9);

if (--VAR3 == 0 || VAR10 == '' || VAR10 != VAR11)
break;
}

if (VAR12 <= VAR13)
return VAR10 - VAR11;
else

return FUN8 (VAR10, VAR11);
}
}