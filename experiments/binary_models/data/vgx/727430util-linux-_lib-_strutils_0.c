int FUN1(const char *VAR1, const char *VAR2)
{
while (VAR1 && VAR2) {
size_t VAR3, VAR4;
const char *VAR5 = FUN2(VAR1, &VAR3);
const char *VAR6 = FUN2(VAR2, &VAR4);




if (VAR3 + VAR4 == 0)
return 1;


if (VAR3 + VAR4 == 1 &&
((VAR5 && *VAR5 == '') || (VAR6 && *VAR6 == '')))
return 1;

if (!VAR5 || !VAR6)
break;
if (VAR3 != VAR4 || FUN3(VAR5, VAR6, VAR3) != 0)
break;

VAR1 = VAR5 + VAR3;
VAR2 = VAR6 + VAR4;
};

return 0;
}