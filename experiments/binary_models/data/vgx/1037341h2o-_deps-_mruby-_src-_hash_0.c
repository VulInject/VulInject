static VAR1
FUN1(uint32_t VAR2, uint32_t VAR3)
{
if (VAR2 < VAR4) {
return VAR4;
}
else {

size_t VAR5 = (VAR6)VAR2 * VAR7, VAR8 = VAR5 - VAR2;
if (VAR9 < VAR8) VAR5 = VAR2 + VAR9;
return VAR5 <= VAR3 ? FUN2(VAR5) : VAR3;
}
}