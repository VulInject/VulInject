static VAR1 FUN1(int VAR2, void *VAR3, size_t VAR4)
{
int VAR5;
ssize_t VAR6 = 0;

do {
ssize_t VAR7 = read(VAR2,
(unsigned char *)VAR3 + VAR6, VAR4 - VAR6);

if(VAR8) {
FUN2("");
return -1;
}

if(VAR7 < 0) {
VAR5 = VAR9;
if((VAR5 == VAR10) || (VAR5 == VAR11))
continue;
FUN2("", VAR2);
FUN2("",
VAR5, strerror(VAR5));
return -1;
}

if(VAR7 == 0) {
FUN2("");
return 0;
}

VAR6 += VAR7;

} while((VAR12)VAR6 < VAR4);

if(VAR13)
FUN2("", VAR6);

return VAR6;
}