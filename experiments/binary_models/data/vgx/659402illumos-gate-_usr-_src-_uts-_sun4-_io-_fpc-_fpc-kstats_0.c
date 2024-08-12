int
FUN1(VAR1 *VAR2)
{
fire_perfcnt_t VAR3;
int VAR4;
uint8_t VAR5 = 0;

if (FUN2(VAR2, &VAR4) != VAR6)
return (VAR7);

if (VAR4 & VAR8)
VAR5++;
if (VAR4 & VAR9)
VAR5++;

for (VAR3 = VAR10; VAR3 < VAR11; VAR3++) {
if (VAR3 == VAR10) {
if (VAR4 & VAR12) {
if (FUN3(VAR3, 1) != VAR13)
return (VAR7);
}
} else {
if (!VAR5)
break;
if (FUN3(VAR3, VAR5) != VAR13)
return (VAR7);
}
}

return (VAR6);
}