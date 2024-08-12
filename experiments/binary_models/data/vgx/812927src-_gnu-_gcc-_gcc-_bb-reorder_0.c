FUN1 (basic_block VAR1, edge VAR2, int VAR3, int VAR4, int VAR5,
int VAR6, edge VAR7)
{
bool VAR8;


int VAR9 = VAR5 / 10;
int VAR10 = VAR6 / 10;

if (VAR3 > VAR5 + VAR9)

VAR8 = true;
else if (VAR3 < VAR5 - VAR9)

VAR8 = false;
else if (VAR4 < VAR6 - VAR10)

VAR8 = true;
else if (VAR4 > VAR6 + VAR10)

VAR8 = false;
else if (VAR2->VAR11->VAR12 == VAR1)

VAR8 = true;
else
VAR8 = false;



if (!VAR8
&& VAR13
&& VAR7
&& (VAR7->VAR14 & VAR15)
&& !(VAR2->VAR14 & VAR15))
VAR8 = true;

return VAR8;
}