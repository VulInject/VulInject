int memcmp(const void *VAR1, const void *VAR2, size_t VAR3)
{
const unsigned char *VAR4 = VAR1, *VAR5 = VAR2, *VAR6 = VAR4 + VAR3;
int VAR7 = 0;

while (VAR4 < VAR6) {
VAR7 = *VAR4++ - *VAR5++;
if (VAR7)
break;
}
return VAR7;
}