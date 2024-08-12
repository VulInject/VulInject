void
FUN1(unsigned long VAR1, const char *VAR2, int VAR3, int VAR4, int VAR5,
const char *VAR6, size_t VAR7)
{
VAR8 *VAR9;

if (!VAR10)
return;

VAR9 = FUN2(VAR1);
if (!VAR9)
{
FUN3(VAR11, VAR12, "", VAR1);
return;
}

if (VAR5 == 0)
{
if (VAR9->VAR13)
FUN3(VAR11, VAR12,
"");

if (strcmp(VAR2, "") != 0)
{
FUN3(VAR11, VAR12, ""%VAR14\"",
VAR2);
return;
}

VAR9->VAR13 = VAR3 * VAR4 * 4;
if (VAR9->VAR13 > 32 * 32 * 4)
{
FUN3(VAR11, VAR12, "",
VAR9->VAR13);
VAR9->VAR13 = 0;
return;
}

VAR9->VAR15 = 0;
}
else
{
if (!VAR9->VAR13)
return;
}

if (VAR7 > (VAR9->VAR13 - VAR9->VAR15))
{
FUN3(VAR11, VAR12,
"",
VAR7, VAR9->VAR13 - VAR9->VAR15);
VAR9->VAR13 = 0;
return;
}

memcpy(VAR9->VAR16 + VAR9->VAR15, VAR6, VAR7);
VAR9->VAR15 += VAR7;

if (VAR9->VAR15 == VAR9->VAR13)
{
FUN4(VAR9->VAR17, VAR3, VAR4, VAR9->VAR16);
VAR9->VAR13 = 0;
}
}