FUN1 (const char *VAR1, double VAR2, double VAR3)
{
double_bits_t VAR4;
double_bits_t VAR5;

VAR4.VAR6 = VAR2;
VAR5.VAR6 = VAR3;

FUN2 ("", VAR1,
(unsigned int) VAR4.VAR7[1], (unsigned int) VAR4.VAR7[0],
(unsigned int) VAR5.VAR7[1], (unsigned int) VAR5.VAR7[0]);

bool VAR8;
if (FUN3 (VAR2) && FUN3 (VAR3))
{
VAR8 = true;
}
else
{
int64_t VAR9 = (VAR10) (VAR4.VAR11 - VAR5.VAR11);
if (VAR9 < 0)
{
VAR9 = -VAR9;
}

if (VAR9 <= 1) 
{
VAR8 = true;
if (VAR9 != 0)
{
FUN2 ("");
}
}
else
{
VAR8 = false;
}
}
FUN2 ("", VAR8 ? "" : "");

VAR12 &= VAR8;
}